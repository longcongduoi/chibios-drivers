/*
    Some Device Drivers for ChibiOS/RT

    Copyright (C) 2014 Konstantin Oblaukhov

    Licensed under the Apache License, Version 2.0 (the "License");
    you may not use this file except in compliance with the License.
    You may obtain a copy of the License at

        http://www.apache.org/licenses/LICENSE-2.0

    Unless required by applicable law or agreed to in writing, software
    distributed under the License is distributed on an "AS IS" BASIS,
    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
    See the License for the specific language governing permissions and
    limitations under the License.
*/

#include "ch.h"
#include "hal.h"

#include "nrf24l01.h"
#include "usb-serial.h"

static const SPIConfig nrf24l01SPI =
{
    NULL,
    GPIOH,
    GPIOH_PIN13,
    SPI_CR1_BR_0
};

static const NRF24L01Config nrf24l01Config =
{
    &SPID2,
    GPIOH,
    GPIOH_PIN14
};

static void nrfExtCallback(EXTDriver *extp, expchannel_t channel);
static const EXTConfig extcfg =
{
    {
        {EXT_CH_MODE_DISABLED, NULL},
        {EXT_CH_MODE_DISABLED, NULL},
        {EXT_CH_MODE_DISABLED, NULL},
        {EXT_CH_MODE_DISABLED, NULL},
        {EXT_CH_MODE_DISABLED, NULL},
        {EXT_CH_MODE_DISABLED, NULL},
        {EXT_CH_MODE_DISABLED, NULL},
        {EXT_CH_MODE_DISABLED, NULL},
        {EXT_CH_MODE_DISABLED, NULL},
        {EXT_CH_MODE_DISABLED, NULL},
        {EXT_CH_MODE_DISABLED, NULL},
        {EXT_CH_MODE_DISABLED, NULL},
        {EXT_CH_MODE_DISABLED, NULL},
        {EXT_CH_MODE_DISABLED, NULL},
        {EXT_CH_MODE_DISABLED, NULL},
        {EXT_CH_MODE_FALLING_EDGE | EXT_CH_MODE_AUTOSTART | EXT_MODE_GPIOH, nrfExtCallback},
        {EXT_CH_MODE_DISABLED, NULL},
        {EXT_CH_MODE_DISABLED, NULL},
        {EXT_CH_MODE_DISABLED, NULL},
        {EXT_CH_MODE_DISABLED, NULL},
        {EXT_CH_MODE_DISABLED, NULL},
        {EXT_CH_MODE_DISABLED, NULL},
        {EXT_CH_MODE_DISABLED, NULL}
    }
};

static WORKING_AREA(recieverWorkingArea, 128);

static NRF24L01Driver nrf24l01;
static SerialUSBDriver SDU;

static Mutex nrfMutex;

static const uint8_t addr[5] = "METEO";

static uint8_t serialInBuf[32];
static uint8_t serialOutBuf[32];

static void nrfExtCallback(EXTDriver *extp, expchannel_t channel)
{
    nrf24l01ExtIRQ(&nrf24l01);
}

void initNRF24L01(NRF24L01Driver *nrfp)
{
    nrf24l01EnableDynamicSize(nrfp);
    nrf24l01EnableDynamicPipeSize(nrfp, 0x3f);

    nrf24l01SetTXAddress(nrfp, addr);
    nrf24l01SetRXAddress(nrfp, 0, addr);
    nrf24l01SetPayloadSize(nrfp, 0, 32);

    nrf24l01FlushRX(nrfp);
    nrf24l01FlushTX(nrfp);
    nrf24l01ClearIRQ(nrfp, NRF24L01_RX_DR | NRF24L01_TX_DS | NRF24L01_MAX_RT);

    nrf24l01PowerUp(nrfp);
}

static msg_t receiverThread(void *arg)
{
    chRegSetThreadName("receiver");

    while (TRUE)
    {
        chMtxLock(&nrfMutex);
        size_t s = chnReadTimeout(&nrf24l01.channels[0], serialOutBuf, 32, MS2ST(10));
        chMtxUnlock();
        if (s)
            chSequentialStreamWrite(&SDU, serialOutBuf, s);
        chSchDoYieldS();
    }
    return 0;
}

int main(void)
{
    halInit();
    chSysInit();


    chMtxInit(&nrfMutex);

    palSetPadMode(GPIOH, GPIOH_PIN13, PAL_MODE_OUTPUT_PUSHPULL);
    palSetPad(GPIOH, GPIOH_PIN13);
    palSetPadMode(GPIOH, GPIOH_PIN14, PAL_MODE_OUTPUT_PUSHPULL);
    palClearPad(GPIOH, GPIOH_PIN14);
    palSetPadMode(GPIOH, GPIOH_PIN15, PAL_MODE_INPUT_PULLUP);

    spiStart(&SPID2, &nrf24l01SPI);
    extStart(&EXTD1, &extcfg);
    nrf24l01ObjectInit(&nrf24l01);
    nrf24l01Start(&nrf24l01, &nrf24l01Config);
    initSerial(&SDU);

    chThdSleepMilliseconds(1000);

    extChannelEnable(&EXTD1, 15);
    initNRF24L01(&nrf24l01);

    chThdCreateStatic(recieverWorkingArea, sizeof(recieverWorkingArea), NORMALPRIO, receiverThread, NULL);

    for (;;)
    {
        uint8_t size = chnReadTimeout(&SDU, serialInBuf, 32, MS2ST(10));

        if (!size)
            continue;

        chMtxLock(&nrfMutex);
        chnWriteTimeout(&nrf24l01.channels[0], serialInBuf, size, MS2ST(1000));
        chMtxUnlock();
    }
}
