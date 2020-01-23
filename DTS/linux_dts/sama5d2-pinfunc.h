#define PINMUX_PIN(no, func, ioset) \
(((no) & 0xffff) | (((func) & 0xf) << 16) | (((ioset) & 0xff) << 20))

#define PIN_PA0                 0
#define PIN_PA0__GPIO           PINMUX_PIN(PIN_PA0, 0, 0)
#define PIN_PA0__SDMMC0_CK      PINMUX_PIN(PIN_PA0, 1, 1)
#define PIN_PA0__QSPI0_SCK      PINMUX_PIN(PIN_PA0, 2, 1)
#define PIN_PA0__D0             PINMUX_PIN(PIN_PA0, 6, 2)

#define PIN_PA1                 1
#define PIN_PA1__GPIO           PINMUX_PIN(PIN_PA1, 0, 0)
#define PIN_PA1__SDMMC0_CMD     PINMUX_PIN(PIN_PA1, 1, 1)
#define PIN_PA1__QSPI0_CS       PINMUX_PIN(PIN_PA1, 2, 1)
#define PIN_PA1__D1             PINMUX_PIN(PIN_PA1, 6, 2)

#define PIN_PA2                 2
#define PIN_PA2__GPIO           PINMUX_PIN(PIN_PA2, 0, 0)
#define PIN_PA2__SDMMC0_DAT0    PINMUX_PIN(PIN_PA2, 1, 1)
#define PIN_PA2__QSPI0_IO0      PINMUX_PIN(PIN_PA2, 2, 1)
#define PIN_PA2__D2             PINMUX_PIN(PIN_PA2, 6, 2)

#define PIN_PA3                 3
#define PIN_PA3__GPIO           PINMUX_PIN(PIN_PA3, 0, 0)
#define PIN_PA3__SDMMC0_DAT1    PINMUX_PIN(PIN_PA3, 1, 1)
#define PIN_PA3__QSPI0_IO1      PINMUX_PIN(PIN_PA3, 2, 1)
#define PIN_PA3__D3             PINMUX_PIN(PIN_PA3, 6, 2)

#define PIN_PA4                 4
#define PIN_PA4__GPIO           PINMUX_PIN(PIN_PA4, 0, 0)
#define PIN_PA4__SDMMC0_DAT2    PINMUX_PIN(PIN_PA4, 1, 1)
#define PIN_PA4__QSPI0_IO2      PINMUX_PIN(PIN_PA4, 2, 1)
#define PIN_PA4__D4             PINMUX_PIN(PIN_PA4, 6, 2)
#define PIN_PA5                 5
#define PIN_PA5__GPIO           PINMUX_PIN(PIN_PA5, 0, 0)
#define PIN_PA5__SDMMC0_DAT3    PINMUX_PIN(PIN_PA5, 1, 1)
#define PIN_PA5__QSPI0_IO3      PINMUX_PIN(PIN_PA5, 2, 1)
#define PIN_PA5__D5             PINMUX_PIN(PIN_PA5, 6, 2)
#define PIN_PA6                 6
#define PIN_PA6__GPIO           PINMUX_PIN(PIN_PA6, 0, 0)
#define PIN_PA6__SDMMC0_DAT4    PINMUX_PIN(PIN_PA6, 1, 1)
#define PIN_PA6__QSPI1_SCK      PINMUX_PIN(PIN_PA6, 2, 1)
#define PIN_PA6__TIOA5          PINMUX_PIN(PIN_PA6, 4, 1)
#define PIN_PA6__FLEXCOM2_IO0   PINMUX_PIN(PIN_PA6, 5, 1)
#define PIN_PA6__D6             PINMUX_PIN(PIN_PA6, 6, 2)

#define PIN_PA7                 7
#define PIN_PA7__GPIO           PINMUX_PIN(PIN_PA7, 0, 0)
#define PIN_PA7__SDMMC0_DAT5    PINMUX_PIN(PIN_PA7, 1, 1)
#define PIN_PA7__QSPI1_IO0      PINMUX_PIN(PIN_PA7, 2, 1)
#define PIN_PA7__TIOB5          PINMUX_PIN(PIN_PA7, 4, 1)
#define PIN_PA7__FLEXCOM2_IO1   PINMUX_PIN(PIN_PA7, 5, 1)
#define PIN_PA7__D7             PINMUX_PIN(PIN_PA7, 6, 2)

#define PIN_PA8                 8
#define PIN_PA8__GPIO           PINMUX_PIN(PIN_PA8, 0, 0)
#define PIN_PA8__SDMMC0_DAT6    PINMUX_PIN(PIN_PA8, 1, 1)
#define PIN_PA8__QSPI1_IO1      PINMUX_PIN(PIN_PA8, 2, 1)
#define PIN_PA8__TCLK5          PINMUX_PIN(PIN_PA8, 4, 1)
#define PIN_PA8__FLEXCOM2_IO2   PINMUX_PIN(PIN_PA8, 5, 1)
#define PIN_PA8__NWE_NANDWE     PINMUX_PIN(PIN_PA8, 6, 2)

#define PIN_PA9                 9
#define PIN_PA9__GPIO           PINMUX_PIN(PIN_PA9, 0, 0)
#define PIN_PA9__SDMMC0_DAT7    PINMUX_PIN(PIN_PA9, 1, 1)
#define PIN_PA9__QSPI1_IO2      PINMUX_PIN(PIN_PA9, 2, 1)
#define PIN_PA9__TIOA4          PINMUX_PIN(PIN_PA9, 4, 1)
#define PIN_PA9__FLEXCOM2_IO3   PINMUX_PIN(PIN_PA9, 5, 1)
#define PIN_PA9__NCS3           PINMUX_PIN(PIN_PA9, 6, 2)

#define PIN_PA10                10
#define PIN_PA10__GPIO          PINMUX_PIN(PIN_PA10, 0, 0)
#define PIN_PA10__SDMMC0_RSTN   PINMUX_PIN(PIN_PA10, 1, 1)
#define PIN_PA10__QSPI1_IO3     PINMUX_PIN(PIN_PA10, 2, 1)
#define PIN_PA10__TIOB4         PINMUX_PIN(PIN_PA10, 4, 1)
#define PIN_PA10__FLEXCOM2_IO4  PINMUX_PIN(PIN_PA10, 5, 1)
#define PIN_PA10__A21_NANDALE   PINMUX_PIN(PIN_PA10, 6, 2)

#define PIN_PA11                11
#define PIN_PA11__GPIO          PINMUX_PIN(PIN_PA11, 0, 0)
#define PIN_PA11__SDMMC0_VDDSEL PINMUX_PIN(PIN_PA11, 1, 1)
#define PIN_PA11__QSPI1_CS      PINMUX_PIN(PIN_PA11, 2, 1)
#define PIN_PA11__TCLK4         PINMUX_PIN(PIN_PA11, 4, 1)
#define PIN_PA11__A22_NANDCLE   PINMUX_PIN(PIN_PA11, 6, 2)

#define PIN_PA12                12
#define PIN_PA12__GPIO          PINMUX_PIN(PIN_PA12, 0, 0)
#define PIN_PA12__SDMMC0_WP     PINMUX_PIN(PIN_PA12, 1, 1)
#define PIN_PA12__IRQ           PINMUX_PIN(PIN_PA12, 2, 1)
#define PIN_PA12__NRD_NANDOE    PINMUX_PIN(PIN_PA12, 6, 2)

#define PIN_PA13                13
#define PIN_PA13__GPIO          PINMUX_PIN(PIN_PA13, 0, 0)
#define PIN_PA13__SDMMC0_CD     PINMUX_PIN(PIN_PA13, 1, 1)
#define PIN_PA13__FLEXCOM3_IO1  PINMUX_PIN(PIN_PA13, 5, 1)
#define PIN_PA13__D8            PINMUX_PIN(PIN_PA13, 6, 2)

#define PIN_PA14                14
#define PIN_PA14__GPIO          PINMUX_PIN(PIN_PA14, 0, 0)
#define PIN_PA14__SPI0_SPCK     PINMUX_PIN(PIN_PA14, 1, 1)
#define PIN_PA14__TK1           PINMUX_PIN(PIN_PA14, 2, 1)
#define PIN_PA14__QSPI0_SCK     PINMUX_PIN(PIN_PA14, 3, 2)
#define PIN_PA14__I2SC1_MCK     PINMUX_PIN(PIN_PA14, 4, 2)
#define PIN_PA14__FLEXCOM3_IO2  PINMUX_PIN(PIN_PA14, 5, 1)
#define PIN_PA14__D9            PINMUX_PIN(PIN_PA14, 6, 2)

#define PIN_PA15                15
#define PIN_PA15__GPIO          PINMUX_PIN(PIN_PA15, 0, 0)
#define PIN_PA15__SPI0_MOSI     PINMUX_PIN(PIN_PA15, 1, 1)
#define PIN_PA15__TF1           PINMUX_PIN(PIN_PA15, 2, 1)
#define PIN_PA15__QSPI0_CS      PINMUX_PIN(PIN_PA15, 3, 2)
#define PIN_PA15__I2SC1_CK      PINMUX_PIN(PIN_PA15, 4, 2)
#define PIN_PA15__FLEXCOM3_IO0  PINMUX_PIN(PIN_PA15, 5, 1)
#define PIN_PA15__D10           PINMUX_PIN(PIN_PA15, 6, 2)

#define PIN_PA16                16
#define PIN_PA16__GPIO          PINMUX_PIN(PIN_PA16, 0, 0)
#define PIN_PA16__SPI0_MISO     PINMUX_PIN(PIN_PA16, 1, 1)
#define PIN_PA16__TD1           PINMUX_PIN(PIN_PA16, 2, 1)
#define PIN_PA16__QSPI0_IO0     PINMUX_PIN(PIN_PA16, 3, 2)
#define PIN_PA16__I2SC1_WS      PINMUX_PIN(PIN_PA16, 4, 2)
#define PIN_PA16__FLEXCOM3_IO3  PINMUX_PIN(PIN_PA16, 5, 1)
#define PIN_PA16__D11           PINMUX_PIN(PIN_PA16, 6, 2)

#define PIN_PA17                17
#define PIN_PA17__GPIO          PINMUX_PIN(PIN_PA17, 0, 0)
#define PIN_PA17__SPI0_NPCS0    PINMUX_PIN(PIN_PA17, 1, 1)
#define PIN_PA17__RD1           PINMUX_PIN(PIN_PA17, 2, 1)
#define PIN_PA17__QSPI0_IO1     PINMUX_PIN(PIN_PA17, 3, 2)
#define PIN_PA17__I2SC1_DI0     PINMUX_PIN(PIN_PA17, 4, 2)
#define PIN_PA17__FLEXCOM3_IO4  PINMUX_PIN(PIN_PA17, 5, 1)
#define PIN_PA17__D12           PINMUX_PIN(PIN_PA17, 6, 2)

#define PIN_PA18                18
#define PIN_PA18__GPIO          PINMUX_PIN(PIN_PA18, 0, 0)
#define PIN_PA18__SPI0_NPCS1    PINMUX_PIN(PIN_PA18, 1, 1)
#define PIN_PA18__RK1           PINMUX_PIN(PIN_PA18, 2, 1)
#define PIN_PA18__QSPI0_IO2     PINMUX_PIN(PIN_PA18, 3, 2)
#define PIN_PA18__I2SC1_DO0     PINMUX_PIN(PIN_PA18, 4, 2)
#define PIN_PA18__SDMMC1_DAT0   PINMUX_PIN(PIN_PA18, 5, 1)
#define PIN_PA18__D13           PINMUX_PIN(PIN_PA18, 6, 2)

#define PIN_PA19                19
#define PIN_PA19__GPIO          PINMUX_PIN(PIN_PA19, 0, 0)
#define PIN_PA19__SPI0_NPCS2    PINMUX_PIN(PIN_PA19, 1, 1)
#define PIN_PA19__RF1           PINMUX_PIN(PIN_PA19, 2, 1)
#define PIN_PA19__QSPI0_IO3     PINMUX_PIN(PIN_PA19, 3, 2)
#define PIN_PA19__TIOA0         PINMUX_PIN(PIN_PA19, 4, 1)
#define PIN_PA19__SDMMC1_DAT1   PINMUX_PIN(PIN_PA19, 5, 1)
#define PIN_PA19__D14           PINMUX_PIN(PIN_PA19, 6, 2)

#define PIN_PA20                20
#define PIN_PA20__GPIO          PINMUX_PIN(PIN_PA20, 0, 0)
#define PIN_PA20__SPI0_NPCS3    PINMUX_PIN(PIN_PA20, 1, 1)
#define PIN_PA20__TIOB0         PINMUX_PIN(PIN_PA20, 4, 1)
#define PIN_PA20__SDMMC1_DAT2   PINMUX_PIN(PIN_PA20, 5, 1)
#define PIN_PA20__D15           PINMUX_PIN(PIN_PA20, 6, 2)
#define PIN_PA21                21
#define PIN_PA21__GPIO          PINMUX_PIN(PIN_PA21, 0, 0)
#define PIN_PA21__IRQ           PINMUX_PIN(PIN_PA21, 1, 2)
#define PIN_PA21__PCK2          PINMUX_PIN(PIN_PA21, 2, 3)
#define PIN_PA21__TCLK0         PINMUX_PIN(PIN_PA21, 4, 1)
#define PIN_PA21__SDMMC1_DAT3   PINMUX_PIN(PIN_PA21, 5, 1)
#define PIN_PA21__NANDRDY       PINMUX_PIN(PIN_PA21, 6, 2)

#define PIN_PA22                22
#define PIN_PA22__GPIO          PINMUX_PIN(PIN_PA22, 0, 0)
#define PIN_PA22__FLEXCOM1_IO2  PINMUX_PIN(PIN_PA22, 1, 1)
#define PIN_PA22__D0            PINMUX_PIN(PIN_PA22, 2, 1)
#define PIN_PA22__TCK           PINMUX_PIN(PIN_PA22, 3, 4)
#define PIN_PA22__SPI1_SPCK     PINMUX_PIN(PIN_PA22, 4, 2)
#define PIN_PA22__SDMMC1_CK     PINMUX_PIN(PIN_PA22, 5, 1)
#define PIN_PA22__QSPI0_SCK     PINMUX_PIN(PIN_PA22, 6, 3)
#define PIN_PA23                23
#define PIN_PA23__GPIO          PINMUX_PIN(PIN_PA23, 0, 0)
#define PIN_PA23__FLEXCOM1_IO1  PINMUX_PIN(PIN_PA23, 1, 1)
#define PIN_PA23__D1            PINMUX_PIN(PIN_PA23, 2, 1)
#define PIN_PA23__TDI           PINMUX_PIN(PIN_PA23, 3, 4)
#define PIN_PA23__SPI1_MOSI     PINMUX_PIN(PIN_PA23, 4, 2)
#define PIN_PA23__QSPI0_CS      PINMUX_PIN(PIN_PA23, 6, 3)

#define PIN_PA24                24
#define PIN_PA24__GPIO          PINMUX_PIN(PIN_PA24, 0, 0)
#define PIN_PA24__FLEXCOM1_IO0      PINMUX_PIN(PIN_PA24, 1, 1)
#define PIN_PA24__D2            PINMUX_PIN(PIN_PA24, 2, 1)
#define PIN_PA24__TDO           PINMUX_PIN(PIN_PA24, 3, 4)
#define PIN_PA24__SPI1_MISO     PINMUX_PIN(PIN_PA24, 4, 2)
#define PIN_PA24__QSPI0_IO0     PINMUX_PIN(PIN_PA24, 6, 3)

#define PIN_PA25                25
#define PIN_PA25__GPIO          PINMUX_PIN(PIN_PA25, 0, 0)
#define PIN_PA25__FLEXCOM1_IO3  PINMUX_PIN(PIN_PA25, 1, 1)
#define PIN_PA25__D3            PINMUX_PIN(PIN_PA25, 2, 1)
#define PIN_PA25__TMS           PINMUX_PIN(PIN_PA25, 3, 4)
#define PIN_PA25__SPI1_NPCS0    PINMUX_PIN(PIN_PA25, 4, 2)
#define PIN_PA25__QSPI0_IO1     PINMUX_PIN(PIN_PA25, 6, 3)

#define PIN_PA26                26
#define PIN_PA26__GPIO          PINMUX_PIN(PIN_PA26, 0, 0)
#define PIN_PA26__FLEXCOM1_IO4  PINMUX_PIN(PIN_PA26, 1, 1)
#define PIN_PA26__D4            PINMUX_PIN(PIN_PA26, 2, 1)
#define PIN_PA26__NTRST         PINMUX_PIN(PIN_PA26, 3, 4)
#define PIN_PA26__SPI1_NPCS1    PINMUX_PIN(PIN_PA26, 4, 2)
#define PIN_PA26__QSPI0_IO2     PINMUX_PIN(PIN_PA26, 6, 3)

#define PIN_PA27                27
#define PIN_PA27__GPIO          PINMUX_PIN(PIN_PA27, 0, 0)
#define PIN_PA27__TIOA1         PINMUX_PIN(PIN_PA27, 1, 2)
#define PIN_PA27__D5            PINMUX_PIN(PIN_PA27, 2, 1)
#define PIN_PA27__SPI0_NPCS2    PINMUX_PIN(PIN_PA27, 3, 2)
#define PIN_PA27__SPI1_NPCS2    PINMUX_PIN(PIN_PA27, 4, 2)
#define PIN_PA27__SDMMC1_RSTN   PINMUX_PIN(PIN_PA27, 5, 1)
#define PIN_PA27__QSPI0_IO3     PINMUX_PIN(PIN_PA27, 6, 3)

#define PIN_PA28                28
#define PIN_PA28__GPIO          PINMUX_PIN(PIN_PA28, 0, 0)
#define PIN_PA28__TIOB1         PINMUX_PIN(PIN_PA28, 1, 2)
#define PIN_PA28__D6            PINMUX_PIN(PIN_PA28, 2, 1)
#define PIN_PA28__SPI0_NPCS3    PINMUX_PIN(PIN_PA28, 3, 2)
#define PIN_PA28__SPI1_NPCS3    PINMUX_PIN(PIN_PA28, 4, 2)
#define PIN_PA28__SDMMC1_CMD    PINMUX_PIN(PIN_PA28, 5, 1)
#define PIN_PA28__CLASSD_L0     PINMUX_PIN(PIN_PA28, 6, 1)

#define PIN_PA29                29
#define PIN_PA29__GPIO          PINMUX_PIN(PIN_PA29, 0, 0)
#define PIN_PA29__TCLK1         PINMUX_PIN(PIN_PA29, 1, 2)
#define PIN_PA29__D7            PINMUX_PIN(PIN_PA29, 2, 1)
#define PIN_PA29__SPI0_NPCS1    PINMUX_PIN(PIN_PA29, 3, 2)
#define PIN_PA29__SDMMC1_WP     PINMUX_PIN(PIN_PA29, 5, 1)
#define PIN_PA29__CLASSD_L1     PINMUX_PIN(PIN_PA29, 6, 1)

#define PIN_PA30                30
#define PIN_PA30__GPIO          PINMUX_PIN(PIN_PA30, 0, 0)
#define PIN_PA30__NWE_NANDWE    PINMUX_PIN(PIN_PA30, 2, 1)
#define PIN_PA30__SPI0_NPCS0    PINMUX_PIN(PIN_PA30, 3, 2)
#define PIN_PA30__PWMH0         PINMUX_PIN(PIN_PA30, 4, 1)
#define PIN_PA30__SDMMC1_CD     PINMUX_PIN(PIN_PA30, 5, 1)
#define PIN_PA30__CLASSD_L2     PINMUX_PIN(PIN_PA30, 6, 1)

#define PIN_PA31                31
#define PIN_PA31__GPIO          PINMUX_PIN(PIN_PA31, 0, 0)
#define PIN_PA31__NCS3          PINMUX_PIN(PIN_PA31, 2, 1)
#define PIN_PA31__SPI0_MISO     PINMUX_PIN(PIN_PA31, 3, 2)
#define PIN_PA31__PWML0         PINMUX_PIN(PIN_PA31, 4, 1)
#define PIN_PA31__CLASSD_L3     PINMUX_PIN(PIN_PA31, 6, 1)

#define PIN_PB0                 32
#define PIN_PB0__GPIO           PINMUX_PIN(PIN_PB0, 0, 0)
#define PIN_PB0__A21_NANDALE    PINMUX_PIN(PIN_PB0, 2, 1)
#define PIN_PB0__SPI0_MOSI      PINMUX_PIN(PIN_PB0, 3, 2)
#define PIN_PB0__PWMH1          PINMUX_PIN(PIN_PB0, 4, 1)

#define PIN_PB1                 33
#define PIN_PB1__GPIO           PINMUX_PIN(PIN_PB1, 0, 0)
#define PIN_PB1__A22_NANDCLE    PINMUX_PIN(PIN_PB1, 2, 1)
#define PIN_PB1__SPI0_SPCK      PINMUX_PIN(PIN_PB1, 3, 2)
#define PIN_PB1__PWML1          PINMUX_PIN(PIN_PB1, 4, 1)
#define PIN_PB1__CLASSD_R0      PINMUX_PIN(PIN_PB1, 6, 1)

#define PIN_PB2                 34
#define PIN_PB2__GPIO           PINMUX_PIN(PIN_PB2, 0, 0)
#define PIN_PB2__NRD_NANDOE     PINMUX_PIN(PIN_PB2, 2, 1)
#define PIN_PB2__PWMFI0         PINMUX_PIN(PIN_PB2, 4, 1)
#define PIN_PB2__CLASSD_R1      PINMUX_PIN(PIN_PB2, 6, 1)

#define PIN_PB3                 35
#define PIN_PB3__GPIO           PINMUX_PIN(PIN_PB3, 0, 0)
#define PIN_PB3__URXD4          PINMUX_PIN(PIN_PB3, 1, 1)
#define PIN_PB3__D8             PINMUX_PIN(PIN_PB3, 2, 1)
#define PIN_PB3__IRQ            PINMUX_PIN(PIN_PB3, 3, 3)
#define PIN_PB3__PWMEXTRG0      PINMUX_PIN(PIN_PB3, 4, 1)
#define PIN_PB3__CLASSD_R2      PINMUX_PIN(PIN_PB3, 6, 1)

#define PIN_PB4                 36
#define PIN_PB4__GPIO           PINMUX_PIN(PIN_PB4, 0, 0)
#define PIN_PB4__UTXD4          PINMUX_PIN(PIN_PB4, 1, 1)
#define PIN_PB4__D9             PINMUX_PIN(PIN_PB4, 2, 1)
#define PIN_PB4__FIQ            PINMUX_PIN(PIN_PB4, 3, 4)
#define PIN_PB4__CLASSD_R3      PINMUX_PIN(PIN_PB4, 6, 1)

#define PIN_PB5                 37
#define PIN_PB5__GPIO           PINMUX_PIN(PIN_PB5, 0, 0)
#define PIN_PB5__TCLK2          PINMUX_PIN(PIN_PB5, 1, 1)
#define PIN_PB5__D10            PINMUX_PIN(PIN_PB5, 2, 1)
#define PIN_PB5__PWMH2          PINMUX_PIN(PIN_PB5, 3, 1)
#define PIN_PB5__QSPI1_SCK      PINMUX_PIN(PIN_PB5, 4, 2)
#define PIN_PB5__GTSUCOMP       PINMUX_PIN(PIN_PB5, 6, 3)

#define PIN_PB6                 38
#define PIN_PB6__GPIO           PINMUX_PIN(PIN_PB6, 0, 0)
#define PIN_PB6__TIOA2          PINMUX_PIN(PIN_PB6, 1, 1)
#define PIN_PB6__D11            PINMUX_PIN(PIN_PB6, 2, 1)
#define PIN_PB6__PWML2          PINMUX_PIN(PIN_PB6, 3, 1)
#define PIN_PB6__QSPI1_CS       PINMUX_PIN(PIN_PB6, 4, 2)
#define PIN_PB6__GTXER          PINMUX_PIN(PIN_PB6, 6, 3)

#define PIN_PB7                 39
#define PIN_PB7__GPIO           PINMUX_PIN(PIN_PB7, 0, 0)
#define PIN_PB7__TIOB2          PINMUX_PIN(PIN_PB7, 1, 1)
#define PIN_PB7__D12            PINMUX_PIN(PIN_PB7, 2, 1)
#define PIN_PB7__PWMH3          PINMUX_PIN(PIN_PB7, 3, 1)
#define PIN_PB7__QSPI1_IO0      PINMUX_PIN(PIN_PB7, 4, 2)
#define PIN_PB7__GRXCK          PINMUX_PIN(PIN_PB7, 6, 3)

#define PIN_PB8                 40
#define PIN_PB8__GPIO           PINMUX_PIN(PIN_PB8, 0, 0)
#define PIN_PB8__TCLK3          PINMUX_PIN(PIN_PB8, 1, 1)
#define PIN_PB8__D13            PINMUX_PIN(PIN_PB8, 2, 1)
#define PIN_PB8__PWML3          PINMUX_PIN(PIN_PB8, 3, 1)
#define PIN_PB8__QSPI1_IO1      PINMUX_PIN(PIN_PB8, 4, 2)
#define PIN_PB8__GCRS           PINMUX_PIN(PIN_PB8, 6, 3)

#define PIN_PB9                 41
#define PIN_PB9__GPIO           PINMUX_PIN(PIN_PB9, 0, 0)
#define PIN_PB9__TIOA3          PINMUX_PIN(PIN_PB9, 1, 1)
#define PIN_PB9__D14            PINMUX_PIN(PIN_PB9, 2, 1)
#define PIN_PB9__PWMFI1         PINMUX_PIN(PIN_PB9, 3, 1)
#define PIN_PB9__QSPI1_IO2      PINMUX_PIN(PIN_PB9, 4, 2)
#define PIN_PB9__GCOL           PINMUX_PIN(PIN_PB9, 6, 3)

#define PIN_PB10                42
#define PIN_PB10__GPIO          PINMUX_PIN(PIN_PB10, 0, 0)
#define PIN_PB10__TIOB3         PINMUX_PIN(PIN_PB10, 1, 1)
#define PIN_PB10__D15           PINMUX_PIN(PIN_PB10, 2, 1)
#define PIN_PB10__PWMEXTRG1     PINMUX_PIN(PIN_PB10, 3, 1)
#define PIN_PB10__QSPI1_IO3     PINMUX_PIN(PIN_PB10, 4, 2)
#define PIN_PB10__GRX2          PINMUX_PIN(PIN_PB10, 6, 3)

#define PIN_PB11                43
#define PIN_PB11__GPIO          PINMUX_PIN(PIN_PB11, 0, 0)
#define PIN_PB11__LCDDAT0       PINMUX_PIN(PIN_PB11, 1, 1)
#define PIN_PB11__A0_NBS0       PINMUX_PIN(PIN_PB11, 2, 1)
#define PIN_PB11__URXD3         PINMUX_PIN(PIN_PB11, 3, 3)
#define PIN_PB11__PDMIC_DAT     PINMUX_PIN(PIN_PB11, 4, 2)
#define PIN_PB11__GRX3          PINMUX_PIN(PIN_PB11, 6, 3)

#define PIN_PB12                44
#define PIN_PB12__GPIO          PINMUX_PIN(PIN_PB12, 0, 0)
#define PIN_PB12__LCDDAT1       PINMUX_PIN(PIN_PB12, 1, 1)
#define PIN_PB12__A1            PINMUX_PIN(PIN_PB12, 2, 1)
#define PIN_PB12__UTXD3         PINMUX_PIN(PIN_PB12, 3, 3)
#define PIN_PB12__PDMIC_CLK     PINMUX_PIN(PIN_PB12, 4, 2)
#define PIN_PB12__GTX2          PINMUX_PIN(PIN_PB12, 6, 3)

#define PIN_PB13                45
#define PIN_PB13__GPIO          PINMUX_PIN(PIN_PB13, 0, 0)
#define PIN_PB13__LCDDAT2       PINMUX_PIN(PIN_PB13, 1, 1)
#define PIN_PB13__A2            PINMUX_PIN(PIN_PB13, 2, 1)
#define PIN_PB13__PCK1          PINMUX_PIN(PIN_PB13, 3, 3)
#define PIN_PB13__GTX3          PINMUX_PIN(PIN_PB13, 6, 3)

#define PIN_PB14                46
#define PIN_PB14__GPIO          PINMUX_PIN(PIN_PB14, 0, 0)
#define PIN_PB14__LCDDAT3       PINMUX_PIN(PIN_PB14, 1, 1)
#define PIN_PB14__A3            PINMUX_PIN(PIN_PB14, 2, 1)
#define PIN_PB14__TK1           PINMUX_PIN(PIN_PB14, 3, 2)
#define PIN_PB14__I2SC1_MCK     PINMUX_PIN(PIN_PB14, 4, 1)
#define PIN_PB14__QSPI1_SCK     PINMUX_PIN(PIN_PB14, 5, 3)
#define PIN_PB14__GTXCK         PINMUX_PIN(PIN_PB14, 6, 3)

#define PIN_PB15                47
#define PIN_PB15__GPIO          PINMUX_PIN(PIN_PB15, 0, 0)
#define PIN_PB15__LCDDAT4       PINMUX_PIN(PIN_PB15, 1, 1)
#define PIN_PB15__A4            PINMUX_PIN(PIN_PB15, 2, 1)
#define PIN_PB15__TF1           PINMUX_PIN(PIN_PB15, 3, 2)
#define PIN_PB15__I2SC1_CK      PINMUX_PIN(PIN_PB15, 4, 1)
#define PIN_PB15__QSPI1_CS      PINMUX_PIN(PIN_PB15, 5, 3)
#define PIN_PB15__GTXEN         PINMUX_PIN(PIN_PB15, 6, 3)

#define PIN_PB16                48
#define PIN_PB16__GPIO          PINMUX_PIN(PIN_PB16, 0, 0)
#define PIN_PB16__LCDDAT5       PINMUX_PIN(PIN_PB16, 1, 1)
#define PIN_PB16__A5            PINMUX_PIN(PIN_PB16, 2, 1)
#define PIN_PB16__TD1           PINMUX_PIN(PIN_PB16, 3, 2)
#define PIN_PB16__I2SC1_WS      PINMUX_PIN(PIN_PB16, 4, 1)
#define PIN_PB16__QSPI1_IO0     PINMUX_PIN(PIN_PB16, 5, 3)
#define PIN_PB16__GRXDV         PINMUX_PIN(PIN_PB16, 6, 3)

#define PIN_PB17                49
#define PIN_PB17__GPIO          PINMUX_PIN(PIN_PB17, 0, 0)
#define PIN_PB17__LCDDAT6       PINMUX_PIN(PIN_PB17, 1, 1)
#define PIN_PB17__A6            PINMUX_PIN(PIN_PB17, 2, 1)
#define PIN_PB17__RD1           PINMUX_PIN(PIN_PB17, 3, 2)
#define PIN_PB17__I2SC1_DI0     PINMUX_PIN(PIN_PB17, 4, 1)
#define PIN_PB17__QSPI1_IO1     PINMUX_PIN(PIN_PB17, 5, 3)
#define PIN_PB17__GRXER         PINMUX_PIN(PIN_PB17, 6, 3)

#define PIN_PB18                50
#define PIN_PB18__GPIO          PINMUX_PIN(PIN_PB18, 0, 0)
#define PIN_PB18__LCDDAT7       PINMUX_PIN(PIN_PB18, 1, 1)
#define PIN_PB18__A7            PINMUX_PIN(PIN_PB18, 2, 1)
#define PIN_PB18__RK1           PINMUX_PIN(PIN_PB18, 3, 2)
#define PIN_PB18__I2SC1_DO0     PINMUX_PIN(PIN_PB18, 4, 1)
#define PIN_PB18__QSPI1_IO2     PINMUX_PIN(PIN_PB18, 5, 3)
#define PIN_PB18__GRX0          PINMUX_PIN(PIN_PB18, 6, 3)

#define PIN_PB19                51
#define PIN_PB19__GPIO          PINMUX_PIN(PIN_PB19, 0, 0)
#define PIN_PB19__LCDDAT8       PINMUX_PIN(PIN_PB19, 1, 1)
#define PIN_PB19__A8            PINMUX_PIN(PIN_PB19, 2, 1)
#define PIN_PB19__RF1           PINMUX_PIN(PIN_PB19, 3, 2)
#define PIN_PB19__TIOA3         PINMUX_PIN(PIN_PB19, 4, 2)
#define PIN_PB19__QSPI1_IO3     PINMUX_PIN(PIN_PB19, 5, 3)
#define PIN_PB19__GRX1          PINMUX_PIN(PIN_PB19, 6, 3)

#define PIN_PB20                52
#define PIN_PB20__GPIO          PINMUX_PIN(PIN_PB20, 0, 0)
#define PIN_PB20__LCDDAT9       PINMUX_PIN(PIN_PB20, 1, 1)
#define PIN_PB20__A9            PINMUX_PIN(PIN_PB20, 2, 1)
#define PIN_PB20__TK0           PINMUX_PIN(PIN_PB20, 3, 1)
#define PIN_PB20__TIOB3         PINMUX_PIN(PIN_PB20, 4, 2)
#define PIN_PB20__PCK1          PINMUX_PIN(PIN_PB20, 5, 4)
#define PIN_PB20__GTX0          PINMUX_PIN(PIN_PB20, 6, 3)

#define PIN_PB21                53
#define PIN_PB21__GPIO          PINMUX_PIN(PIN_PB21, 0, 0)
#define PIN_PB21__LCDDAT10      PINMUX_PIN(PIN_PB21, 1, 1)
#define PIN_PB21__A10           PINMUX_PIN(PIN_PB21, 2, 1)
#define PIN_PB21__TF0           PINMUX_PIN(PIN_PB21, 3, 1)
#define PIN_PB21__TCLK3         PINMUX_PIN(PIN_PB21, 4, 2)
#define PIN_PB21__FLEXCOM3_IO2  PINMUX_PIN(PIN_PB21, 5, 3)
#define PIN_PB21__GTX1          PINMUX_PIN(PIN_PB21, 6, 3)

#define PIN_PB22                54
#define PIN_PB22__GPIO          PINMUX_PIN(PIN_PB22, 0, 0)
#define PIN_PB22__LCDDAT11      PINMUX_PIN(PIN_PB22, 1, 1)
#define PIN_PB22__A11           PINMUX_PIN(PIN_PB22, 2, 1)
#define PIN_PB22__TDO           PINMUX_PIN(PIN_PB22, 3, 1)
#define PIN_PB22__TIOA2         PINMUX_PIN(PIN_PB22, 4, 2)
#define PIN_PB22__FLEXCOM3_IO1  PINMUX_PIN(PIN_PB22, 5, 3)
#define PIN_PB22__GMDC          PINMUX_PIN(PIN_PB22, 6, 3)

#define PIN_PB23                55
#define PIN_PB23__GPIO          PINMUX_PIN(PIN_PB23, 0, 0)
#define PIN_PB23__LCDDAT12      PINMUX_PIN(PIN_PB23, 1, 1)
#define PIN_PB23__A12           PINMUX_PIN(PIN_PB23, 2, 1)
#define PIN_PB23__RD0           PINMUX_PIN(PIN_PB23, 3, 1)
#define PIN_PB23__TIOB2         PINMUX_PIN(PIN_PB23, 4, 2)
#define PIN_PB23__FLEXCOM3_IO0  PINMUX_PIN(PIN_PB23, 5, 3)
#define PIN_PB23__GMDIO         PINMUX_PIN(PIN_PB23, 6, 3)

#define PIN_PB24                56
#define PIN_PB24__GPIO          PINMUX_PIN(PIN_PB24, 0, 0)
#define PIN_PB24__LCDDAT13      PINMUX_PIN(PIN_PB24, 1, 1)
#define PIN_PB24__A13           PINMUX_PIN(PIN_PB24, 2, 1)
#define PIN_PB24__RK0           PINMUX_PIN(PIN_PB24, 3, 1)
#define PIN_PB24__TCLK2         PINMUX_PIN(PIN_PB24, 4, 2)
#define PIN_PB24__FLEXCOM3_IO3  PINMUX_PIN(PIN_PB24, 5, 3)
#define PIN_PB24__ISC_D10       PINMUX_PIN(PIN_PB24, 6, 3)

#define PIN_PB25                57
#define PIN_PB25__GPIO          PINMUX_PIN(PIN_PB25, 0, 0)
#define PIN_PB25__LCDDAT14      PINMUX_PIN(PIN_PB25, 1, 1)
#define PIN_PB25__A14           PINMUX_PIN(PIN_PB25, 2, 1)
#define PIN_PB25__RF0           PINMUX_PIN(PIN_PB25, 3, 1)
#define PIN_PB25__FLEXCOM3_IO4  PINMUX_PIN(PIN_PB25, 5, 3)
#define PIN_PB25__ISC_D11       PINMUX_PIN(PIN_PB25, 6, 3)

#define PIN_PB26                58
#define PIN_PB26__GPIO          PINMUX_PIN(PIN_PB26, 0, 0)
#define PIN_PB26__LCDDAT15      PINMUX_PIN(PIN_PB26, 1, 1)
#define PIN_PB26__A15           PINMUX_PIN(PIN_PB26, 2, 1)
#define PIN_PB26__URXD0         PINMUX_PIN(PIN_PB26, 3, 1)
#define PIN_PB26__PDMIC_DAT     PINMUX_PIN(PIN_PB26, 4, 1)
#define PIN_PB26__ISC_D0        PINMUX_PIN(PIN_PB26, 6, 3)

#define PIN_PB27                59
#define PIN_PB27__GPIO          PINMUX_PIN(PIN_PB27, 0, 0)
#define PIN_PB27__LCDDAT16      PINMUX_PIN(PIN_PB27, 1, 1)
#define PIN_PB27__A16           PINMUX_PIN(PIN_PB27, 2, 1)
#define PIN_PB27__UTXD0         PINMUX_PIN(PIN_PB27, 3, 1)
#define PIN_PB27__PDMIC_CLK     PINMUX_PIN(PIN_PB27, 4, 1)
#define PIN_PB27__ISC_D1        PINMUX_PIN(PIN_PB27, 6, 3)

#define PIN_PB28                60
#define PIN_PB28__GPIO          PINMUX_PIN(PIN_PB28, 0, 0)
#define PIN_PB28__LCDDAT17      PINMUX_PIN(PIN_PB28, 1, 1)
#define PIN_PB28__A17           PINMUX_PIN(PIN_PB28, 2, 1)
#define PIN_PB28__FLEXCOM0_IO0  PINMUX_PIN(PIN_PB28, 3, 1)
#define PIN_PB28__TIOA5         PINMUX_PIN(PIN_PB28, 4, 2)
#define PIN_PB28__ISC_D2        PINMUX_PIN(PIN_PB28, 6, 3)

#define PIN_PB29                61
#define PIN_PB29__GPIO          PINMUX_PIN(PIN_PB29, 0, 0)
#define PIN_PB29__LCDDAT18      PINMUX_PIN(PIN_PB29, 1, 1)
#define PIN_PB29__A18           PINMUX_PIN(PIN_PB29, 2, 1)
#define PIN_PB29__FLEXCOM0_IO1  PINMUX_PIN(PIN_PB29, 3, 1)
#define PIN_PB29__TIOB5         PINMUX_PIN(PIN_PB29, 4, 2)
#define PIN_PB29__ISC_D3        PINMUX_PIN(PIN_PB29, 7, 3)

#define PIN_PB30                62
#define PIN_PB30__GPIO          PINMUX_PIN(PIN_PB30, 0, 0)
#define PIN_PB30__LCDDAT19      PINMUX_PIN(PIN_PB30, 1, 1)
#define PIN_PB30__A19           PINMUX_PIN(PIN_PB30, 2, 1)
#define PIN_PB30__FLEXCOM0_IO2  PINMUX_PIN(PIN_PB30, 3, 1)
#define PIN_PB30__TCLK5         PINMUX_PIN(PIN_PB30, 4, 2)
#define PIN_PB30__ISC_D4        PINMUX_PIN(PIN_PB30, 6, 3)
#define PIN_PB31                63
#define PIN_PB31__GPIO          PINMUX_PIN(PIN_PB31, 0, 0)
#define PIN_PB31__LCDDAT20      PINMUX_PIN(PIN_PB31, 1, 1)
#define PIN_PB31__A20           PINMUX_PIN(PIN_PB31, 2, 1)
#define PIN_PB31__FLEXCOM0_IO3  PINMUX_PIN(PIN_PB31, 3, 1)
#define PIN_PB31__TWD0          PINMUX_PIN(PIN_PB31, 4, 1)
#define PIN_PB31__ISC_D5        PINMUX_PIN(PIN_PB31, 6, 3)

#define PIN_PC0                 64
#define PIN_PC0__GPIO           PINMUX_PIN(PIN_PC0, 0, 0)
#define PIN_PC0__LCDDAT21       PINMUX_PIN(PIN_PC0, 1, 1)
#define PIN_PC0__A23            PINMUX_PIN(PIN_PC0, 2, 1)
#define PIN_PC0__FLEXCOM0_IO4   PINMUX_PIN(PIN_PC0, 3, 1)
#define PIN_PC0__TWCK0          PINMUX_PIN(PIN_PC0, 4, 1)
#define PIN_PC0__ISC_D6         PINMUX_PIN(PIN_PC0, 6, 3)

#define PIN_PC1                 65
#define PIN_PC1__GPIO           PINMUX_PIN(PIN_PC1, 0, 0)
#define PIN_PC1__LCDDAT22       PINMUX_PIN(PIN_PC1, 1, 1)
#define PIN_PC1__A24            PINMUX_PIN(PIN_PC1, 2, 1)
#define PIN_PC1__CANTX0         PINMUX_PIN(PIN_PC1, 3, 1)
#define PIN_PC1__SPI1_SPCK      PINMUX_PIN(PIN_PC1, 4, 1)
#define PIN_PC1__I2SC0_CK       PINMUX_PIN(PIN_PC1, 5, 1)
#define PIN_PC1__ISC_D7         PINMUX_PIN(PIN_PC1, 6, 3)

#define PIN_PC2                 66
#define PIN_PC2__GPIO           PINMUX_PIN(PIN_PC2, 0, 0)
#define PIN_PC2__LCDDAT23       PINMUX_PIN(PIN_PC2, 1, 1)
#define PIN_PC2__A25            PINMUX_PIN(PIN_PC2, 2, 1)
#define PIN_PC2__CANRX0         PINMUX_PIN(PIN_PC2, 3, 1)
#define PIN_PC2__SPI1_MOSI      PINMUX_PIN(PIN_PC2, 4, 1)
#define PIN_PC2__I2SC0_MCK      PINMUX_PIN(PIN_PC2, 5, 1)
#define PIN_PC2__ISC_D8         PINMUX_PIN(PIN_PC2, 6, 3)

#define PIN_PC3                 67
#define PIN_PC3__GPIO           PINMUX_PIN(PIN_PC3, 0, 0)
#define PIN_PC3__LCDPWM         PINMUX_PIN(PIN_PC3, 1, 1)
#define PIN_PC3__NWAIT          PINMUX_PIN(PIN_PC3, 2, 1)
#define PIN_PC3__TIOA1          PINMUX_PIN(PIN_PC3, 3, 1)
#define PIN_PC3__SPI1_MISO      PINMUX_PIN(PIN_PC3, 4, 1)
#define PIN_PC3__I2SC0_WS       PINMUX_PIN(PIN_PC3, 5, 1)
#define PIN_PC3__ISC_D9         PINMUX_PIN(PIN_PC3, 6, 3)

#define PIN_PC4                 68
#define PIN_PC4__GPIO           PINMUX_PIN(PIN_PC4, 0, 0)
#define PIN_PC4__LCDDISP        PINMUX_PIN(PIN_PC4, 1, 1)
#define PIN_PC4__NWR1_NBS1      PINMUX_PIN(PIN_PC4, 2, 1)
#define PIN_PC4__TIOB1          PINMUX_PIN(PIN_PC4, 3, 1)
#define PIN_PC4__SPI1_NPCS0     PINMUX_PIN(PIN_PC4, 4, 1)
#define PIN_PC4__I2SC0_DI0      PINMUX_PIN(PIN_PC4, 5, 1)
#define PIN_PC4__ISC_PCK        PINMUX_PIN(PIN_PC4, 6, 3)

#define PIN_PC5                 69
#define PIN_PC5__GPIO           PINMUX_PIN(PIN_PC5, 0, 0)
#define PIN_PC5__LCDVSYNC       PINMUX_PIN(PIN_PC5, 1, 1)
#define PIN_PC5__NCS0           PINMUX_PIN(PIN_PC5, 2, 1)
#define PIN_PC5__TCLK1          PINMUX_PIN(PIN_PC5, 3, 1)
#define PIN_PC5__SPI1_NPCS1     PINMUX_PIN(PIN_PC5, 4, 1)
#define PIN_PC5__I2SC0_DO0      PINMUX_PIN(PIN_PC5, 5, 1)
#define PIN_PC5__ISC_VSYNC      PINMUX_PIN(PIN_PC5, 6, 3)

#define PIN_PC6                 70
#define PIN_PC6__GPIO           PINMUX_PIN(PIN_PC6, 0, 0)
#define PIN_PC6__LCDHSYNC       PINMUX_PIN(PIN_PC6, 1, 1)
#define PIN_PC6__NCS1           PINMUX_PIN(PIN_PC6, 2, 1)
#define PIN_PC6__TWD1           PINMUX_PIN(PIN_PC6, 3, 1)
#define PIN_PC6__SPI1_NPCS2     PINMUX_PIN(PIN_PC6, 4, 1)
#define PIN_PC6__ISC_HSYNC      PINMUX_PIN(PIN_PC6, 6, 3)

#define PIN_PC7                 71
#define PIN_PC7__GPIO           PINMUX_PIN(PIN_PC7, 0, 0)
#define PIN_PC7__LCDPCK         PINMUX_PIN(PIN_PC7, 1, 1)
#define PIN_PC7__NCS2           PINMUX_PIN(PIN_PC7, 2, 1)
#define PIN_PC7__TWCK1          PINMUX_PIN(PIN_PC7, 3, 1)
#define PIN_PC7__SPI1_NPCS3     PINMUX_PIN(PIN_PC7, 4, 1)
#define PIN_PC7__URXD1          PINMUX_PIN(PIN_PC7, 5, 2)
#define PIN_PC7__ISC_MCK        PINMUX_PIN(PIN_PC7, 6, 3)

#define PIN_PC8                 72
#define PIN_PC8__GPIO           PINMUX_PIN(PIN_PC8, 0, 0)
#define PIN_PC8__LCDDEN         PINMUX_PIN(PIN_PC8, 1, 1)
#define PIN_PC8__NANDRDY        PINMUX_PIN(PIN_PC8, 2, 1)
#define PIN_PC8__FIQ            PINMUX_PIN(PIN_PC8, 3, 1)
#define PIN_PC8__PCK0           PINMUX_PIN(PIN_PC8, 4, 3)
#define PIN_PC8__UTXD1          PINMUX_PIN(PIN_PC8, 5, 2)
#define PIN_PC8__ISC_FIELD      PINMUX_PIN(PIN_PC8, 6, 3)

#define PIN_PC9                 73
#define PIN_PC9__GPIO           PINMUX_PIN(PIN_PC9, 0, 0)
#define PIN_PC9__FIQ            PINMUX_PIN(PIN_PC9, 1, 3)
#define PIN_PC9__GTSUCOMP       PINMUX_PIN(PIN_PC9, 2, 1)
#define PIN_PC9__ISC_D0         PINMUX_PIN(PIN_PC9, 2, 1)
#define PIN_PC9__TIOA4          PINMUX_PIN(PIN_PC9, 4, 2)

#define PIN_PC10                74
#define PIN_PC10__GPIO          PINMUX_PIN(PIN_PC10, 0, 0)
#define PIN_PC10__LCDDAT2       PINMUX_PIN(PIN_PC10, 1, 2)
#define PIN_PC10__GTXCK         PINMUX_PIN(PIN_PC10, 2, 1)
#define PIN_PC10__ISC_D1        PINMUX_PIN(PIN_PC10, 3, 1)
#define PIN_PC10__TIOB4         PINMUX_PIN(PIN_PC10, 4, 2)
#define PIN_PC10__CANTX0        PINMUX_PIN(PIN_PC10, 5, 2)

#define PIN_PC11                75
#define PIN_PC11__GPIO          PINMUX_PIN(PIN_PC11, 0, 0)
#define PIN_PC11__LCDDAT3       PINMUX_PIN(PIN_PC11, 1, 2)
#define PIN_PC11__GTXEN         PINMUX_PIN(PIN_PC11, 2, 1)
#define PIN_PC11__ISC_D2        PINMUX_PIN(PIN_PC11, 3, 1)
#define PIN_PC11__TCLK4         PINMUX_PIN(PIN_PC11, 4, 2)
#define PIN_PC11__CANRX0        PINMUX_PIN(PIN_PC11, 5, 2)
#define PIN_PC11__A0_NBS0       PINMUX_PIN(PIN_PC11, 6, 2)

#define PIN_PC12                76
#define PIN_PC12__GPIO          PINMUX_PIN(PIN_PC12, 0, 0)
#define PIN_PC12__LCDDAT4       PINMUX_PIN(PIN_PC12, 1, 2)
#define PIN_PC12__GRXDV         PINMUX_PIN(PIN_PC12, 2, 1)
#define PIN_PC12__ISC_D3        PINMUX_PIN(PIN_PC12, 3, 1)
#define PIN_PC12__URXD3         PINMUX_PIN(PIN_PC12, 4, 1)
#define PIN_PC12__TK0           PINMUX_PIN(PIN_PC12, 5, 2)
#define PIN_PC12__A1            PINMUX_PIN(PIN_PC12, 6, 2)

#define PIN_PC13                77
#define PIN_PC13__GPIO          PINMUX_PIN(PIN_PC13, 0, 0)
#define PIN_PC13__LCDDAT5       PINMUX_PIN(PIN_PC13, 1, 2)
#define PIN_PC13__GRXER         PINMUX_PIN(PIN_PC13, 2, 1)
#define PIN_PC13__ISC_D4        PINMUX_PIN(PIN_PC13, 3, 1)
#define PIN_PC13__UTXD3         PINMUX_PIN(PIN_PC13, 4, 1)
#define PIN_PC13__TF0           PINMUX_PIN(PIN_PC13, 5, 2)
#define PIN_PC13__A2            PINMUX_PIN(PIN_PC13, 6, 2)

#define PIN_PC14                78
#define PIN_PC14__GPIO          PINMUX_PIN(PIN_PC14, 0, 0)
#define PIN_PC14__LCDDAT6       PINMUX_PIN(PIN_PC14, 1, 2)
#define PIN_PC14__GRX0          PINMUX_PIN(PIN_PC14, 2, 1)
#define PIN_PC14__ISC_D5        PINMUX_PIN(PIN_PC14, 3, 1)
#define PIN_PC14__TDO           PINMUX_PIN(PIN_PC14, 5, 2)
#define PIN_PC14__A3            PINMUX_PIN(PIN_PC14, 6, 2)

#define PIN_PC15                79
#define PIN_PC15__GPIO          PINMUX_PIN(PIN_PC15, 0, 0)
#define PIN_PC15__LCDDAT7       PINMUX_PIN(PIN_PC15, 1, 2)
#define PIN_PC15__GRX1          PINMUX_PIN(PIN_PC15, 2, 1)
#define PIN_PC15__ISC_D6        PINMUX_PIN(PIN_PC15, 3, 1)
#define PIN_PC15__RD0           PINMUX_PIN(PIN_PC15, 5, 2)
#define PIN_PC15__A4            PINMUX_PIN(PIN_PC15, 6, 2)

#define PIN_PC16                80
#define PIN_PC16__GPIO          PINMUX_PIN(PIN_PC16, 0, 0)
#define PIN_PC16__LCDDAT10      PINMUX_PIN(PIN_PC16, 1, 2)
#define PIN_PC16__GTX0          PINMUX_PIN(PIN_PC16, 2, 1)
#define PIN_PC16__ISC_D7        PINMUX_PIN(PIN_PC16, 3, 1)
#define PIN_PC16__RK0           PINMUX_PIN(PIN_PC16, 5, 2)
#define PIN_PC16__A5            PINMUX_PIN(PIN_PC16, 6, 2)

#define PIN_PC17                81
#define PIN_PC17__GPIO          PINMUX_PIN(PIN_PC17, 0, 0)
#define PIN_PC17__LCDDAT11      PINMUX_PIN(PIN_PC17, 1, 2)
#define PIN_PC17__GTX1          PINMUX_PIN(PIN_PC17, 2, 1)
#define PIN_PC17__ISC_D8        PINMUX_PIN(PIN_PC17, 3, 1)
#define PIN_PC17__RF0           PINMUX_PIN(PIN_PC17, 5, 2)
#define PIN_PC17__A6            PINMUX_PIN(PIN_PC17, 6, 2)

#define PIN_PC18                82
#define PIN_PC18__GPIO          PINMUX_PIN(PIN_PC18, 0, 0)
#define PIN_PC18__LCDDAT12      PINMUX_PIN(PIN_PC18, 1, 2)
#define PIN_PC18__GMDC          PINMUX_PIN(PIN_PC18, 2, 1)
#define PIN_PC18__ISC_D9        PINMUX_PIN(PIN_PC18, 3, 1)
#define PIN_PC18__FLEXCOM3_IO2  PINMUX_PIN(PIN_PC18, 5, 2)
#define PIN_PC18__A7            PINMUX_PIN(PIN_PC18, 6, 2)

#define PIN_PC19                83
#define PIN_PC19__GPIO          PINMUX_PIN(PIN_PC19, 0, 0)
#define PIN_PC19__LCDDAT13      PINMUX_PIN(PIN_PC19, 1, 2)
#define PIN_PC19__GMDIO         PINMUX_PIN(PIN_PC19, 2, 1)
#define PIN_PC19__ISC_D10       PINMUX_PIN(PIN_PC19, 3, 1)
#define PIN_PC19__FLEXCOM3_IO1  PINMUX_PIN(PIN_PC19, 5, 2)
#define PIN_PC19__A8            PINMUX_PIN(PIN_PC19, 6, 2)

#define PIN_PC20                84
#define PIN_PC20__GPIO          PINMUX_PIN(PIN_PC20, 0, 0)
#define PIN_PC20__LCDDAT14      PINMUX_PIN(PIN_PC20, 1, 2)
#define PIN_PC20__GRXCK         PINMUX_PIN(PIN_PC20, 2, 1)
#define PIN_PC20__ISC_D11       PINMUX_PIN(PIN_PC20, 3, 1)
#define PIN_PC20__FLEXCOM3_IO0  PINMUX_PIN(PIN_PC20, 5, 2)
#define PIN_PC20__A9            PINMUX_PIN(PIN_PC20, 6, 2)

#define PIN_PC21                85
#define PIN_PC21__GPIO          PINMUX_PIN(PIN_PC21, 0, 0)
#define PIN_PC21__LCDDAT15      PINMUX_PIN(PIN_PC21, 1, 2)
#define PIN_PC21__GTXER         PINMUX_PIN(PIN_PC21, 2, 1)
#define PIN_PC21__ISC_PCK       PINMUX_PIN(PIN_PC21, 3, 1)
#define PIN_PC21__FLEXCOM3_IO3  PINMUX_PIN(PIN_PC21, 5, 2)
#define PIN_PC21__A10           PINMUX_PIN(PIN_PC21, 6, 2)

#define PIN_PC22                86
#define PIN_PC22__GPIO          PINMUX_PIN(PIN_PC22, 0, 0)
#define PIN_PC22__LCDDAT18      PINMUX_PIN(PIN_PC22, 1, 2)
#define PIN_PC22__GCRS          PINMUX_PIN(PIN_PC22, 2, 1)
#define PIN_PC22__ISC_VSYNC     PINMUX_PIN(PIN_PC22, 3, 1)
#define PIN_PC22__FLEXCOM3_IO4  PINMUX_PIN(PIN_PC22, 5, 2)
#define PIN_PC22__A11           PINMUX_PIN(PIN_PC22, 6, 2)

#define PIN_PC23                87
#define PIN_PC23__GPIO          PINMUX_PIN(PIN_PC23, 0, 0)
#define PIN_PC23__LCDDAT19      PINMUX_PIN(PIN_PC23, 1, 2)
#define PIN_PC23__GCOL          PINMUX_PIN(PIN_PC23, 2, 1)
#define PIN_PC23__ISC_HSYNC     PINMUX_PIN(PIN_PC23, 3, 1)
#define PIN_PC23__A12           PINMUX_PIN(PIN_PC23, 6, 2)

#define PIN_PC24                88
#define PIN_PC24__GPIO          PINMUX_PIN(PIN_PC24, 0, 0)
#define PIN_PC24__LCDDAT20      PINMUX_PIN(PIN_PC24, 1, 2)
#define PIN_PC24__GRX2          PINMUX_PIN(PIN_PC24, 2, 1)
#define PIN_PC24__ISC_MCK       PINMUX_PIN(PIN_PC24, 3, 1)
#define PIN_PC24__A13           PINMUX_PIN(PIN_PC24, 6, 2)

#define PIN_PC25                89
#define PIN_PC25__GPIO          PINMUX_PIN(PIN_PC25, 0, 0)
#define PIN_PC25__LCDDAT21      PINMUX_PIN(PIN_PC25, 1, 2)
#define PIN_PC25__GRX3          PINMUX_PIN(PIN_PC25, 2, 1)
#define PIN_PC25__ISC_FIELD     PINMUX_PIN(PIN_PC25, 3, 1)
#define PIN_PC25__A14           PINMUX_PIN(PIN_PC25, 6, 2)

#define PIN_PC26                90
#define PIN_PC26__GPIO          PINMUX_PIN(PIN_PC26, 0, 0)
#define PIN_PC26__LCDDAT22      PINMUX_PIN(PIN_PC26, 1, 2)
#define PIN_PC26__GTX2          PINMUX_PIN(PIN_PC26, 2, 1)
#define PIN_PC26__CANTX1        PINMUX_PIN(PIN_PC26, 4, 1)
#define PIN_PC26__A15           PINMUX_PIN(PIN_PC26, 6, 2)

#define PIN_PC27                91
#define PIN_PC27__GPIO          PINMUX_PIN(PIN_PC27, 0, 0)
#define PIN_PC27__LCDDAT23      PINMUX_PIN(PIN_PC27, 1, 2)
#define PIN_PC27__GTX3          PINMUX_PIN(PIN_PC27, 2, 1)
#define PIN_PC27__PCK1          PINMUX_PIN(PIN_PC27, 3, 2)
#define PIN_PC27__CANRX1        PINMUX_PIN(PIN_PC27, 4, 1)
#define PIN_PC27__TWD0          PINMUX_PIN(PIN_PC27, 5, 2)
#define PIN_PC27__A16           PINMUX_PIN(PIN_PC27, 6, 2)

#define PIN_PC28                92
#define PIN_PC28__GPIO          PINMUX_PIN(PIN_PC28, 0, 0)
#define PIN_PC28__LCDPWM        PINMUX_PIN(PIN_PC28, 1, 2)
#define PIN_PC28__FLEXCOM4_IO0  PINMUX_PIN(PIN_PC28, 2, 1)
#define PIN_PC28__PCK2          PINMUX_PIN(PIN_PC28, 3, 2)
#define PIN_PC28__TWCK0         PINMUX_PIN(PIN_PC28, 5, 2)
#define PIN_PC28__A17           PINMUX_PIN(PIN_PC28, 6, 2)

#define PIN_PC29                93
#define PIN_PC29__GPIO          PINMUX_PIN(PIN_PC29, 0, 0)
#define PIN_PC29__LCDDISP       PINMUX_PIN(PIN_PC29, 1, 2)
#define PIN_PC29__FLEXCOM4_IO1  PINMUX_PIN(PIN_PC29, 2, 1)
#define PIN_PC29__A18           PINMUX_PIN(PIN_PC29, 6, 2)

#define PIN_PC30                94
#define PIN_PC30__GPIO          PINMUX_PIN(PIN_PC30, 0, 0)
#define PIN_PC30__LCDVSYNC      PINMUX_PIN(PIN_PC30, 1, 2)
#define PIN_PC30__FLEXCOM4_IO2  PINMUX_PIN(PIN_PC30, 2, 1)
#define PIN_PC30__A19           PINMUX_PIN(PIN_PC30, 6, 2)

#define PIN_PC31                95
#define PIN_PC31__GPIO          PINMUX_PIN(PIN_PC31, 0, 0)
#define PIN_PC31__LCDHSYNC      PINMUX_PIN(PIN_PC31, 1, 2)
#define PIN_PC31__FLEXCOM4_IO3  PINMUX_PIN(PIN_PC31, 2, 1)
#define PIN_PC31__URXD3         PINMUX_PIN(PIN_PC31, 3, 2)
#define PIN_PC31__A20           PINMUX_PIN(PIN_PC31, 6, 2)

#define PIN_PD0                 96
#define PIN_PD0__GPIO           PINMUX_PIN(PIN_PD0, 0, 0)
#define PIN_PD0__LCDPCK         PINMUX_PIN(PIN_PD0, 1, 2)
#define PIN_PD0__FLEXCOM4_IO4   PINMUX_PIN(PIN_PD0, 2, 1)
#define PIN_PD0__UTXD3          PINMUX_PIN(PIN_PD0, 3, 2)
#define PIN_PD0__GTSUCOMP       PINMUX_PIN(PIN_PD0, 4, 2)
#define PIN_PD0__A23            PINMUX_PIN(PIN_PD0, 6, 2)

#define PIN_PD1                 97
#define PIN_PD1__GPIO           PINMUX_PIN(PIN_PD1, 0, 0)
#define PIN_PD1__LCDDEN         PINMUX_PIN(PIN_PD1, 1, 2)
#define PIN_PD1__GRXCK          PINMUX_PIN(PIN_PD1, 4, 2)
#define PIN_PD1__A24            PINMUX_PIN(PIN_PD1, 6, 2)

#define PIN_PD2                 98
#define PIN_PD2__GPIO           PINMUX_PIN(PIN_PD2, 0, 0)
#define PIN_PD2__URXD1          PINMUX_PIN(PIN_PD2, 1, 1)
#define PIN_PD2__GTXER          PINMUX_PIN(PIN_PD2, 4, 2)
#define PIN_PD2__ISC_MCK        PINMUX_PIN(PIN_PD2, 5, 2)
#define PIN_PD2__A25            PINMUX_PIN(PIN_PD2, 6, 2)

#define PIN_PD3                 99
#define PIN_PD3__GPIO           PINMUX_PIN(PIN_PD3, 0, 0)
#define PIN_PD3__UTXD1          PINMUX_PIN(PIN_PD3, 1, 1)
#define PIN_PD3__FIQ            PINMUX_PIN(PIN_PD3, 2, 2)
#define PIN_PD3__GCRS           PINMUX_PIN(PIN_PD3, 4, 2)
#define PIN_PD3__ISC_D11        PINMUX_PIN(PIN_PD3, 5, 2)
#define PIN_PD3__NWAIT          PINMUX_PIN(PIN_PD3, 6, 2)

#define PIN_PD4                 100
#define PIN_PD4__GPIO           PINMUX_PIN(PIN_PD4, 0, 0)
#define PIN_PD4__TWD1           PINMUX_PIN(PIN_PD4, 1, 2)
#define PIN_PD4__URXD2          PINMUX_PIN(PIN_PD4, 2, 1)
#define PIN_PD4__GCOL           PINMUX_PIN(PIN_PD4, 4, 2)
#define PIN_PD4__ISC_D10        PINMUX_PIN(PIN_PD4, 5, 2)
#define PIN_PD4__NCS0           PINMUX_PIN(PIN_PD4, 6, 2)

#define PIN_PD5                 101
#define PIN_PD5__GPIO           PINMUX_PIN(PIN_PD5, 0, 0)
#define PIN_PD5__TWCK1          PINMUX_PIN(PIN_PD5, 1, 2)
#define PIN_PD5__UTXD2          PINMUX_PIN(PIN_PD5, 2, 1)
#define PIN_PD5__GRX2           PINMUX_PIN(PIN_PD5, 4, 2)
#define PIN_PD5__ISC_D9         PINMUX_PIN(PIN_PD5, 5, 2)
#define PIN_PD5__NCS1           PINMUX_PIN(PIN_PD5, 6, 2)

#define PIN_PD6                 102
#define PIN_PD6__GPIO           PINMUX_PIN(PIN_PD6, 0, 0)
#define PIN_PD6__TCK            PINMUX_PIN(PIN_PD6, 1, 2)
#define PIN_PD6__PCK1           PINMUX_PIN(PIN_PD6, 2, 1)
#define PIN_PD6__GRX3           PINMUX_PIN(PIN_PD6, 4, 2)
#define PIN_PD6__ISC_D8         PINMUX_PIN(PIN_PD6, 5, 2)
#define PIN_PD6__NCS2           PINMUX_PIN(PIN_PD6, 6, 2)

#define PIN_PD7                 103
#define PIN_PD7__GPIO           PINMUX_PIN(PIN_PD7, 0, 0)
#define PIN_PD7__TDI            PINMUX_PIN(PIN_PD7, 1, 2)
#define PIN_PD7__UTMI_RXVAL     PINMUX_PIN(PIN_PD7, 3, 1)
#define PIN_PD7__GTX2           PINMUX_PIN(PIN_PD7, 4, 2)
#define PIN_PD7__ISC_D0         PINMUX_PIN(PIN_PD7, 5, 2)
#define PIN_PD7__NWR1_NBS1      PINMUX_PIN(PIN_PD7, 6, 2)

#define PIN_PD8                 104
#define PIN_PD8__GPIO           PINMUX_PIN(PIN_PD8, 0, 0)
#define PIN_PD8__TDO            PINMUX_PIN(PIN_PD8, 1, 2)
#define PIN_PD8__UTMI_RXERR     PINMUX_PIN(PIN_PD8, 3, 1)
#define PIN_PD8__GTX3           PINMUX_PIN(PIN_PD8, 4, 2)
#define PIN_PD8__ISC_D1         PINMUX_PIN(PIN_PD8, 5, 2)
#define PIN_PD8__NANDRDY        PINMUX_PIN(PIN_PD8, 6, 2)

#define PIN_PD9                 105
#define PIN_PD9__GPIO           PINMUX_PIN(PIN_PD9, 0, 0)
#define PIN_PD9__TMS            PINMUX_PIN(PIN_PD9, 1, 2)
#define PIN_PD9__UTMI_RXACT     PINMUX_PIN(PIN_PD9, 3, 1)
#define PIN_PD9__GTXCK          PINMUX_PIN(PIN_PD9, 4, 2)
#define PIN_PD9__ISC_D2         PINMUX_PIN(PIN_PD9, 5, 2)

#define PIN_PD10                106
#define PIN_PD10__GPIO          PINMUX_PIN(PIN_PD10, 0, 0)
#define PIN_PD10__NTRST         PINMUX_PIN(PIN_PD10, 1, 2)
#define PIN_PD10__UTMI_HDIS     PINMUX_PIN(PIN_PD10, 3, 1)
#define PIN_PD10__GTXEN         PINMUX_PIN(PIN_PD10, 4, 2)
#define PIN_PD10__ISC_D3        PINMUX_PIN(PIN_PD10, 5, 2)

#define PIN_PD11                107
#define PIN_PD11__GPIO          PINMUX_PIN(PIN_PD11, 0, 0)
#define PIN_PD11__TIOA1         PINMUX_PIN(PIN_PD11, 1, 3)
#define PIN_PD11__PCK2          PINMUX_PIN(PIN_PD11, 2, 2)
#define PIN_PD11__UTMI_LS0      PINMUX_PIN(PIN_PD11, 3, 1)
#define PIN_PD11__GRXDV         PINMUX_PIN(PIN_PD11, 4, 2)
#define PIN_PD11__ISC_D4        PINMUX_PIN(PIN_PD11, 5, 2)
#define PIN_PD11__ISC_MCK       PINMUX_PIN(PIN_PD11, 7, 4)

#define PIN_PD12                108
#define PIN_PD12__GPIO          PINMUX_PIN(PIN_PD12, 0, 0)
#define PIN_PD12__TIOB1         PINMUX_PIN(PIN_PD12, 1, 3)
#define PIN_PD12__FLEXCOM4_IO0  PINMUX_PIN(PIN_PD12, 2, 2)
#define PIN_PD12__UTMI_LS1      PINMUX_PIN(PIN_PD12, 3, 1)
#define PIN_PD12__GRXER         PINMUX_PIN(PIN_PD12, 4, 2)
#define PIN_PD12__ISC_D5        PINMUX_PIN(PIN_PD12, 5, 2)
#define PIN_PD12__ISC_D4        PINMUX_PIN(PIN_PD12, 6, 4)

#define PIN_PD13                109
#define PIN_PD13__GPIO              PINMUX_PIN(PIN_PD13, 0, 0)
#define PIN_PD13__TCLK1             PINMUX_PIN(PIN_PD13, 1, 3)
#define PIN_PD13__FLEXCOM4_IO1      PINMUX_PIN(PIN_PD13, 2, 2)
#define PIN_PD13__UTMI_CDRPCSEL0    PINMUX_PIN(PIN_PD13, 3, 1)
#define PIN_PD13__GRX0              PINMUX_PIN(PIN_PD13, 4, 2)
#define PIN_PD13__ISC_D6            PINMUX_PIN(PIN_PD13, 5, 2)
#define PIN_PD13__ISC_D5            PINMUX_PIN(PIN_PD13, 6, 4)

#define PIN_PD14                    110
#define PIN_PD14__GPIO              PINMUX_PIN(PIN_PD14, 0, 0)
#define PIN_PD14__TCK               PINMUX_PIN(PIN_PD14, 1, 1)
#define PIN_PD14__FLEXCOM4_IO2      PINMUX_PIN(PIN_PD14, 2, 2)
#define PIN_PD14__UTMI_CDRPCSEL1    PINMUX_PIN(PIN_PD14, 3, 1)
#define PIN_PD14__GRX1              PINMUX_PIN(PIN_PD14, 4, 2)
#define PIN_PD14__ISC_D7            PINMUX_PIN(PIN_PD14, 5, 2)
#define PIN_PD14__ISC_D6            PINMUX_PIN(PIN_PD14, 6, 4)

#define PIN_PD15                    111
#define PIN_PD15__GPIO              PINMUX_PIN(PIN_PD15, 0, 0)
#define PIN_PD15__TDI               PINMUX_PIN(PIN_PD15, 1, 1)
#define PIN_PD15__FLEXCOM4_IO3      PINMUX_PIN(PIN_PD15, 2, 2)
#define PIN_PD15__UTMI_CDRCPDIVEN   PINMUX_PIN(PIN_PD15, 3, 1)
#define PIN_PD15__GTX0              PINMUX_PIN(PIN_PD15, 4, 2)
#define PIN_PD15__ISC_PCK           PINMUX_PIN(PIN_PD15, 5, 2)
#define PIN_PD15__ISC_D7            PINMUX_PIN(PIN_PD15, 6, 4)

#define PIN_PD16                    112
#define PIN_PD16__GPIO              PINMUX_PIN(PIN_PD16, 0, 0)
#define PIN_PD16__TDO               PINMUX_PIN(PIN_PD16, 1, 1)
#define PIN_PD16__FLEXCOM4_IO4      PINMUX_PIN(PIN_PD16, 2, 2)
#define PIN_PD16__UTMI_CDRBISTEN    PINMUX_PIN(PIN_PD16, 3, 1)
#define PIN_PD16__GTX1              PINMUX_PIN(PIN_PD16, 4, 2)
#define PIN_PD16__ISC_VSYNC         PINMUX_PIN(PIN_PD16, 5, 2)
#define PIN_PD16__ISC_D8            PINMUX_PIN(PIN_PD16, 6, 4)

#define PIN_PD17                    113
#define PIN_PD17__GPIO              PINMUX_PIN(PIN_PD17, 0, 0)
#define PIN_PD17__TMS               PINMUX_PIN(PIN_PD17, 1, 1)
#define PIN_PD17__UTMI_CDRCPSELDIV  PINMUX_PIN(PIN_PD17, 3, 1)
#define PIN_PD17__GMDC              PINMUX_PIN(PIN_PD17, 4, 2)
#define PIN_PD17__ISC_HSYNC         PINMUX_PIN(PIN_PD17, 5, 2)
#define PIN_PD17__ISC_D9            PINMUX_PIN(PIN_PD17, 6, 4)

#define PIN_PD18                114
#define PIN_PD18__GPIO          PINMUX_PIN(PIN_PD18, 0, 0)
#define PIN_PD18__NTRST         PINMUX_PIN(PIN_PD18, 1, 1)
#define PIN_PD18__GMDIO         PINMUX_PIN(PIN_PD18, 4, 2)
#define PIN_PD18__ISC_FIELD     PINMUX_PIN(PIN_PD18, 5, 2)
#define PIN_PD18__ISC_D10       PINMUX_PIN(PIN_PD18, 6, 4)

#define PIN_PD19                115
#define PIN_PD19__GPIO          PINMUX_PIN(PIN_PD19, 0, 0)
#define PIN_PD19__PCK0          PINMUX_PIN(PIN_PD19, 1, 1)
#define PIN_PD19__TWD1          PINMUX_PIN(PIN_PD19, 2, 3)
#define PIN_PD19__URXD2         PINMUX_PIN(PIN_PD19, 3, 3)
#define PIN_PD19__I2SC0_CK      PINMUX_PIN(PIN_PD19, 5, 2)
#define PIN_PD19__ISC_D11       PINMUX_PIN(PIN_PD19, 6, 4)

#define PIN_PD20                116
#define PIN_PD20__GPIO          PINMUX_PIN(PIN_PD20, 0, 0)
#define PIN_PD20__TIOA2         PINMUX_PIN(PIN_PD20, 1, 3)
#define PIN_PD20__TWCK1         PINMUX_PIN(PIN_PD20, 2, 3)
#define PIN_PD20__UTXD2         PINMUX_PIN(PIN_PD20, 3, 3)
#define PIN_PD20__I2SC0_MCK     PINMUX_PIN(PIN_PD20, 5, 2)
#define PIN_PD20__ISC_PCK       PINMUX_PIN(PIN_PD20, 6, 4)

#define PIN_PD21                    117
#define PIN_PD21__GPIO              PINMUX_PIN(PIN_PD21, 0, 0)
#define PIN_PD21__TIOB2             PINMUX_PIN(PIN_PD21, 1, 3)
#define PIN_PD21__TWD0              PINMUX_PIN(PIN_PD21, 2, 4)
#define PIN_PD21__FLEXCOM4_IO0      PINMUX_PIN(PIN_PD21, 3, 3)
#define PIN_PD21__I2SC0_WS          PINMUX_PIN(PIN_PD21, 5, 2)
#define PIN_PD21__ISC_VSYNC         PINMUX_PIN(PIN_PD21, 6, 4)

#define PIN_PD22                    118
#define PIN_PD22__GPIO              PINMUX_PIN(PIN_PD22, 0, 0)
#define PIN_PD22__TCLK2             PINMUX_PIN(PIN_PD22, 1, 3)
#define PIN_PD22__TWCK0             PINMUX_PIN(PIN_PD22, 2, 4)
#define PIN_PD22__FLEXCOM4_IO1      PINMUX_PIN(PIN_PD22, 3, 3)
#define PIN_PD22__I2SC0_DI0         PINMUX_PIN(PIN_PD22, 5, 2)
#define PIN_PD22__ISC_HSYNC         PINMUX_PIN(PIN_PD22, 6, 4)

#define PIN_PD23                    119
#define PIN_PD23__GPIO              PINMUX_PIN(PIN_PD23, 0, 0)
#define PIN_PD23__URXD2             PINMUX_PIN(PIN_PD23, 1, 2)
#define PIN_PD23__FLEXCOM4_IO2      PINMUX_PIN(PIN_PD23, 3, 3)
#define PIN_PD23__I2SC0_DO0         PINMUX_PIN(PIN_PD23, 5, 2)
#define PIN_PD23__ISC_FIELD         PINMUX_PIN(PIN_PD23, 6, 4)

#define PIN_PD24                    120
#define PIN_PD24__GPIO              PINMUX_PIN(PIN_PD24, 0, 0)
#define PIN_PD24__UTXD2             PINMUX_PIN(PIN_PD24, 1, 2)
#define PIN_PD24__FLEXCOM4_IO3      PINMUX_PIN(PIN_PD24, 3, 3)

#define PIN_PD25                    121
#define PIN_PD25__GPIO              PINMUX_PIN(PIN_PD25, 0, 0)
#define PIN_PD25__SPI1_SPCK         PINMUX_PIN(PIN_PD25, 1, 3)
#define PIN_PD25__FLEXCOM4_IO4      PINMUX_PIN(PIN_PD25, 3, 3)

#define PIN_PD26                122
#define PIN_PD26__GPIO          PINMUX_PIN(PIN_PD26, 0, 0)
#define PIN_PD26__SPI1_MOSI     PINMUX_PIN(PIN_PD26, 1, 3)
#define PIN_PD26__FLEXCOM2_IO0  PINMUX_PIN(PIN_PD26, 3, 2)

#define PIN_PD27                123
#define PIN_PD27__GPIO          PINMUX_PIN(PIN_PD27, 0, 0)
#define PIN_PD27__SPI1_MISO     PINMUX_PIN(PIN_PD27, 1, 3)
#define PIN_PD27__TCK           PINMUX_PIN(PIN_PD27, 2, 3)
#define PIN_PD27__FLEXCOM2_IO1  PINMUX_PIN(PIN_PD27, 3, 2)

#define PIN_PD28                124
#define PIN_PD28__GPIO          PINMUX_PIN(PIN_PD28, 0, 0)
#define PIN_PD28__SPI1_NPCS0    PINMUX_PIN(PIN_PD28, 1, 3)
#define PIN_PD28__TCI           PINMUX_PIN(PIN_PD28, 2, 3)
#define PIN_PD28__FLEXCOM2_IO2  PINMUX_PIN(PIN_PD28, 3, 2)

#define PIN_PD29                125
#define PIN_PD29__GPIO          PINMUX_PIN(PIN_PD29, 0, 0)
#define PIN_PD29__SPI1_NPCS1    PINMUX_PIN(PIN_PD29, 1, 3)
#define PIN_PD29__TDO           PINMUX_PIN(PIN_PD29, 2, 3)
#define PIN_PD29__FLEXCOM2_IO3  PINMUX_PIN(PIN_PD29, 3, 2)
#define PIN_PD29__TIOA3         PINMUX_PIN(PIN_PD29, 4, 3)
#define PIN_PD29__TWD0          PINMUX_PIN(PIN_PD29, 5, 3)

#define PIN_PD30                126
#define PIN_PD30__GPIO          PINMUX_PIN(PIN_PD30, 0, 0)
#define PIN_PD30__SPI1_NPCS2    PINMUX_PIN(PIN_PD30, 1, 3)
#define PIN_PD30__TMS           PINMUX_PIN(PIN_PD30, 2, 3)
#define PIN_PD30__FLEXCOM2_IO4  PINMUX_PIN(PIN_PD30, 3, 2)
#define PIN_PD30__TIOB3         PINMUX_PIN(PIN_PD30, 4, 3)
#define PIN_PD30__TWCK0         PINMUX_PIN(PIN_PD30, 5, 3)

#define PIN_PD31                127
#define PIN_PD31__GPIO          PINMUX_PIN(PIN_PD31, 0, 0)
#define PIN_PD31__ADTRG         PINMUX_PIN(PIN_PD31, 1, 1)
#define PIN_PD31__NTRST         PINMUX_PIN(PIN_PD31, 2, 3)
#define PIN_PD31__IRQ           PINMUX_PIN(PIN_PD31, 3, 4)
#define PIN_PD31__TCLK3         PINMUX_PIN(PIN_PD31, 4, 3)
#define PIN_PD31__PCK0          PINMUX_PIN(PIN_PD31, 5, 2)
