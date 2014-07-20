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

#ifndef _BOARD_H_
#define _BOARD_H_

/*
 * Setup for WaveShare XCore407I/EVK407I board.
 */

/*
 * Board identifier.
 */
#define BOARD_WAVESHARE_XCORE407I
#define BOARD_NAME                  "WaveShare XCore407I/EVK407I"

/*
 * Ethernet PHY type.
 */
#define BOARD_PHY_ID                MII_DP83848I_ID
#define BOARD_PHY_RMII

/*
 * Board oscillators-related settings.
 */
#if !defined(STM32_LSECLK)
#define STM32_LSECLK                32768
#endif

#if !defined(STM32_HSECLK)
#define STM32_HSECLK                8000000
#endif


/*
 * Board voltages.
 * Required for performance limits calculation.
 */
#define STM32_VDD                   330

/*
 * MCU type as defined in the ST header file stm32f4xx.h.
 */
#define STM32F40_41xxx

/*
 * IO pins assignments.
 */
#define GPIOA_PIN0                  0
#define GPIOA_PIN1                  1
#define GPIOA_ETH_RMII_MDIO         2
#define GPIOA_OTG_HS_ULPI_D0        3
#define GPIOA_PIN4                  4
#define GPIOA_OTG_HS_ULPI_CK        5
#define GPIOA_PIN6                  6
#define GPIOA_ETH_RMII_CRS_DV       7
#define GPIOA_PIN8                  8
#define GPIOA_OTG_FS_VBUS           9
#define GPIOA_OTG_FS_ID             10
#define GPIOA_OTG_FS_DM             11
#define GPIOA_OTG_FS_DP             12
#define GPIOA_JTAG_TMS              13
#define GPIOA_JTAG_TCK              14
#define GPIOA_JTAG_TDI              15

#define GPIOB_OTG_HS_ULPI_D1        0
#define GPIOB_OTG_HS_ULPI_D2        1
#define GPIOB_PIN2                  2
#define GPIOB_JTAG_TDO              3
#define GPIOB_JTAG_TRST             4
#define GPIOB_OTG_HS_ULPI_D7        5
#define GPIOB_PIN6                  6
#define GPIOB_PIN7                  7
#define GPIOB_PIN8                  8
#define GPIOB_PIN9                  9
#define GPIOB_OTG_HS_ULPI_D3        10
#define GPIOB_OTG_HS_ULPI_D4        11
#define GPIOB_OTG_HS_ULPI_D5        12
#define GPIOB_OTG_HS_ULPI_D6        13
#define GPIOB_PIN14                 14
#define GPIOB_PIN15                 15

#define GPIOC_OTG_HS_ULPI_STP       0
#define GPIOC_USB_FS_BUSON          1
#define GPIOC_PIN2                  2
#define GPIOC_PIN3                  3
#define GPIOC_ETH_RMII_RXD0         4
#define GPIOC_ETH_RMII_RXD1         5
#define GPIOC_LCD_TP_IRQ            6
#define GPIOC_PIN7                  7
#define GPIOC_PIN8                  8
#define GPIOC_PIN9                  9
#define GPIOC_USART3_TX             10
#define GPIOC_USART3_RX             11
#define GPIOC_PIN12                 12
#define GPIOC_PIN13                 13
#define GPIOC_OSC32_IN              14
#define GPIOC_OSC32_OUT             15

#define GPIOD_FSMC_D2               0
#define GPIOD_FSMC_D3               1
#define GPIOD_PIN2                  2
#define GPIOD_PIN3                  3
#define GPIOD_FSMC_NOE              4
#define GPIOD_FSMC_NWE              5
#define GPIOD_FSMC_NWAIT            6
#define GPIOD_FSMC_NCE2             7
#define GPIOD_FSMC_D13              8
#define GPIOD_FSMC_D14              9
#define GPIOD_FSMC_D15              10
#define GPIOD_FSMC_A16              11
#define GPIOD_FSMC_A17              12
#define GPIOD_PIN13                 13
#define GPIOD_FSMC_D0               14
#define GPIOD_FSMC_D1               15

#define GPIOE_PIN0                  0
#define GPIOE_PIN1                  1
#define GPIOE_JOY_A                 2
#define GPIOE_JOY_B                 3
#define GPIOE_JOY_C                 4
#define GPIOE_JOY_D                 5
#define GPIOE_JOY_PRESS             6
#define GPIOE_FSMC_D4               7
#define GPIOE_FSMC_D5               8
#define GPIOE_FSMC_D6               9
#define GPIOE_FSMC_D7               10
#define GPIOE_FSMC_D8               11
#define GPIOE_FSMC_D9               12
#define GPIOE_FSMC_D10              13
#define GPIOE_FSMC_D11              14
#define GPIOE_FSMC_D12              15

#define GPIOF_PIN0                  0
#define GPIOF_PIN1                  1
#define GPIOF_PIN2                  2
#define GPIOF_PIN3                  3
#define GPIOF_PIN4                  4
#define GPIOF_PIN5                  5
#define GPIOF_PIN6                  6
#define GPIOF_LCD_PWM               7
#define GPIOF_PIN8                  8
#define GPIOF_PIN9                  9
#define GPIOF_PIN10                 10
#define GPIOF_PIN11                 11
#define GPIOF_PIN12                 12
#define GPIOF_PIN13                 13
#define GPIOF_PIN14                 14
#define GPIOF_PIN15                 15

#define GPIOG_PIN0                  0
#define GPIOG_PIN1                  1
#define GPIOG_PIN2                  2
#define GPIOG_PIN3                  3
#define GPIOG_PIN4                  4
#define GPIOG_FSMC_A15              5
#define GPIOG_PIN6                  6
#define GPIOG_PIN7                  7
#define GPIOG_PIN8                  8
#define GPIOG_PIN9                  9
#define GPIOG_PIN10                 10
#define GPIOG_ETH_RMII_TXEN         11
#define GPIOG_PIN12                 12
#define GPIOG_ETH_RMII_TXD0         13
#define GPIOG_ETH_RMII_TXD1         14
#define GPIOG_PIN15                 15

#define GPIOH_OSC_IN                0
#define GPIOH_OSC_OUT               1
#define GPIOH_LED1                  2
#define GPIOH_LED2                  3
#define GPIOH_OTG_HS_ULPI_NXT       4
#define GPIOH_PIN5                  5
#define GPIOH_PIN6                  6
#define GPIOH_PIN7                  7
#define GPIOH_PIN8                  8
#define GPIOH_PIN9                  9
#define GPIOH_PIN10                 10
#define GPIOH_OTG_HS_ULPI_RESET     11
#define GPIOH_PIN12                 12
#define GPIOH_PIN13                 13
#define GPIOH_PIN14                 14
#define GPIOH_PIN15                 15

#define GPIOI_SPI2_CS_TP            0
#define GPIOI_SPI2_SCK              1
#define GPIOI_SPI2_MISO             2
#define GPIOI_SPI2_MOSI             3
#define GPIOI_PIN4                  4
#define GPIOI_PIN5                  5
#define GPIOI_PIN6                  6
#define GPIOI_PIN7                  7
#define GPIOI_LED3                  8
#define GPIOI_PIN9                  9
#define GPIOI_LED4                  10
#define GPIOI_OTG_HS_ULPI_DIR       11
#define GPIOI_PIN12                 12
#define GPIOI_PIN13                 13
#define GPIOI_PIN14                 14
#define GPIOI_PIN15                 15

/*
 * I/O ports initial setup, this configuration is established soon after reset
 * in the initialization code.
 * Please refer to the STM32 Reference Manual for details.
 */
#define PIN_MODE_INPUT(n)           (0U << ((n) * 2))
#define PIN_MODE_OUTPUT(n)          (1U << ((n) * 2))
#define PIN_MODE_ALTERNATE(n)       (2U << ((n) * 2))
#define PIN_MODE_ANALOG(n)          (3U << ((n) * 2))
#define PIN_ODR_LOW(n)              (0U << (n))
#define PIN_ODR_HIGH(n)             (1U << (n))
#define PIN_OTYPE_PUSHPULL(n)       (0U << (n))
#define PIN_OTYPE_OPENDRAIN(n)      (1U << (n))
#define PIN_OSPEED_2M(n)            (0U << ((n) * 2))
#define PIN_OSPEED_25M(n)           (1U << ((n) * 2))
#define PIN_OSPEED_50M(n)           (2U << ((n) * 2))
#define PIN_OSPEED_100M(n)          (3U << ((n) * 2))
#define PIN_PUPDR_FLOATING(n)       (0U << ((n) * 2))
#define PIN_PUPDR_PULLUP(n)         (1U << ((n) * 2))
#define PIN_PUPDR_PULLDOWN(n)       (2U << ((n) * 2))
#define PIN_AFIO_AF(n, v)           ((v##U) << ((n % 8) * 4))

/*
 * GPIOA setup:
 *
 * PA0  - PIN0                      (input pullup).
 * PA1  - PIN1                      (input pullup).
 * PA2  - ETH_RMII_MDIO             (alternate 11).
 * PA3  - OTG_HS_ULPI_D0            (alternate 10).
 * PA4  - PIN4                      (input pullup).
 * PA5  - OTG_HS_ULPI_CK            (alternate 10).
 * PA6  - PIN6                      (input pullup).
 * PA7  - ETH_RMII_CRS_DV           (alternate 11).
 * PA8  - PIN8                      (input pullup).
 * PA9  - OTG_FS_VBUS               (input pulldown).
 * PA10 - OTG_FS_ID                 (alternate 10).
 * PA11 - OTG_FS_DM                 (alternate 10).
 * PA12 - OTG_FS_DP                 (alternate 10).
 * PA13 - JTAG_TMS                  (alternate 0).
 * PA14 - JTAG_TCK                  (alternate 0).
 * PA15 - JTAG_TDI                  (alternate 0).
 */
#define VAL_GPIOA_MODER             (PIN_MODE_INPUT(GPIOA_PIN0) |           \
                                     PIN_MODE_INPUT(GPIOA_PIN1) |           \
                                     PIN_MODE_ALTERNATE(GPIOA_ETH_RMII_MDIO) |\
                                     PIN_MODE_ALTERNATE(GPIOA_OTG_HS_ULPI_D0) |\
                                     PIN_MODE_INPUT(GPIOA_PIN4) |           \
                                     PIN_MODE_ALTERNATE(GPIOA_OTG_HS_ULPI_CK) |\
                                     PIN_MODE_INPUT(GPIOA_PIN6) |           \
                                     PIN_MODE_ALTERNATE(GPIOA_ETH_RMII_CRS_DV) |\
                                     PIN_MODE_INPUT(GPIOA_PIN8) |           \
                                     PIN_MODE_INPUT(GPIOA_OTG_FS_VBUS) |    \
                                     PIN_MODE_ALTERNATE(GPIOA_OTG_FS_ID) |  \
                                     PIN_MODE_ALTERNATE(GPIOA_OTG_FS_DM) |  \
                                     PIN_MODE_ALTERNATE(GPIOA_OTG_FS_DP) |  \
                                     PIN_MODE_ALTERNATE(GPIOA_JTAG_TMS) |   \
                                     PIN_MODE_ALTERNATE(GPIOA_JTAG_TCK) |   \
                                     PIN_MODE_ALTERNATE(GPIOA_JTAG_TDI))
#define VAL_GPIOA_OTYPER            (PIN_OTYPE_PUSHPULL(GPIOA_PIN0) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOA_PIN1) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOA_ETH_RMII_MDIO) |\
                                     PIN_OTYPE_PUSHPULL(GPIOA_OTG_HS_ULPI_D0) |\
                                     PIN_OTYPE_PUSHPULL(GPIOA_PIN4) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOA_OTG_HS_ULPI_CK) |\
                                     PIN_OTYPE_PUSHPULL(GPIOA_PIN6) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOA_ETH_RMII_CRS_DV) |\
                                     PIN_OTYPE_PUSHPULL(GPIOA_PIN8) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOA_OTG_FS_VBUS) |\
                                     PIN_OTYPE_PUSHPULL(GPIOA_OTG_FS_ID) |  \
                                     PIN_OTYPE_PUSHPULL(GPIOA_OTG_FS_DM) |  \
                                     PIN_OTYPE_PUSHPULL(GPIOA_OTG_FS_DP) |  \
                                     PIN_OTYPE_PUSHPULL(GPIOA_JTAG_TMS) |   \
                                     PIN_OTYPE_PUSHPULL(GPIOA_JTAG_TCK) |   \
                                     PIN_OTYPE_PUSHPULL(GPIOA_JTAG_TDI))
#define VAL_GPIOA_OSPEEDR           (PIN_OSPEED_100M(GPIOA_PIN0) |          \
                                     PIN_OSPEED_100M(GPIOA_PIN1) |          \
                                     PIN_OSPEED_100M(GPIOA_ETH_RMII_MDIO) | \
                                     PIN_OSPEED_100M(GPIOA_OTG_HS_ULPI_D0) |\
                                     PIN_OSPEED_100M(GPIOA_PIN4) |          \
                                     PIN_OSPEED_100M(GPIOA_OTG_HS_ULPI_CK) |\
                                     PIN_OSPEED_100M(GPIOA_PIN6) |          \
                                     PIN_OSPEED_100M(GPIOA_ETH_RMII_CRS_DV) |\
                                     PIN_OSPEED_100M(GPIOA_PIN8) |          \
                                     PIN_OSPEED_100M(GPIOA_OTG_FS_VBUS) |   \
                                     PIN_OSPEED_100M(GPIOA_OTG_FS_ID) |     \
                                     PIN_OSPEED_100M(GPIOA_OTG_FS_DM) |     \
                                     PIN_OSPEED_100M(GPIOA_OTG_FS_DP) |     \
                                     PIN_OSPEED_100M(GPIOA_JTAG_TMS) |      \
                                     PIN_OSPEED_100M(GPIOA_JTAG_TCK) |      \
                                     PIN_OSPEED_100M(GPIOA_JTAG_TDI))
#define VAL_GPIOA_PUPDR             (PIN_PUPDR_PULLUP(GPIOA_PIN0) |         \
                                     PIN_PUPDR_PULLUP(GPIOA_PIN1) |         \
                                     PIN_PUPDR_FLOATING(GPIOA_ETH_RMII_MDIO) |\
                                     PIN_PUPDR_FLOATING(GPIOA_OTG_HS_ULPI_D0) |\
                                     PIN_PUPDR_PULLUP(GPIOA_PIN4) |         \
                                     PIN_PUPDR_FLOATING(GPIOA_OTG_HS_ULPI_CK) |\
                                     PIN_PUPDR_PULLUP(GPIOA_PIN6) |         \
                                     PIN_PUPDR_FLOATING(GPIOA_ETH_RMII_CRS_DV) |\
                                     PIN_PUPDR_PULLUP(GPIOA_PIN8) |         \
                                     PIN_PUPDR_PULLDOWN(GPIOA_OTG_FS_VBUS) |\
                                     PIN_PUPDR_FLOATING(GPIOA_OTG_FS_ID) |  \
                                     PIN_PUPDR_FLOATING(GPIOA_OTG_FS_DM) |  \
                                     PIN_PUPDR_FLOATING(GPIOA_OTG_FS_DP) |  \
                                     PIN_PUPDR_FLOATING(GPIOA_JTAG_TMS) |   \
                                     PIN_PUPDR_FLOATING(GPIOA_JTAG_TCK) |   \
                                     PIN_PUPDR_FLOATING(GPIOA_JTAG_TDI))
#define VAL_GPIOA_ODR               (PIN_ODR_HIGH(GPIOA_PIN0) |             \
                                     PIN_ODR_HIGH(GPIOA_PIN1) |             \
                                     PIN_ODR_HIGH(GPIOA_ETH_RMII_MDIO) |    \
                                     PIN_ODR_HIGH(GPIOA_OTG_HS_ULPI_D0) |   \
                                     PIN_ODR_HIGH(GPIOA_PIN4) |             \
                                     PIN_ODR_HIGH(GPIOA_OTG_HS_ULPI_CK) |   \
                                     PIN_ODR_HIGH(GPIOA_PIN6) |             \
                                     PIN_ODR_HIGH(GPIOA_ETH_RMII_CRS_DV) |  \
                                     PIN_ODR_HIGH(GPIOA_PIN8) |             \
                                     PIN_ODR_HIGH(GPIOA_OTG_FS_VBUS) |      \
                                     PIN_ODR_HIGH(GPIOA_OTG_FS_ID) |        \
                                     PIN_ODR_HIGH(GPIOA_OTG_FS_DM) |        \
                                     PIN_ODR_HIGH(GPIOA_OTG_FS_DP) |        \
                                     PIN_ODR_HIGH(GPIOA_JTAG_TMS) |         \
                                     PIN_ODR_HIGH(GPIOA_JTAG_TCK) |         \
                                     PIN_ODR_HIGH(GPIOA_JTAG_TDI))
#define VAL_GPIOA_AFRL              (PIN_AFIO_AF(GPIOA_PIN0, 0) |           \
                                     PIN_AFIO_AF(GPIOA_PIN1, 0) |           \
                                     PIN_AFIO_AF(GPIOA_ETH_RMII_MDIO, 11) | \
                                     PIN_AFIO_AF(GPIOA_OTG_HS_ULPI_D0, 10) |\
                                     PIN_AFIO_AF(GPIOA_PIN4, 0) |           \
                                     PIN_AFIO_AF(GPIOA_OTG_HS_ULPI_CK, 10) |\
                                     PIN_AFIO_AF(GPIOA_PIN6, 0) |           \
                                     PIN_AFIO_AF(GPIOA_ETH_RMII_CRS_DV, 11))
#define VAL_GPIOA_AFRH              (PIN_AFIO_AF(GPIOA_PIN8, 0) |           \
                                     PIN_AFIO_AF(GPIOA_OTG_FS_VBUS, 0) |    \
                                     PIN_AFIO_AF(GPIOA_OTG_FS_ID, 10) |     \
                                     PIN_AFIO_AF(GPIOA_OTG_FS_DM, 10) |     \
                                     PIN_AFIO_AF(GPIOA_OTG_FS_DP, 10) |     \
                                     PIN_AFIO_AF(GPIOA_JTAG_TMS, 0) |       \
                                     PIN_AFIO_AF(GPIOA_JTAG_TCK, 0) |       \
                                     PIN_AFIO_AF(GPIOA_JTAG_TDI, 0))

/*
 * GPIOB setup:
 *
 * PB0  - OTG_HS_ULPI_D1            (alternate 10).
 * PB1  - OTG_HS_ULPI_D2            (alternate 10).
 * PB2  - PIN2                      (input pullup).
 * PB3  - JTAG_TDO                  (alternate 0).
 * PB4  - JTAG_TRST                 (alternate 0).
 * PB5  - OTG_HS_ULPI_D7            (alternate 10).
 * PB6  - PIN6                      (input pullup).
 * PB7  - PIN7                      (input pullup).
 * PB8  - PIN8                      (input pullup).
 * PB9  - PIN9                      (input pullup).
 * PB10 - OTG_HS_ULPI_D3            (alternate 10).
 * PB11 - OTG_HS_ULPI_D4            (alternate 10).
 * PB12 - OTG_HS_ULPI_D5            (alternate 10).
 * PB13 - OTG_HS_ULPI_D6            (alternate 10).
 * PB14 - PIN14                     (input pullup).
 * PB15 - PIN15                     (input pullup).
 */
#define VAL_GPIOB_MODER             (PIN_MODE_ALTERNATE(GPIOB_OTG_HS_ULPI_D1) |\
                                     PIN_MODE_ALTERNATE(GPIOB_OTG_HS_ULPI_D2) |\
                                     PIN_MODE_INPUT(GPIOB_PIN2) |           \
                                     PIN_MODE_ALTERNATE(GPIOB_JTAG_TDO) |   \
                                     PIN_MODE_ALTERNATE(GPIOB_JTAG_TRST) |  \
                                     PIN_MODE_ALTERNATE(GPIOB_OTG_HS_ULPI_D7) |\
                                     PIN_MODE_INPUT(GPIOB_PIN6) |           \
                                     PIN_MODE_INPUT(GPIOB_PIN7) |           \
                                     PIN_MODE_INPUT(GPIOB_PIN8) |           \
                                     PIN_MODE_INPUT(GPIOB_PIN9) |           \
                                     PIN_MODE_ALTERNATE(GPIOB_OTG_HS_ULPI_D3) |\
                                     PIN_MODE_ALTERNATE(GPIOB_OTG_HS_ULPI_D4) |\
                                     PIN_MODE_ALTERNATE(GPIOB_OTG_HS_ULPI_D5) |\
                                     PIN_MODE_ALTERNATE(GPIOB_OTG_HS_ULPI_D6) |\
                                     PIN_MODE_INPUT(GPIOB_PIN14) |          \
                                     PIN_MODE_INPUT(GPIOB_PIN15))
#define VAL_GPIOB_OTYPER            (PIN_OTYPE_PUSHPULL(GPIOB_OTG_HS_ULPI_D1) |\
                                     PIN_OTYPE_PUSHPULL(GPIOB_OTG_HS_ULPI_D2) |\
                                     PIN_OTYPE_PUSHPULL(GPIOB_PIN2) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOB_JTAG_TDO) |   \
                                     PIN_OTYPE_PUSHPULL(GPIOB_JTAG_TRST) |  \
                                     PIN_OTYPE_PUSHPULL(GPIOB_OTG_HS_ULPI_D7) |\
                                     PIN_OTYPE_PUSHPULL(GPIOB_PIN6) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOB_PIN7) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOB_PIN8) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOB_PIN9) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOB_OTG_HS_ULPI_D3) |\
                                     PIN_OTYPE_PUSHPULL(GPIOB_OTG_HS_ULPI_D4) |\
                                     PIN_OTYPE_PUSHPULL(GPIOB_OTG_HS_ULPI_D5) |\
                                     PIN_OTYPE_PUSHPULL(GPIOB_OTG_HS_ULPI_D6) |\
                                     PIN_OTYPE_PUSHPULL(GPIOB_PIN14) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOB_PIN15))
#define VAL_GPIOB_OSPEEDR           (PIN_OSPEED_100M(GPIOB_OTG_HS_ULPI_D1) |\
                                     PIN_OSPEED_100M(GPIOB_OTG_HS_ULPI_D2) |\
                                     PIN_OSPEED_100M(GPIOB_PIN2) |          \
                                     PIN_OSPEED_100M(GPIOB_JTAG_TDO) |      \
                                     PIN_OSPEED_100M(GPIOB_JTAG_TRST) |     \
                                     PIN_OSPEED_100M(GPIOB_OTG_HS_ULPI_D7) |\
                                     PIN_OSPEED_100M(GPIOB_PIN6) |          \
                                     PIN_OSPEED_100M(GPIOB_PIN7) |          \
                                     PIN_OSPEED_100M(GPIOB_PIN8) |          \
                                     PIN_OSPEED_100M(GPIOB_PIN9) |          \
                                     PIN_OSPEED_100M(GPIOB_OTG_HS_ULPI_D3) |\
                                     PIN_OSPEED_100M(GPIOB_OTG_HS_ULPI_D4) |\
                                     PIN_OSPEED_100M(GPIOB_OTG_HS_ULPI_D5) |\
                                     PIN_OSPEED_100M(GPIOB_OTG_HS_ULPI_D6) |\
                                     PIN_OSPEED_100M(GPIOB_PIN14) |         \
                                     PIN_OSPEED_100M(GPIOB_PIN15))
#define VAL_GPIOB_PUPDR             (PIN_PUPDR_FLOATING(GPIOB_OTG_HS_ULPI_D1) |\
                                     PIN_PUPDR_FLOATING(GPIOB_OTG_HS_ULPI_D2) |\
                                     PIN_PUPDR_PULLUP(GPIOB_PIN2) |         \
                                     PIN_PUPDR_FLOATING(GPIOB_JTAG_TDO) |   \
                                     PIN_PUPDR_FLOATING(GPIOB_JTAG_TRST) |  \
                                     PIN_PUPDR_FLOATING(GPIOB_OTG_HS_ULPI_D7) |\
                                     PIN_PUPDR_PULLUP(GPIOB_PIN6) |         \
                                     PIN_PUPDR_PULLUP(GPIOB_PIN7) |         \
                                     PIN_PUPDR_PULLUP(GPIOB_PIN8) |         \
                                     PIN_PUPDR_PULLUP(GPIOB_PIN9) |         \
                                     PIN_PUPDR_FLOATING(GPIOB_OTG_HS_ULPI_D3) |\
                                     PIN_PUPDR_FLOATING(GPIOB_OTG_HS_ULPI_D4) |\
                                     PIN_PUPDR_FLOATING(GPIOB_OTG_HS_ULPI_D5) |\
                                     PIN_PUPDR_FLOATING(GPIOB_OTG_HS_ULPI_D6) |\
                                     PIN_PUPDR_PULLUP(GPIOB_PIN14) |        \
                                     PIN_PUPDR_PULLUP(GPIOB_PIN15))
#define VAL_GPIOB_ODR               (PIN_ODR_HIGH(GPIOB_OTG_HS_ULPI_D1) |   \
                                     PIN_ODR_HIGH(GPIOB_OTG_HS_ULPI_D2) |   \
                                     PIN_ODR_HIGH(GPIOB_PIN2) |             \
                                     PIN_ODR_HIGH(GPIOB_JTAG_TDO) |         \
                                     PIN_ODR_HIGH(GPIOB_JTAG_TRST) |        \
                                     PIN_ODR_HIGH(GPIOB_OTG_HS_ULPI_D7) |   \
                                     PIN_ODR_HIGH(GPIOB_PIN6) |             \
                                     PIN_ODR_HIGH(GPIOB_PIN7) |             \
                                     PIN_ODR_HIGH(GPIOB_PIN8) |             \
                                     PIN_ODR_HIGH(GPIOB_PIN9) |             \
                                     PIN_ODR_HIGH(GPIOB_OTG_HS_ULPI_D3) |   \
                                     PIN_ODR_HIGH(GPIOB_OTG_HS_ULPI_D4) |   \
                                     PIN_ODR_HIGH(GPIOB_OTG_HS_ULPI_D5) |   \
                                     PIN_ODR_HIGH(GPIOB_OTG_HS_ULPI_D6) |   \
                                     PIN_ODR_HIGH(GPIOB_PIN14) |            \
                                     PIN_ODR_HIGH(GPIOB_PIN15))
#define VAL_GPIOB_AFRL              (PIN_AFIO_AF(GPIOB_OTG_HS_ULPI_D1, 10) |\
                                     PIN_AFIO_AF(GPIOB_OTG_HS_ULPI_D2, 10) |\
                                     PIN_AFIO_AF(GPIOB_PIN2, 0) |           \
                                     PIN_AFIO_AF(GPIOB_JTAG_TDO, 0) |       \
                                     PIN_AFIO_AF(GPIOB_JTAG_TRST, 0) |      \
                                     PIN_AFIO_AF(GPIOB_OTG_HS_ULPI_D7, 10) |\
                                     PIN_AFIO_AF(GPIOB_PIN6, 0) |           \
                                     PIN_AFIO_AF(GPIOB_PIN7, 0))
#define VAL_GPIOB_AFRH              (PIN_AFIO_AF(GPIOB_PIN8, 0) |           \
                                     PIN_AFIO_AF(GPIOB_PIN9, 0) |           \
                                     PIN_AFIO_AF(GPIOB_OTG_HS_ULPI_D3, 10) |\
                                     PIN_AFIO_AF(GPIOB_OTG_HS_ULPI_D4, 10) |\
                                     PIN_AFIO_AF(GPIOB_OTG_HS_ULPI_D5, 10) |\
                                     PIN_AFIO_AF(GPIOB_OTG_HS_ULPI_D6, 10) |\
                                     PIN_AFIO_AF(GPIOB_PIN14, 0) |          \
                                     PIN_AFIO_AF(GPIOB_PIN15, 0))

/*
 * GPIOC setup:
 *
 * PC0  - OTG_HS_ULPI_STP           (alternate 10).
 * PC1  - USB_FS_BUSON              (output pushpull maximum).
 * PC2  - PIN2                      (input pullup).
 * PC3  - PIN3                      (input pullup).
 * PC4  - ETH_RMII_RXD0             (alternate 11).
 * PC5  - ETH_RMII_RXD1             (alternate 11).
 * PC6  - LCD_TP_IRQ                (input pullup).
 * PC7  - PIN7                      (input pullup).
 * PC8  - PIN8                      (input pullup).
 * PC9  - PIN9                      (input pullup).
 * PC10 - USART3_TX                 (alternate 7).
 * PC11 - USART3_RX                 (alternate 7).
 * PC12 - PIN12                     (input pullup).
 * PC13 - PIN13                     (input pullup).
 * PC14 - OSC32_IN                  (input floating).
 * PC15 - OSC32_OUT                 (input floating).
 */
#define VAL_GPIOC_MODER             (PIN_MODE_ALTERNATE(GPIOC_OTG_HS_ULPI_STP) |\
                                     PIN_MODE_OUTPUT(GPIOC_USB_FS_BUSON) |  \
                                     PIN_MODE_INPUT(GPIOC_PIN2) |           \
                                     PIN_MODE_INPUT(GPIOC_PIN3) |           \
                                     PIN_MODE_ALTERNATE(GPIOC_ETH_RMII_RXD0) |\
                                     PIN_MODE_ALTERNATE(GPIOC_ETH_RMII_RXD1) |\
                                     PIN_MODE_INPUT(GPIOC_LCD_TP_IRQ) |     \
                                     PIN_MODE_INPUT(GPIOC_PIN7) |           \
                                     PIN_MODE_INPUT(GPIOC_PIN8) |           \
                                     PIN_MODE_INPUT(GPIOC_PIN9) |           \
                                     PIN_MODE_ALTERNATE(GPIOC_USART3_TX) |  \
                                     PIN_MODE_ALTERNATE(GPIOC_USART3_RX) |  \
                                     PIN_MODE_INPUT(GPIOC_PIN12) |          \
                                     PIN_MODE_ALTERNATE(GPIOC_PIN12) |          \
                                     PIN_MODE_INPUT(GPIOC_PIN13) |          \
                                     PIN_MODE_INPUT(GPIOC_OSC32_IN) |       \
                                     PIN_MODE_INPUT(GPIOC_OSC32_OUT))

#define VAL_GPIOC_OTYPER            (PIN_OTYPE_PUSHPULL(GPIOC_OTG_HS_ULPI_STP) |\
                                     PIN_OTYPE_PUSHPULL(GPIOC_USB_FS_BUSON) |\
                                     PIN_OTYPE_PUSHPULL(GPIOC_PIN2) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOC_PIN3) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOC_ETH_RMII_RXD0) |\
                                     PIN_OTYPE_PUSHPULL(GPIOC_ETH_RMII_RXD1) |\
                                     PIN_OTYPE_PUSHPULL(GPIOC_LCD_TP_IRQ) | \
                                     PIN_OTYPE_PUSHPULL(GPIOC_PIN7) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOC_PIN8) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOC_PIN9) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOC_USART3_TX) |  \
                                     PIN_OTYPE_PUSHPULL(GPIOC_USART3_RX) |  \
                                     PIN_OTYPE_PUSHPULL(GPIOC_PIN12) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOC_PIN13) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOC_OSC32_IN) |   \
                                     PIN_OTYPE_PUSHPULL(GPIOC_OSC32_OUT))
#define VAL_GPIOC_OSPEEDR           (PIN_OSPEED_100M(GPIOC_OTG_HS_ULPI_STP) |\
                                     PIN_OSPEED_100M(GPIOC_USB_FS_BUSON) |  \
                                     PIN_OSPEED_100M(GPIOC_PIN2) |          \
                                     PIN_OSPEED_100M(GPIOC_PIN3) |          \
                                     PIN_OSPEED_100M(GPIOC_ETH_RMII_RXD0) | \
                                     PIN_OSPEED_100M(GPIOC_ETH_RMII_RXD1) | \
                                     PIN_OSPEED_100M(GPIOC_LCD_TP_IRQ) |    \
                                     PIN_OSPEED_100M(GPIOC_PIN7) |          \
                                     PIN_OSPEED_100M(GPIOC_PIN8) |          \
                                     PIN_OSPEED_100M(GPIOC_PIN9) |          \
                                     PIN_OSPEED_100M(GPIOC_USART3_TX) |     \
                                     PIN_OSPEED_100M(GPIOC_USART3_RX) |     \
                                     PIN_OSPEED_100M(GPIOC_PIN12) |         \
                                     PIN_OSPEED_100M(GPIOC_PIN13) |         \
                                     PIN_OSPEED_100M(GPIOC_OSC32_IN) |      \
                                     PIN_OSPEED_100M(GPIOC_OSC32_OUT))
#define VAL_GPIOC_PUPDR             (PIN_PUPDR_FLOATING(GPIOC_OTG_HS_ULPI_STP) |\
                                     PIN_PUPDR_FLOATING(GPIOC_USB_FS_BUSON) |\
                                     PIN_PUPDR_PULLUP(GPIOC_PIN2) |         \
                                     PIN_PUPDR_PULLUP(GPIOC_PIN3) |         \
                                     PIN_PUPDR_FLOATING(GPIOC_ETH_RMII_RXD0) |\
                                     PIN_PUPDR_FLOATING(GPIOC_ETH_RMII_RXD1) |\
                                     PIN_PUPDR_PULLUP(GPIOC_LCD_TP_IRQ) |   \
                                     PIN_PUPDR_PULLUP(GPIOC_PIN7) |         \
                                     PIN_PUPDR_PULLUP(GPIOC_PIN8) |         \
                                     PIN_PUPDR_PULLUP(GPIOC_PIN9) |         \
                                     PIN_PUPDR_FLOATING(GPIOC_USART3_TX) |  \
                                     PIN_PUPDR_FLOATING(GPIOC_USART3_RX) |  \
                                     PIN_PUPDR_PULLUP(GPIOC_PIN12) |        \
                                     PIN_PUPDR_PULLUP(GPIOC_PIN13) |        \
                                     PIN_PUPDR_FLOATING(GPIOC_OSC32_IN) |   \
                                     PIN_PUPDR_FLOATING(GPIOC_OSC32_OUT))

#define VAL_GPIOC_ODR               (PIN_ODR_HIGH(GPIOC_OTG_HS_ULPI_STP) |  \
                                     PIN_ODR_HIGH(GPIOC_USB_FS_BUSON) |     \
                                     PIN_ODR_HIGH(GPIOC_PIN2) |             \
                                     PIN_ODR_HIGH(GPIOC_PIN3) |             \
                                     PIN_ODR_HIGH(GPIOC_ETH_RMII_RXD0) |    \
                                     PIN_ODR_HIGH(GPIOC_ETH_RMII_RXD1) |    \
                                     PIN_ODR_HIGH(GPIOC_LCD_TP_IRQ) |       \
                                     PIN_ODR_HIGH(GPIOC_PIN7) |             \
                                     PIN_ODR_HIGH(GPIOC_PIN8) |             \
                                     PIN_ODR_HIGH(GPIOC_PIN9) |             \
                                     PIN_ODR_HIGH(GPIOC_USART3_TX) |        \
                                     PIN_ODR_HIGH(GPIOC_USART3_RX) |        \
                                     PIN_ODR_HIGH(GPIOC_PIN12) |            \
                                     PIN_ODR_HIGH(GPIOC_PIN13) |            \
                                     PIN_ODR_HIGH(GPIOC_OSC32_IN) |         \
                                     PIN_ODR_HIGH(GPIOC_OSC32_OUT))
#define VAL_GPIOC_AFRL              (PIN_AFIO_AF(GPIOC_OTG_HS_ULPI_STP, 10) |\
                                     PIN_AFIO_AF(GPIOC_USB_FS_BUSON, 0) |   \
                                     PIN_AFIO_AF(GPIOC_PIN2, 0) |           \
                                     PIN_AFIO_AF(GPIOC_PIN3, 0) |           \
                                     PIN_AFIO_AF(GPIOC_ETH_RMII_RXD0, 11) | \
                                     PIN_AFIO_AF(GPIOC_ETH_RMII_RXD1, 11) | \
                                     PIN_AFIO_AF(GPIOC_LCD_TP_IRQ, 0) |     \
                                     PIN_AFIO_AF(GPIOC_PIN7, 0))
#define VAL_GPIOC_AFRH              (PIN_AFIO_AF(GPIOC_PIN8, 0) |           \
                                     PIN_AFIO_AF(GPIOC_PIN9, 0) |           \
                                     PIN_AFIO_AF(GPIOC_USART3_TX, 7) |      \
                                     PIN_AFIO_AF(GPIOC_USART3_RX, 7) |      \
                                     PIN_AFIO_AF(GPIOC_PIN12, 0) |          \
                                     PIN_AFIO_AF(GPIOC_PIN13, 0) |          \
                                     PIN_AFIO_AF(GPIOC_OSC32_IN, 0) |       \
                                     PIN_AFIO_AF(GPIOC_OSC32_OUT, 0))


/*
 * GPIOD setup:
 *
 * PD0  - FSMC_D2                   (alternate 12).
 * PD1  - FSMC_D3                   (alternate 12).
 * PD2  - PIN2                      (input pullup).
 * PD3  - PIN3                      (input pullup).
 * PD4  - FSMC_NOE                  (alternate 12).
 * PD5  - FSMC_NWE                  (alternate 12).
 * PD6  - FSMC_NWAIT                (alternate 12).
 * PD7  - FSMC_NCE2                 (alternate 12).
 * PD8  - FSMC_D13                  (alternate 12).
 * PD9  - FSMC_D14                  (alternate 12).
 * PD10 - FSMC_D15                  (alternate 12).
 * PD11 - FSMC_A16                  (alternate 12).
 * PD12 - FSMC_A17                  (alternate 12).
 * PD13 - PIN13                     (input pullup).
 * PD14 - FSMC_D0                   (alternate 12).
 * PD15 - FSMC_D1                   (alternate 12).
 */
#define VAL_GPIOD_MODER             (PIN_MODE_ALTERNATE(GPIOD_FSMC_D2) |    \
                                     PIN_MODE_ALTERNATE(GPIOD_FSMC_D3) |    \
                                     PIN_MODE_ALTERNATE(GPIOD_PIN2) |           \
                                     PIN_MODE_INPUT(GPIOD_PIN3) |           \
                                     PIN_MODE_ALTERNATE(GPIOD_FSMC_NOE) |   \
                                     PIN_MODE_ALTERNATE(GPIOD_FSMC_NWE) |   \
                                     PIN_MODE_ALTERNATE(GPIOD_FSMC_NWAIT) | \
                                     PIN_MODE_ALTERNATE(GPIOD_FSMC_NCE2) |  \
                                     PIN_MODE_ALTERNATE(GPIOD_FSMC_D13) |   \
                                     PIN_MODE_ALTERNATE(GPIOD_FSMC_D14) |   \
                                     PIN_MODE_ALTERNATE(GPIOD_FSMC_D15) |   \
                                     PIN_MODE_ALTERNATE(GPIOD_FSMC_A16) |   \
                                     PIN_MODE_ALTERNATE(GPIOD_FSMC_A17) |   \
                                     PIN_MODE_INPUT(GPIOD_PIN13) |          \
                                     PIN_MODE_ALTERNATE(GPIOD_FSMC_D0) |    \
                                     PIN_MODE_ALTERNATE(GPIOD_FSMC_D1))

#define VAL_GPIOD_OTYPER            (PIN_OTYPE_PUSHPULL(GPIOD_FSMC_D2) |    \
                                     PIN_OTYPE_PUSHPULL(GPIOD_FSMC_D3) |    \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PIN2) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PIN3) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOD_FSMC_NOE) |   \
                                     PIN_OTYPE_PUSHPULL(GPIOD_FSMC_NWE) |   \
                                     PIN_OTYPE_PUSHPULL(GPIOD_FSMC_NWAIT) | \
                                     PIN_OTYPE_PUSHPULL(GPIOD_FSMC_NCE2) |  \
                                     PIN_OTYPE_PUSHPULL(GPIOD_FSMC_D13) |   \
                                     PIN_OTYPE_PUSHPULL(GPIOD_FSMC_D14) |   \
                                     PIN_OTYPE_PUSHPULL(GPIOD_FSMC_D15) |   \
                                     PIN_OTYPE_PUSHPULL(GPIOD_FSMC_A16) |   \
                                     PIN_OTYPE_PUSHPULL(GPIOD_FSMC_A17) |   \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PIN13) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOD_FSMC_D0) |    \
                                     PIN_OTYPE_PUSHPULL(GPIOD_FSMC_D1))
#define VAL_GPIOD_OSPEEDR           (PIN_OSPEED_100M(GPIOD_FSMC_D2) |       \
                                     PIN_OSPEED_100M(GPIOD_FSMC_D3) |       \
                                     PIN_OSPEED_100M(GPIOD_PIN2) |          \
                                     PIN_OSPEED_100M(GPIOD_PIN3) |          \
                                     PIN_OSPEED_100M(GPIOD_FSMC_NOE) |      \
                                     PIN_OSPEED_100M(GPIOD_FSMC_NWE) |      \
                                     PIN_OSPEED_100M(GPIOD_FSMC_NWAIT) |    \
                                     PIN_OSPEED_100M(GPIOD_FSMC_NCE2) |     \
                                     PIN_OSPEED_100M(GPIOD_FSMC_D13) |      \
                                     PIN_OSPEED_100M(GPIOD_FSMC_D14) |      \
                                     PIN_OSPEED_100M(GPIOD_FSMC_D15) |      \
                                     PIN_OSPEED_100M(GPIOD_FSMC_A16) |      \
                                     PIN_OSPEED_100M(GPIOD_FSMC_A17) |      \
                                     PIN_OSPEED_100M(GPIOD_PIN13) |         \
                                     PIN_OSPEED_100M(GPIOD_FSMC_D0) |       \
                                     PIN_OSPEED_100M(GPIOD_FSMC_D1))
#define VAL_GPIOD_PUPDR             (PIN_PUPDR_FLOATING(GPIOD_FSMC_D2) |    \
                                     PIN_PUPDR_FLOATING(GPIOD_FSMC_D3) |    \
                                     PIN_PUPDR_PULLUP(GPIOD_PIN2) |         \
                                     PIN_PUPDR_PULLUP(GPIOD_PIN3) |         \
                                     PIN_PUPDR_FLOATING(GPIOD_FSMC_NOE) |   \
                                     PIN_PUPDR_FLOATING(GPIOD_FSMC_NWE) |   \
                                     PIN_PUPDR_FLOATING(GPIOD_FSMC_NWAIT) | \
                                     PIN_PUPDR_FLOATING(GPIOD_FSMC_NCE2) |  \
                                     PIN_PUPDR_FLOATING(GPIOD_FSMC_D13) |   \
                                     PIN_PUPDR_FLOATING(GPIOD_FSMC_D14) |   \
                                     PIN_PUPDR_FLOATING(GPIOD_FSMC_D15) |   \
                                     PIN_PUPDR_FLOATING(GPIOD_FSMC_A16) |   \
                                     PIN_PUPDR_FLOATING(GPIOD_FSMC_A17) |   \
                                     PIN_PUPDR_PULLUP(GPIOD_PIN13) |        \
                                     PIN_PUPDR_FLOATING(GPIOD_FSMC_D0) |    \
                                     PIN_PUPDR_FLOATING(GPIOD_FSMC_D1))
#define VAL_GPIOD_ODR               (PIN_ODR_HIGH(GPIOD_FSMC_D2) |          \
                                     PIN_ODR_HIGH(GPIOD_FSMC_D3) |          \
                                     PIN_ODR_HIGH(GPIOD_PIN2) |             \
                                     PIN_ODR_HIGH(GPIOD_PIN3) |             \
                                     PIN_ODR_HIGH(GPIOD_FSMC_NOE) |         \
                                     PIN_ODR_HIGH(GPIOD_FSMC_NWE) |         \
                                     PIN_ODR_HIGH(GPIOD_FSMC_NWAIT) |       \
                                     PIN_ODR_HIGH(GPIOD_FSMC_NCE2) |        \
                                     PIN_ODR_HIGH(GPIOD_FSMC_D13) |         \
                                     PIN_ODR_HIGH(GPIOD_FSMC_D14) |         \
                                     PIN_ODR_HIGH(GPIOD_FSMC_D15) |         \
                                     PIN_ODR_HIGH(GPIOD_FSMC_A16) |         \
                                     PIN_ODR_HIGH(GPIOD_FSMC_A17) |         \
                                     PIN_ODR_HIGH(GPIOD_PIN13) |            \
                                     PIN_ODR_HIGH(GPIOD_FSMC_D0) |          \
                                     PIN_ODR_HIGH(GPIOD_FSMC_D1))
#define VAL_GPIOD_AFRL              (PIN_AFIO_AF(GPIOD_FSMC_D2, 12) |       \
                                     PIN_AFIO_AF(GPIOD_FSMC_D3, 12) |       \
                                     PIN_AFIO_AF(GPIOD_PIN2, 12) |           \
                                     PIN_AFIO_AF(GPIOD_PIN3, 0) |           \
                                     PIN_AFIO_AF(GPIOD_FSMC_NOE, 12) |      \
                                     PIN_AFIO_AF(GPIOD_FSMC_NWE, 12) |      \
                                     PIN_AFIO_AF(GPIOD_FSMC_NWAIT, 12) |    \
                                     PIN_AFIO_AF(GPIOD_FSMC_NCE2, 12))
#define VAL_GPIOD_AFRH              (PIN_AFIO_AF(GPIOD_FSMC_D13, 12) |      \
                                     PIN_AFIO_AF(GPIOD_FSMC_D14, 12) |      \
                                     PIN_AFIO_AF(GPIOD_FSMC_D15, 12) |      \
                                     PIN_AFIO_AF(GPIOD_FSMC_A16, 12) |      \
                                     PIN_AFIO_AF(GPIOD_FSMC_A17, 12) |      \
                                     PIN_AFIO_AF(GPIOD_PIN13, 0) |          \
                                     PIN_AFIO_AF(GPIOD_FSMC_D0, 12) |       \
                                     PIN_AFIO_AF(GPIOD_FSMC_D1, 12))

/*
 * GPIOE setup:
 *
 * PE0  - PIN0                      (input pullup).
 * PE1  - PIN1                      (input pullup).
 * PE2  - JOY_A                     (input pullup).
 * PE3  - JOY_B                     (input pullup).
 * PE4  - JOY_C                     (input pullup).
 * PE5  - JOY_D                     (input pullup).
 * PE6  - JOY_PRESS                 (input pullup).
 * PE7  - FSMC_D4                   (alternate 12).
 * PE8  - FSMC_D5                   (alternate 12).
 * PE9  - FSMC_D6                   (alternate 12).
 * PE10 - FSMC_D7                   (alternate 12).
 * PE11 - FSMC_D8                   (alternate 12).
 * PE12 - FSMC_D9                   (alternate 12).
 * PE13 - FSMC_D10                  (alternate 12).
 * PE14 - FSMC_D11                  (alternate 12).
 * PE15 - FSMC_D12                  (alternate 12).
 */
#define VAL_GPIOE_MODER             (PIN_MODE_INPUT(GPIOE_PIN0) |           \
                                     PIN_MODE_INPUT(GPIOE_PIN1) |           \
                                     PIN_MODE_INPUT(GPIOE_JOY_A) |          \
                                     PIN_MODE_INPUT(GPIOE_JOY_B) |          \
                                     PIN_MODE_INPUT(GPIOE_JOY_C) |          \
                                     PIN_MODE_INPUT(GPIOE_JOY_D) |          \
                                     PIN_MODE_INPUT(GPIOE_JOY_PRESS) |      \
                                     PIN_MODE_ALTERNATE(GPIOE_FSMC_D4) |    \
                                     PIN_MODE_ALTERNATE(GPIOE_FSMC_D5) |    \
                                     PIN_MODE_ALTERNATE(GPIOE_FSMC_D6) |    \
                                     PIN_MODE_ALTERNATE(GPIOE_FSMC_D7) |    \
                                     PIN_MODE_ALTERNATE(GPIOE_FSMC_D8) |    \
                                     PIN_MODE_ALTERNATE(GPIOE_FSMC_D9) |    \
                                     PIN_MODE_ALTERNATE(GPIOE_FSMC_D10) |   \
                                     PIN_MODE_ALTERNATE(GPIOE_FSMC_D11) |   \
                                     PIN_MODE_ALTERNATE(GPIOE_FSMC_D12))
#define VAL_GPIOE_OTYPER            (PIN_OTYPE_PUSHPULL(GPIOE_PIN0) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOE_PIN1) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOE_JOY_A) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOE_JOY_B) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOE_JOY_C) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOE_JOY_D) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOE_JOY_PRESS) |  \
                                     PIN_OTYPE_PUSHPULL(GPIOE_FSMC_D4) |    \
                                     PIN_OTYPE_PUSHPULL(GPIOE_FSMC_D5) |    \
                                     PIN_OTYPE_PUSHPULL(GPIOE_FSMC_D6) |    \
                                     PIN_OTYPE_PUSHPULL(GPIOE_FSMC_D7) |    \
                                     PIN_OTYPE_PUSHPULL(GPIOE_FSMC_D8) |    \
                                     PIN_OTYPE_PUSHPULL(GPIOE_FSMC_D9) |    \
                                     PIN_OTYPE_PUSHPULL(GPIOE_FSMC_D10) |   \
                                     PIN_OTYPE_PUSHPULL(GPIOE_FSMC_D11) |   \
                                     PIN_OTYPE_PUSHPULL(GPIOE_FSMC_D12))
#define VAL_GPIOE_OSPEEDR           (PIN_OSPEED_100M(GPIOE_PIN0) |          \
                                     PIN_OSPEED_100M(GPIOE_PIN1) |          \
                                     PIN_OSPEED_100M(GPIOE_JOY_A) |         \
                                     PIN_OSPEED_100M(GPIOE_JOY_B) |         \
                                     PIN_OSPEED_100M(GPIOE_JOY_C) |         \
                                     PIN_OSPEED_100M(GPIOE_JOY_D) |         \
                                     PIN_OSPEED_100M(GPIOE_JOY_PRESS) |     \
                                     PIN_OSPEED_100M(GPIOE_FSMC_D4) |       \
                                     PIN_OSPEED_100M(GPIOE_FSMC_D5) |       \
                                     PIN_OSPEED_100M(GPIOE_FSMC_D6) |       \
                                     PIN_OSPEED_100M(GPIOE_FSMC_D7) |       \
                                     PIN_OSPEED_100M(GPIOE_FSMC_D8) |       \
                                     PIN_OSPEED_100M(GPIOE_FSMC_D9) |       \
                                     PIN_OSPEED_100M(GPIOE_FSMC_D10) |      \
                                     PIN_OSPEED_100M(GPIOE_FSMC_D11) |      \
                                     PIN_OSPEED_100M(GPIOE_FSMC_D12))
#define VAL_GPIOE_PUPDR             (PIN_PUPDR_PULLUP(GPIOE_PIN0) |         \
                                     PIN_PUPDR_PULLUP(GPIOE_PIN1) |         \
                                     PIN_PUPDR_PULLUP(GPIOE_JOY_A) |        \
                                     PIN_PUPDR_PULLUP(GPIOE_JOY_B) |        \
                                     PIN_PUPDR_PULLUP(GPIOE_JOY_C) |        \
                                     PIN_PUPDR_PULLUP(GPIOE_JOY_D) |        \
                                     PIN_PUPDR_PULLUP(GPIOE_JOY_PRESS) |    \
                                     PIN_PUPDR_FLOATING(GPIOE_FSMC_D4) |    \
                                     PIN_PUPDR_FLOATING(GPIOE_FSMC_D5) |    \
                                     PIN_PUPDR_FLOATING(GPIOE_FSMC_D6) |    \
                                     PIN_PUPDR_FLOATING(GPIOE_FSMC_D7) |    \
                                     PIN_PUPDR_FLOATING(GPIOE_FSMC_D8) |    \
                                     PIN_PUPDR_FLOATING(GPIOE_FSMC_D9) |    \
                                     PIN_PUPDR_FLOATING(GPIOE_FSMC_D10) |   \
                                     PIN_PUPDR_FLOATING(GPIOE_FSMC_D11) |   \
                                     PIN_PUPDR_FLOATING(GPIOE_FSMC_D12))
#define VAL_GPIOE_ODR               (PIN_ODR_HIGH(GPIOE_PIN0) |             \
                                     PIN_ODR_HIGH(GPIOE_PIN1) |             \
                                     PIN_ODR_HIGH(GPIOE_JOY_A) |            \
                                     PIN_ODR_HIGH(GPIOE_JOY_B) |            \
                                     PIN_ODR_HIGH(GPIOE_JOY_C) |            \
                                     PIN_ODR_HIGH(GPIOE_JOY_D) |            \
                                     PIN_ODR_HIGH(GPIOE_JOY_PRESS) |        \
                                     PIN_ODR_HIGH(GPIOE_FSMC_D4) |          \
                                     PIN_ODR_HIGH(GPIOE_FSMC_D5) |          \
                                     PIN_ODR_HIGH(GPIOE_FSMC_D6) |          \
                                     PIN_ODR_HIGH(GPIOE_FSMC_D7) |          \
                                     PIN_ODR_HIGH(GPIOE_FSMC_D8) |          \
                                     PIN_ODR_HIGH(GPIOE_FSMC_D9) |          \
                                     PIN_ODR_HIGH(GPIOE_FSMC_D10) |         \
                                     PIN_ODR_HIGH(GPIOE_FSMC_D11) |         \
                                     PIN_ODR_HIGH(GPIOE_FSMC_D12))
#define VAL_GPIOE_AFRL              (PIN_AFIO_AF(GPIOE_PIN0, 0) |           \
                                     PIN_AFIO_AF(GPIOE_PIN1, 0) |           \
                                     PIN_AFIO_AF(GPIOE_JOY_A, 0) |          \
                                     PIN_AFIO_AF(GPIOE_JOY_B, 0) |          \
                                     PIN_AFIO_AF(GPIOE_JOY_C, 0) |          \
                                     PIN_AFIO_AF(GPIOE_JOY_D, 0) |          \
                                     PIN_AFIO_AF(GPIOE_JOY_PRESS, 0) |      \
                                     PIN_AFIO_AF(GPIOE_FSMC_D4, 12))
#define VAL_GPIOE_AFRH              (PIN_AFIO_AF(GPIOE_FSMC_D5, 12) |       \
                                     PIN_AFIO_AF(GPIOE_FSMC_D6, 12) |       \
                                     PIN_AFIO_AF(GPIOE_FSMC_D7, 12) |       \
                                     PIN_AFIO_AF(GPIOE_FSMC_D8, 12) |       \
                                     PIN_AFIO_AF(GPIOE_FSMC_D9, 12) |       \
                                     PIN_AFIO_AF(GPIOE_FSMC_D10, 12) |      \
                                     PIN_AFIO_AF(GPIOE_FSMC_D11, 12) |      \
                                     PIN_AFIO_AF(GPIOE_FSMC_D12, 12))

/*
 * GPIOF setup:
 *
 * PF0  - PIN0                      (input pullup).
 * PF1  - PIN1                      (input pullup).
 * PF2  - PIN2                      (input pullup).
 * PF3  - PIN3                      (input pullup).
 * PF4  - PIN4                      (input pullup).
 * PF5  - PIN5                      (input pullup).
 * PF6  - PIN6                      (input pullup).
 * PF7  - LCD_PWM                   (alternate 3).
 * PF8  - PIN8                      (input pullup).
 * PF9  - PIN9                      (input pullup).
 * PF10 - PIN10                     (input pullup).
 * PF11 - PIN11                     (input pullup).
 * PF12 - PIN12                     (input pullup).
 * PF13 - PIN13                     (input pullup).
 * PF14 - PIN14                     (input pullup).
 * PF15 - PIN15                     (input pullup).
 */
#define VAL_GPIOF_MODER             (PIN_MODE_ALTERNATE(GPIOF_PIN0) |           \
                                     PIN_MODE_ALTERNATE(GPIOF_PIN1) |           \
                                     PIN_MODE_OUTPUT(GPIOF_PIN2) |           \
                                     PIN_MODE_INPUT(GPIOF_PIN3) |           \
                                     PIN_MODE_INPUT(GPIOF_PIN4) |           \
                                     PIN_MODE_INPUT(GPIOF_PIN5) |           \
                                     PIN_MODE_INPUT(GPIOF_PIN6) |           \
                                     PIN_MODE_ALTERNATE(GPIOF_LCD_PWM) |    \
                                     PIN_MODE_INPUT(GPIOF_PIN8) |           \
                                     PIN_MODE_INPUT(GPIOF_PIN9) |           \
                                     PIN_MODE_INPUT(GPIOF_PIN10) |          \
                                     PIN_MODE_INPUT(GPIOF_PIN11) |          \
                                     PIN_MODE_INPUT(GPIOF_PIN12) |          \
                                     PIN_MODE_INPUT(GPIOF_PIN13) |          \
                                     PIN_MODE_INPUT(GPIOF_PIN14) |          \
                                     PIN_MODE_INPUT(GPIOF_PIN15))
#define VAL_GPIOF_OTYPER            (PIN_OTYPE_OPENDRAIN(GPIOF_PIN0) |       \
                                     PIN_OTYPE_OPENDRAIN(GPIOF_PIN1) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PIN2) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PIN3) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PIN4) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PIN5) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PIN6) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOF_LCD_PWM) |    \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PIN8) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PIN9) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PIN10) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PIN11) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PIN12) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PIN13) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PIN14) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PIN15))
#define VAL_GPIOF_OSPEEDR           (PIN_OSPEED_100M(GPIOF_PIN0) |          \
                                     PIN_OSPEED_100M(GPIOF_PIN1) |          \
                                     PIN_OSPEED_100M(GPIOF_PIN2) |          \
                                     PIN_OSPEED_100M(GPIOF_PIN3) |          \
                                     PIN_OSPEED_100M(GPIOF_PIN4) |          \
                                     PIN_OSPEED_100M(GPIOF_PIN5) |          \
                                     PIN_OSPEED_100M(GPIOF_PIN6) |          \
                                     PIN_OSPEED_100M(GPIOF_LCD_PWM) |       \
                                     PIN_OSPEED_100M(GPIOF_PIN8) |          \
                                     PIN_OSPEED_100M(GPIOF_PIN9) |          \
                                     PIN_OSPEED_100M(GPIOF_PIN10) |         \
                                     PIN_OSPEED_100M(GPIOF_PIN11) |         \
                                     PIN_OSPEED_100M(GPIOF_PIN12) |         \
                                     PIN_OSPEED_100M(GPIOF_PIN13) |         \
                                     PIN_OSPEED_100M(GPIOF_PIN14) |         \
                                     PIN_OSPEED_100M(GPIOF_PIN15))
#define VAL_GPIOF_PUPDR             (PIN_PUPDR_PULLUP(GPIOF_PIN0) |         \
                                     PIN_PUPDR_PULLUP(GPIOF_PIN1) |         \
                                     PIN_PUPDR_PULLUP(GPIOF_PIN2) |         \
                                     PIN_PUPDR_PULLUP(GPIOF_PIN3) |         \
                                     PIN_PUPDR_PULLUP(GPIOF_PIN4) |         \
                                     PIN_PUPDR_PULLUP(GPIOF_PIN5) |         \
                                     PIN_PUPDR_PULLUP(GPIOF_PIN6) |         \
                                     PIN_PUPDR_PULLUP(GPIOF_LCD_PWM) |      \
                                     PIN_PUPDR_PULLUP(GPIOF_PIN8) |         \
                                     PIN_PUPDR_PULLUP(GPIOF_PIN9) |         \
                                     PIN_PUPDR_PULLUP(GPIOF_PIN10) |        \
                                     PIN_PUPDR_PULLUP(GPIOF_PIN11) |        \
                                     PIN_PUPDR_PULLUP(GPIOF_PIN12) |        \
                                     PIN_PUPDR_PULLUP(GPIOF_PIN13) |        \
                                     PIN_PUPDR_PULLUP(GPIOF_PIN14) |        \
                                     PIN_PUPDR_PULLUP(GPIOF_PIN15))
#define VAL_GPIOF_ODR               (PIN_ODR_HIGH(GPIOF_PIN0) |             \
                                     PIN_ODR_HIGH(GPIOF_PIN1) |             \
                                     PIN_ODR_HIGH(GPIOF_PIN2) |             \
                                     PIN_ODR_HIGH(GPIOF_PIN3) |             \
                                     PIN_ODR_HIGH(GPIOF_PIN4) |             \
                                     PIN_ODR_HIGH(GPIOF_PIN5) |             \
                                     PIN_ODR_HIGH(GPIOF_PIN6) |             \
                                     PIN_ODR_HIGH(GPIOF_LCD_PWM) |          \
                                     PIN_ODR_HIGH(GPIOF_PIN8) |             \
                                     PIN_ODR_HIGH(GPIOF_PIN9) |             \
                                     PIN_ODR_HIGH(GPIOF_PIN10) |            \
                                     PIN_ODR_HIGH(GPIOF_PIN11) |            \
                                     PIN_ODR_HIGH(GPIOF_PIN12) |            \
                                     PIN_ODR_HIGH(GPIOF_PIN13) |            \
                                     PIN_ODR_HIGH(GPIOF_PIN14) |            \
                                     PIN_ODR_HIGH(GPIOF_PIN15))
#define VAL_GPIOF_AFRL              (PIN_AFIO_AF(GPIOF_PIN0, 4) |           \
                                     PIN_AFIO_AF(GPIOF_PIN1, 4) |           \
                                     PIN_AFIO_AF(GPIOF_PIN2, 0) |           \
                                     PIN_AFIO_AF(GPIOF_PIN3, 0) |           \
                                     PIN_AFIO_AF(GPIOF_PIN4, 0) |           \
                                     PIN_AFIO_AF(GPIOF_PIN5, 0) |           \
                                     PIN_AFIO_AF(GPIOF_PIN6, 0) |           \
                                     PIN_AFIO_AF(GPIOF_LCD_PWM, 3))
#define VAL_GPIOF_AFRH              (PIN_AFIO_AF(GPIOF_PIN8, 0) |           \
                                     PIN_AFIO_AF(GPIOF_PIN9, 0) |           \
                                     PIN_AFIO_AF(GPIOF_PIN10, 0) |          \
                                     PIN_AFIO_AF(GPIOF_PIN11, 0) |          \
                                     PIN_AFIO_AF(GPIOF_PIN12, 0) |          \
                                     PIN_AFIO_AF(GPIOF_PIN13, 0) |          \
                                     PIN_AFIO_AF(GPIOF_PIN14, 0) |          \
                                     PIN_AFIO_AF(GPIOF_PIN15, 0))

/*
 * GPIOG setup:
 *
 * PG0  - PIN0                      (input pullup).
 * PG1  - PIN1                      (input pullup).
 * PG2  - PIN2                      (input pullup).
 * PG3  - PIN3                      (input pullup).
 * PG4  - PIN4                      (input pullup).
 * PG5  - FSMC_A15                  (alternate 12).
 * PG6  - PIN6                      (input pullup).
 * PG7  - PIN7                      (input pullup).
 * PG8  - PIN8                      (input pullup).
 * PG9  - PIN9                      (input pullup).
 * PG10 - PIN10                     (input pullup).
 * PG11 - ETH_RMII_TXEN             (alternate 11).
 * PG12 - PIN12                     (input pullup).
 * PG13 - ETH_RMII_TXD0             (alternate 11).
 * PG14 - ETH_RMII_TXD1             (alternate 11).
 * PG15 - PIN15                     (input pullup).
 */
#define VAL_GPIOG_MODER             (PIN_MODE_INPUT(GPIOG_PIN0) |           \
                                     PIN_MODE_INPUT(GPIOG_PIN1) |           \
                                     PIN_MODE_INPUT(GPIOG_PIN2) |           \
                                     PIN_MODE_INPUT(GPIOG_PIN3) |           \
                                     PIN_MODE_INPUT(GPIOG_PIN4) |           \
                                     PIN_MODE_ALTERNATE(GPIOG_FSMC_A15) |   \
                                     PIN_MODE_INPUT(GPIOG_PIN6) |           \
                                     PIN_MODE_INPUT(GPIOG_PIN7) |           \
                                     PIN_MODE_INPUT(GPIOG_PIN8) |           \
                                     PIN_MODE_INPUT(GPIOG_PIN9) |           \
                                     PIN_MODE_INPUT(GPIOG_PIN10) |          \
                                     PIN_MODE_ALTERNATE(GPIOG_ETH_RMII_TXEN) |\
                                     PIN_MODE_INPUT(GPIOG_PIN12) |          \
                                     PIN_MODE_ALTERNATE(GPIOG_ETH_RMII_TXD0) |\
                                     PIN_MODE_ALTERNATE(GPIOG_ETH_RMII_TXD1) |\
                                     PIN_MODE_INPUT(GPIOG_PIN15))
#define VAL_GPIOG_OTYPER            (PIN_OTYPE_PUSHPULL(GPIOG_PIN0) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOG_PIN1) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOG_PIN2) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOG_PIN3) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOG_PIN4) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOG_FSMC_A15) |   \
                                     PIN_OTYPE_PUSHPULL(GPIOG_PIN6) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOG_PIN7) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOG_PIN8) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOG_PIN9) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOG_PIN10) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOG_ETH_RMII_TXEN) |\
                                     PIN_OTYPE_PUSHPULL(GPIOG_PIN12) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOG_ETH_RMII_TXD0) |\
                                     PIN_OTYPE_PUSHPULL(GPIOG_ETH_RMII_TXD1) |\
                                     PIN_OTYPE_PUSHPULL(GPIOG_PIN15))
#define VAL_GPIOG_OSPEEDR           (PIN_OSPEED_100M(GPIOG_PIN0) |          \
                                     PIN_OSPEED_100M(GPIOG_PIN1) |          \
                                     PIN_OSPEED_100M(GPIOG_PIN2) |          \
                                     PIN_OSPEED_100M(GPIOG_PIN3) |          \
                                     PIN_OSPEED_100M(GPIOG_PIN4) |          \
                                     PIN_OSPEED_100M(GPIOG_FSMC_A15) |      \
                                     PIN_OSPEED_100M(GPIOG_PIN6) |          \
                                     PIN_OSPEED_100M(GPIOG_PIN7) |          \
                                     PIN_OSPEED_100M(GPIOG_PIN8) |          \
                                     PIN_OSPEED_100M(GPIOG_PIN9) |          \
                                     PIN_OSPEED_100M(GPIOG_PIN10) |         \
                                     PIN_OSPEED_100M(GPIOG_ETH_RMII_TXEN) | \
                                     PIN_OSPEED_100M(GPIOG_PIN12) |         \
                                     PIN_OSPEED_100M(GPIOG_ETH_RMII_TXD0) | \
                                     PIN_OSPEED_100M(GPIOG_ETH_RMII_TXD1) | \
                                     PIN_OSPEED_100M(GPIOG_PIN15))
#define VAL_GPIOG_PUPDR             (PIN_PUPDR_PULLUP(GPIOG_PIN0) |         \
                                     PIN_PUPDR_PULLUP(GPIOG_PIN1) |         \
                                     PIN_PUPDR_FLOATING(GPIOG_PIN2) |         \
                                     PIN_PUPDR_PULLUP(GPIOG_PIN3) |         \
                                     PIN_PUPDR_PULLUP(GPIOG_PIN4) |         \
                                     PIN_PUPDR_FLOATING(GPIOG_FSMC_A15) |   \
                                     PIN_PUPDR_PULLUP(GPIOG_PIN6) |         \
                                     PIN_PUPDR_PULLUP(GPIOG_PIN7) |         \
                                     PIN_PUPDR_PULLUP(GPIOG_PIN8) |         \
                                     PIN_PUPDR_PULLUP(GPIOG_PIN9) |         \
                                     PIN_PUPDR_PULLUP(GPIOG_PIN10) |        \
                                     PIN_PUPDR_FLOATING(GPIOG_ETH_RMII_TXEN) |\
                                     PIN_PUPDR_PULLUP(GPIOG_PIN12) |        \
                                     PIN_PUPDR_FLOATING(GPIOG_ETH_RMII_TXD0) |\
                                     PIN_PUPDR_FLOATING(GPIOG_ETH_RMII_TXD1) |\
                                     PIN_PUPDR_PULLUP(GPIOG_PIN15))
#define VAL_GPIOG_ODR               (PIN_ODR_HIGH(GPIOG_PIN0) |             \
                                     PIN_ODR_HIGH(GPIOG_PIN1) |             \
                                     PIN_ODR_HIGH(GPIOG_PIN2) |             \
                                     PIN_ODR_HIGH(GPIOG_PIN3) |             \
                                     PIN_ODR_HIGH(GPIOG_PIN4) |             \
                                     PIN_ODR_HIGH(GPIOG_FSMC_A15) |         \
                                     PIN_ODR_HIGH(GPIOG_PIN6) |             \
                                     PIN_ODR_HIGH(GPIOG_PIN7) |             \
                                     PIN_ODR_HIGH(GPIOG_PIN8) |             \
                                     PIN_ODR_HIGH(GPIOG_PIN9) |             \
                                     PIN_ODR_HIGH(GPIOG_PIN10) |            \
                                     PIN_ODR_HIGH(GPIOG_ETH_RMII_TXEN) |    \
                                     PIN_ODR_HIGH(GPIOG_PIN12) |            \
                                     PIN_ODR_HIGH(GPIOG_ETH_RMII_TXD0) |    \
                                     PIN_ODR_HIGH(GPIOG_ETH_RMII_TXD1) |    \
                                     PIN_ODR_HIGH(GPIOG_PIN15))
#define VAL_GPIOG_AFRL              (PIN_AFIO_AF(GPIOG_PIN0, 0) |           \
                                     PIN_AFIO_AF(GPIOG_PIN1, 0) |           \
                                     PIN_AFIO_AF(GPIOG_PIN2, 0) |           \
                                     PIN_AFIO_AF(GPIOG_PIN3, 0) |           \
                                     PIN_AFIO_AF(GPIOG_PIN4, 0) |           \
                                     PIN_AFIO_AF(GPIOG_FSMC_A15, 12) |      \
                                     PIN_AFIO_AF(GPIOG_PIN6, 0) |           \
                                     PIN_AFIO_AF(GPIOG_PIN7, 0))
#define VAL_GPIOG_AFRH              (PIN_AFIO_AF(GPIOG_PIN8, 0) |           \
                                     PIN_AFIO_AF(GPIOG_PIN9, 0) |           \
                                     PIN_AFIO_AF(GPIOG_PIN10, 0) |          \
                                     PIN_AFIO_AF(GPIOG_ETH_RMII_TXEN, 11) | \
                                     PIN_AFIO_AF(GPIOG_PIN12, 0) |          \
                                     PIN_AFIO_AF(GPIOG_ETH_RMII_TXD0, 11) | \
                                     PIN_AFIO_AF(GPIOG_ETH_RMII_TXD1, 11) | \
                                     PIN_AFIO_AF(GPIOG_PIN15, 0))

/*
 * GPIOH setup:
 *
 * PH0  - OSC_IN                    (input floating).
 * PH1  - OSC_OUT                   (input floating).
 * PH2  - LED1                      (output pushpull maximum).
 * PH3  - LED2                      (output pushpull maximum).
 * PH4  - OTG_HS_ULPI_NXT           (alternate 10).
 * PH5  - PIN5                      (input pullup).
 * PH6  - PIN6                      (input pullup).
 * PH7  - PIN7                      (input pullup).
 * PH8  - PIN8                      (input pullup).
 * PH9  - PIN9                      (input pullup).
 * PH10 - PIN10                     (input pullup).
 * PH11 - OTG_HS_ULPI_RESET         (output pushpull maximum).
 * PH12 - PIN12                     (input pullup).
 * PH13 - PIN13                     (input pullup).
 * PH14 - PIN14                     (input pullup).
 * PH15 - PIN15                     (input pullup).
 */
#define VAL_GPIOH_MODER             (PIN_MODE_INPUT(GPIOH_OSC_IN) |         \
                                     PIN_MODE_INPUT(GPIOH_OSC_OUT) |        \
                                     PIN_MODE_OUTPUT(GPIOH_LED1) |          \
                                     PIN_MODE_OUTPUT(GPIOH_LED2) |          \
                                     PIN_MODE_ALTERNATE(GPIOH_OTG_HS_ULPI_NXT) |\
                                     PIN_MODE_INPUT(GPIOH_PIN5) |           \
                                     PIN_MODE_INPUT(GPIOH_PIN6) |           \
                                     PIN_MODE_INPUT(GPIOH_PIN7) |           \
                                     PIN_MODE_INPUT(GPIOH_PIN8) |           \
                                     PIN_MODE_INPUT(GPIOH_PIN9) |           \
                                     PIN_MODE_INPUT(GPIOH_PIN10) |          \
                                     PIN_MODE_OUTPUT(GPIOH_OTG_HS_ULPI_RESET) |\
                                     PIN_MODE_INPUT(GPIOH_PIN12) |          \
                                     PIN_MODE_INPUT(GPIOH_PIN13) |          \
                                     PIN_MODE_INPUT(GPIOH_PIN14) |          \
                                     PIN_MODE_INPUT(GPIOH_PIN15))
#define VAL_GPIOH_OTYPER            (PIN_OTYPE_PUSHPULL(GPIOH_OSC_IN) |     \
                                     PIN_OTYPE_PUSHPULL(GPIOH_OSC_OUT) |    \
                                     PIN_OTYPE_PUSHPULL(GPIOH_LED1) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOH_LED2) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOH_OTG_HS_ULPI_NXT) |\
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN5) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN6) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN7) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN8) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN9) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN10) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOH_OTG_HS_ULPI_RESET) |\
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN12) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN13) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN14) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN15))
#define VAL_GPIOH_OSPEEDR           (PIN_OSPEED_100M(GPIOH_OSC_IN) |        \
                                     PIN_OSPEED_100M(GPIOH_OSC_OUT) |       \
                                     PIN_OSPEED_100M(GPIOH_LED1) |          \
                                     PIN_OSPEED_100M(GPIOH_LED2) |          \
                                     PIN_OSPEED_100M(GPIOH_OTG_HS_ULPI_NXT) |\
                                     PIN_OSPEED_100M(GPIOH_PIN5) |          \
                                     PIN_OSPEED_100M(GPIOH_PIN6) |          \
                                     PIN_OSPEED_100M(GPIOH_PIN7) |          \
                                     PIN_OSPEED_100M(GPIOH_PIN8) |          \
                                     PIN_OSPEED_100M(GPIOH_PIN9) |          \
                                     PIN_OSPEED_100M(GPIOH_PIN10) |         \
                                     PIN_OSPEED_100M(GPIOH_OTG_HS_ULPI_RESET) |\
                                     PIN_OSPEED_100M(GPIOH_PIN12) |         \
                                     PIN_OSPEED_100M(GPIOH_PIN13) |         \
                                     PIN_OSPEED_100M(GPIOH_PIN14) |         \
                                     PIN_OSPEED_100M(GPIOH_PIN15))
#define VAL_GPIOH_PUPDR             (PIN_PUPDR_FLOATING(GPIOH_OSC_IN) |     \
                                     PIN_PUPDR_FLOATING(GPIOH_OSC_OUT) |    \
                                     PIN_PUPDR_FLOATING(GPIOH_LED1) |       \
                                     PIN_PUPDR_FLOATING(GPIOH_LED2) |       \
                                     PIN_PUPDR_FLOATING(GPIOH_OTG_HS_ULPI_NXT) |\
                                     PIN_PUPDR_PULLUP(GPIOH_PIN5) |         \
                                     PIN_PUPDR_PULLUP(GPIOH_PIN6) |         \
                                     PIN_PUPDR_PULLUP(GPIOH_PIN7) |         \
                                     PIN_PUPDR_PULLUP(GPIOH_PIN8) |         \
                                     PIN_PUPDR_PULLUP(GPIOH_PIN9) |         \
                                     PIN_PUPDR_PULLUP(GPIOH_PIN10) |        \
                                     PIN_PUPDR_FLOATING(GPIOH_OTG_HS_ULPI_RESET) |\
                                     PIN_PUPDR_PULLUP(GPIOH_PIN12) |        \
                                     PIN_PUPDR_PULLUP(GPIOH_PIN13) |        \
                                     PIN_PUPDR_PULLUP(GPIOH_PIN14) |        \
                                     PIN_PUPDR_PULLUP(GPIOH_PIN15))
#define VAL_GPIOH_ODR               (PIN_ODR_HIGH(GPIOH_OSC_IN) |           \
                                     PIN_ODR_HIGH(GPIOH_OSC_OUT) |          \
                                     PIN_ODR_LOW(GPIOH_LED1) |              \
                                     PIN_ODR_LOW(GPIOH_LED2) |              \
                                     PIN_ODR_HIGH(GPIOH_OTG_HS_ULPI_NXT) |  \
                                     PIN_ODR_HIGH(GPIOH_PIN5) |             \
                                     PIN_ODR_HIGH(GPIOH_PIN6) |             \
                                     PIN_ODR_HIGH(GPIOH_PIN7) |             \
                                     PIN_ODR_HIGH(GPIOH_PIN8) |             \
                                     PIN_ODR_HIGH(GPIOH_PIN9) |             \
                                     PIN_ODR_HIGH(GPIOH_PIN10) |            \
                                     PIN_ODR_LOW(GPIOH_OTG_HS_ULPI_RESET) | \
                                     PIN_ODR_HIGH(GPIOH_PIN12) |            \
                                     PIN_ODR_HIGH(GPIOH_PIN13) |            \
                                     PIN_ODR_HIGH(GPIOH_PIN14) |            \
                                     PIN_ODR_HIGH(GPIOH_PIN15))
#define VAL_GPIOH_AFRL              (PIN_AFIO_AF(GPIOH_OSC_IN, 0) |         \
                                     PIN_AFIO_AF(GPIOH_OSC_OUT, 0) |        \
                                     PIN_AFIO_AF(GPIOH_LED1, 0) |           \
                                     PIN_AFIO_AF(GPIOH_LED2, 0) |           \
                                     PIN_AFIO_AF(GPIOH_OTG_HS_ULPI_NXT, 10) |\
                                     PIN_AFIO_AF(GPIOH_PIN5, 0) |           \
                                     PIN_AFIO_AF(GPIOH_PIN6, 0) |           \
                                     PIN_AFIO_AF(GPIOH_PIN7, 0))
#define VAL_GPIOH_AFRH              (PIN_AFIO_AF(GPIOH_PIN8, 0) |           \
                                     PIN_AFIO_AF(GPIOH_PIN9, 0) |           \
                                     PIN_AFIO_AF(GPIOH_PIN10, 0) |          \
                                     PIN_AFIO_AF(GPIOH_OTG_HS_ULPI_RESET, 0) |\
                                     PIN_AFIO_AF(GPIOH_PIN12, 0) |          \
                                     PIN_AFIO_AF(GPIOH_PIN13, 0) |          \
                                     PIN_AFIO_AF(GPIOH_PIN14, 0) |          \
                                     PIN_AFIO_AF(GPIOH_PIN15, 0))

/*
 * GPIOI setup:
 *
 * PI0  - SPI2_CS_TP                (output pushpull minimum).
 * PI1  - SPI2_SCK                  (alternate 5).
 * PI2  - SPI2_MISO                 (alternate 5).
 * PI3  - SPI2_MOSI                 (alternate 5).
 * PI4  - PIN4                      (input pullup).
 * PI5  - PIN5                      (input pullup).
 * PI6  - PIN6                      (input pullup).
 * PI7  - PIN7                      (input pullup).
 * PI8  - LED3                      (output pushpull maximum).
 * PI9  - PIN9                      (input pullup).
 * PI10 - LED4                      (output pushpull maximum).
 * PI11 - OTG_HS_ULPI_DIR           (alternate 10).
 * PI12 - PIN12                     (input pullup).
 * PI13 - PIN13                     (input pullup).
 * PI14 - PIN14                     (input pullup).
 * PI15 - PIN15                     (input pullup).
 */
#define VAL_GPIOI_MODER             (PIN_MODE_OUTPUT(GPIOI_SPI2_CS_TP) |    \
                                     PIN_MODE_ALTERNATE(GPIOI_SPI2_SCK) |   \
                                     PIN_MODE_ALTERNATE(GPIOI_SPI2_MISO) |  \
                                     PIN_MODE_ALTERNATE(GPIOI_SPI2_MOSI) |  \
                                     PIN_MODE_INPUT(GPIOI_PIN4) |           \
                                     PIN_MODE_INPUT(GPIOI_PIN5) |           \
                                     PIN_MODE_INPUT(GPIOI_PIN6) |           \
                                     PIN_MODE_INPUT(GPIOI_PIN7) |           \
                                     PIN_MODE_OUTPUT(GPIOI_LED3) |          \
                                     PIN_MODE_INPUT(GPIOI_PIN9) |           \
                                     PIN_MODE_OUTPUT(GPIOI_LED4) |          \
                                     PIN_MODE_ALTERNATE(GPIOI_OTG_HS_ULPI_DIR) |\
                                     PIN_MODE_INPUT(GPIOI_PIN12) |          \
                                     PIN_MODE_INPUT(GPIOI_PIN13) |          \
                                     PIN_MODE_INPUT(GPIOI_PIN14) |          \
                                     PIN_MODE_INPUT(GPIOI_PIN15))
#define VAL_GPIOI_OTYPER            (PIN_OTYPE_PUSHPULL(GPIOI_SPI2_CS_TP) | \
                                     PIN_OTYPE_PUSHPULL(GPIOI_SPI2_SCK) |   \
                                     PIN_OTYPE_PUSHPULL(GPIOI_SPI2_MISO) |  \
                                     PIN_OTYPE_PUSHPULL(GPIOI_SPI2_MOSI) |  \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PIN4) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PIN5) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PIN6) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PIN7) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOI_LED3) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PIN9) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOI_LED4) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOI_OTG_HS_ULPI_DIR) |\
                                     PIN_OTYPE_PUSHPULL(GPIOI_PIN12) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PIN13) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PIN14) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PIN15))
#define VAL_GPIOI_OSPEEDR           (PIN_OSPEED_2M(GPIOI_SPI2_CS_TP) |      \
                                     PIN_OSPEED_100M(GPIOI_SPI2_SCK) |      \
                                     PIN_OSPEED_100M(GPIOI_SPI2_MISO) |     \
                                     PIN_OSPEED_100M(GPIOI_SPI2_MOSI) |     \
                                     PIN_OSPEED_100M(GPIOI_PIN4) |          \
                                     PIN_OSPEED_100M(GPIOI_PIN5) |          \
                                     PIN_OSPEED_100M(GPIOI_PIN6) |          \
                                     PIN_OSPEED_100M(GPIOI_PIN7) |          \
                                     PIN_OSPEED_100M(GPIOI_LED3) |          \
                                     PIN_OSPEED_100M(GPIOI_PIN9) |          \
                                     PIN_OSPEED_100M(GPIOI_LED4) |          \
                                     PIN_OSPEED_100M(GPIOI_OTG_HS_ULPI_DIR) |\
                                     PIN_OSPEED_100M(GPIOI_PIN12) |         \
                                     PIN_OSPEED_100M(GPIOI_PIN13) |         \
                                     PIN_OSPEED_100M(GPIOI_PIN14) |         \
                                     PIN_OSPEED_100M(GPIOI_PIN15))
#define VAL_GPIOI_PUPDR             (PIN_PUPDR_FLOATING(GPIOI_SPI2_CS_TP) | \
                                     PIN_PUPDR_FLOATING(GPIOI_SPI2_SCK) |   \
                                     PIN_PUPDR_FLOATING(GPIOI_SPI2_MISO) |  \
                                     PIN_PUPDR_FLOATING(GPIOI_SPI2_MOSI) |  \
                                     PIN_PUPDR_PULLUP(GPIOI_PIN4) |         \
                                     PIN_PUPDR_PULLUP(GPIOI_PIN5) |         \
                                     PIN_PUPDR_PULLUP(GPIOI_PIN6) |         \
                                     PIN_PUPDR_PULLUP(GPIOI_PIN7) |         \
                                     PIN_PUPDR_FLOATING(GPIOI_LED3) |       \
                                     PIN_PUPDR_PULLUP(GPIOI_PIN9) |         \
                                     PIN_PUPDR_FLOATING(GPIOI_LED4) |       \
                                     PIN_PUPDR_FLOATING(GPIOI_OTG_HS_ULPI_DIR) |\
                                     PIN_PUPDR_PULLUP(GPIOI_PIN12) |        \
                                     PIN_PUPDR_PULLUP(GPIOI_PIN13) |        \
                                     PIN_PUPDR_PULLUP(GPIOI_PIN14) |        \
                                     PIN_PUPDR_PULLUP(GPIOI_PIN15))
#define VAL_GPIOI_ODR               (PIN_ODR_HIGH(GPIOI_SPI2_CS_TP) |       \
                                     PIN_ODR_HIGH(GPIOI_SPI2_SCK) |         \
                                     PIN_ODR_HIGH(GPIOI_SPI2_MISO) |        \
                                     PIN_ODR_HIGH(GPIOI_SPI2_MOSI) |        \
                                     PIN_ODR_HIGH(GPIOI_PIN4) |             \
                                     PIN_ODR_HIGH(GPIOI_PIN5) |             \
                                     PIN_ODR_HIGH(GPIOI_PIN6) |             \
                                     PIN_ODR_HIGH(GPIOI_PIN7) |             \
                                     PIN_ODR_LOW(GPIOI_LED3) |              \
                                     PIN_ODR_HIGH(GPIOI_PIN9) |             \
                                     PIN_ODR_LOW(GPIOI_LED4) |              \
                                     PIN_ODR_HIGH(GPIOI_OTG_HS_ULPI_DIR) |  \
                                     PIN_ODR_HIGH(GPIOI_PIN12) |            \
                                     PIN_ODR_HIGH(GPIOI_PIN13) |            \
                                     PIN_ODR_HIGH(GPIOI_PIN14) |            \
                                     PIN_ODR_HIGH(GPIOI_PIN15))
#define VAL_GPIOI_AFRL              (PIN_AFIO_AF(GPIOI_SPI2_CS_TP, 0) |     \
                                     PIN_AFIO_AF(GPIOI_SPI2_SCK, 5) |       \
                                     PIN_AFIO_AF(GPIOI_SPI2_MISO, 5) |      \
                                     PIN_AFIO_AF(GPIOI_SPI2_MOSI, 5) |      \
                                     PIN_AFIO_AF(GPIOI_PIN4, 0) |           \
                                     PIN_AFIO_AF(GPIOI_PIN5, 0) |           \
                                     PIN_AFIO_AF(GPIOI_PIN6, 0) |           \
                                     PIN_AFIO_AF(GPIOI_PIN7, 0))
#define VAL_GPIOI_AFRH              (PIN_AFIO_AF(GPIOI_LED3, 0) |           \
                                     PIN_AFIO_AF(GPIOI_PIN9, 0) |           \
                                     PIN_AFIO_AF(GPIOI_LED4, 0) |           \
                                     PIN_AFIO_AF(GPIOI_OTG_HS_ULPI_DIR, 10) |\
                                     PIN_AFIO_AF(GPIOI_PIN12, 0) |          \
                                     PIN_AFIO_AF(GPIOI_PIN13, 0) |          \
                                     PIN_AFIO_AF(GPIOI_PIN14, 0) |          \
                                     PIN_AFIO_AF(GPIOI_PIN15, 0))


#if !defined(_FROM_ASM_)
#ifdef __cplusplus
extern "C" {
#endif
void boardInit(void);
#ifdef __cplusplus
}
#endif
#endif /* _FROM_ASM_ */

#endif /* _BOARD_H_ */
