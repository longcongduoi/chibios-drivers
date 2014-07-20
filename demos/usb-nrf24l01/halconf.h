/*
    Some Device Drivers for ChibiOS/RT

    Copyright (C) 2014 Konstantin Oblaukhov
    Copyright (C) 2006-2013 Giovanni Di Sirio

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

#ifndef _HALCONF_H_
#define _HALCONF_H_

#include "mcuconf.h"

#if !defined(HAL_USE_TM)
#define HAL_USE_TM                  FALSE
#endif

#if !defined(HAL_USE_PAL)
#define HAL_USE_PAL                 TRUE
#endif

#if !defined(HAL_USE_ADC)
#define HAL_USE_ADC                 FALSE
#endif

#if !defined(HAL_USE_CAN)
#define HAL_USE_CAN                 FALSE
#endif

#if !defined(HAL_USE_EXT)
#define HAL_USE_EXT                 TRUE
#endif

#if !defined(HAL_USE_GPT)
#define HAL_USE_GPT                 FALSE
#endif

#if !defined(HAL_USE_I2C)
#define HAL_USE_I2C                 FALSE
#endif

#if !defined(HAL_USE_ICU)
#define HAL_USE_ICU                 FALSE
#endif

#if !defined(HAL_USE_MAC)
#define HAL_USE_MAC                 FALSE
#endif

#if !defined(HAL_USE_MMC_SPI)
#define HAL_USE_MMC_SPI             FALSE
#endif

#if !defined(HAL_USE_PWM)
#define HAL_USE_PWM                 FALSE
#endif

#if !defined(HAL_USE_RTC)
#define HAL_USE_RTC                 FALSE
#endif

#if !defined(HAL_USE_SDC)
#define HAL_USE_SDC                 FALSE
#endif

#if !defined(HAL_USE_SERIAL)
#define HAL_USE_SERIAL              FALSE
#endif

#if !defined(HAL_USE_SERIAL_USB)
#define HAL_USE_SERIAL_USB          TRUE
#endif

#if !defined(HAL_USE_SPI)
#define HAL_USE_SPI                 TRUE
#endif

#if !defined(HAL_USE_UART)
#define HAL_USE_UART                FALSE
#endif

#if !defined(HAL_USE_USB)
#define HAL_USE_USB                 TRUE
#endif


#if !defined(ADC_USE_WAIT)
#define ADC_USE_WAIT                TRUE
#endif

#if !defined(ADC_USE_MUTUAL_EXCLUSION)
#define ADC_USE_MUTUAL_EXCLUSION    TRUE
#endif


#if !defined(CAN_USE_SLEEP_MODE)
#define CAN_USE_SLEEP_MODE          TRUE
#endif


#if !defined(I2C_USE_MUTUAL_EXCLUSION)
#define I2C_USE_MUTUAL_EXCLUSION    TRUE
#endif


#if !defined(MAC_USE_ZERO_COPY)
#define MAC_USE_ZERO_COPY           FALSE
#endif

#if !defined(MAC_USE_EVENTS)
#define MAC_USE_EVENTS              TRUE
#endif

#if !defined(MMC_NICE_WAITING)
#define MMC_NICE_WAITING            TRUE
#endif


#if !defined(SDC_INIT_RETRY)
#define SDC_INIT_RETRY              100
#endif

#if !defined(SDC_MMC_SUPPORT)
#define SDC_MMC_SUPPORT             FALSE
#endif

#if !defined(SDC_NICE_WAITING)
#define SDC_NICE_WAITING            TRUE
#endif


#if !defined(SERIAL_DEFAULT_BITRATE)
#define SERIAL_DEFAULT_BITRATE      115200
#endif

#if !defined(SERIAL_BUFFERS_SIZE)
#define SERIAL_BUFFERS_SIZE         16
#endif


#if !defined(SPI_USE_WAIT)
#define SPI_USE_WAIT                TRUE
#endif

#if !defined(SPI_USE_MUTUAL_EXCLUSION)
#define SPI_USE_MUTUAL_EXCLUSION    TRUE
#endif

#endif
