/*
 * Copyright (c) 2012 Samsung Electronics Co., Ltd.
 *		http://www.samsung.com
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
*/

#ifndef __MACH_GPIO_EXYNOS5410_UNIVERSAL_EVT0_H
#define __MACH_GPIO_EXYNOS5410_UNIVERSAL_EVT0_H __FILE__

#include "gpio-exynos.h"

#define	GPIO_BT_UART_RXD		EXYNOS5410_GPA0(0)
#define	GPIO_BT_UART_TXD		EXYNOS5410_GPA0(1)
#define	GPIO_BT_UART_CTS		EXYNOS5410_GPA0(2)
#define	GPIO_BT_UART_RTS		EXYNOS5410_GPA0(3)

#define	GPIO_GPS_RXD		    EXYNOS5410_GPA0(4)
#define	GPIO_GPS_RXD_AF         2
#define	GPIO_GPS_TXD		    EXYNOS5410_GPA0(5)
#define	GPIO_GPS_TXD_AF         2
#define	GPIO_GPS_CTS		    EXYNOS5410_GPA0(6)
#define	GPIO_GPS_CTS_AF         2
#define	GPIO_GPS_RTS		    EXYNOS5410_GPA0(7)
#define	GPIO_GPS_RTS_AF         2

#define	GPIO_AP_RXD			EXYNOS5410_GPA1(0)
#define	GPIO_AP_TXD			EXYNOS5410_GPA1(1)
#define	GPIO_NFC_SDA_18V		EXYNOS5410_GPA1(2)
#define	GPIO_NFC_SCL_18V		EXYNOS5410_GPA1(3)
#define	GPIO_CODEC_SDA_18V		EXYNOS5410_GPA2(0)
#define	GPIO_CODEC_SCL_18V		EXYNOS5410_GPA2(1)

#define	GPIO_REC_PCM_CLK		EXYNOS5410_GPB0(0)
#define	GPIO_REC_PCM_SYNC		EXYNOS5410_GPB0(2)
#define	GPIO_REC_PCM_IN			EXYNOS5410_GPB0(3)
#define	GPIO_REC_PCM_OUT		EXYNOS5410_GPB0(4)
#define	GPIO_MHL_DSDA_18V		EXYNOS5410_GPB1(3)
#define	GPIO_MHL_DSCL_18V		EXYNOS5410_GPB1(4)
#define	GPIO_VIBTONE_PWM		EXYNOS5410_GPB2(0)
#define	GPIO_AP_PMIC_SDA		EXYNOS5410_GPB2(2)
#define	GPIO_AP_PMIC_SCL		EXYNOS5410_GPB2(3)

#define	GPIO_TSP_SDA_18V		EXYNOS5410_GPB3(0)
#define	GPIO_TSP_SCL_18V		EXYNOS5410_GPB3(1)
#define	GPIO_STSP_SDA_18V		EXYNOS5410_GPB3(2)
#define	GPIO_STSP_SCL_18V		EXYNOS5410_GPB3(3)
#define	GPIO_NAND_CLK			EXYNOS5410_GPC0(0)
#define	GPIO_NAND_CMD			EXYNOS5410_GPC0(1)
#define	GPIO_eMMC_EN			EXYNOS5410_GPC0(2)
#define	GPIO_NAND_D0			EXYNOS5410_GPC0(3)
#define	GPIO_NAND_D1			EXYNOS5410_GPC0(4)
#define	GPIO_NAND_D2			EXYNOS5410_GPC0(5)
#define	GPIO_NAND_D3			EXYNOS5410_GPC0(6)
#define	GPIO_NAND_D4			EXYNOS5410_GPC3(0)
#define	GPIO_NAND_D5			EXYNOS5410_GPC3(1)
#define	GPIO_NAND_D6			EXYNOS5410_GPC3(2)
#define	GPIO_NAND_D7			EXYNOS5410_GPC3(3)
#define	GPIO_WLAN_SDIO_CLK		EXYNOS5410_GPC1(0)
#define	GPIO_WLAN_SDIO_CLK_AF	2
#define	GPIO_WLAN_SDIO_CMD		EXYNOS5410_GPC1(1)
#define	GPIO_WLAN_SDIO_CMD_AF	2
#define	GPIO_WLAN_SDIO_D0		EXYNOS5410_GPC1(3)
#define	GPIO_WLAN_SDIO_D0_AF	2
#define	GPIO_WLAN_SDIO_D1		EXYNOS5410_GPC1(4)
#define	GPIO_WLAN_SDIO_D1_AF	2
#define	GPIO_WLAN_SDIO_D2		EXYNOS5410_GPC1(5)
#define	GPIO_WLAN_SDIO_D2_AF	2
#define	GPIO_WLAN_SDIO_D3		EXYNOS5410_GPC1(6)
#define	GPIO_WLAN_SDIO_D3_AF	2
#define	GPIO_T_FLASH_CLK		EXYNOS5410_GPC2(0)
#define	GPIO_T_FLASH_CMD		EXYNOS5410_GPC2(1)
#define	GPIO_T_FLASH_D0			EXYNOS5410_GPC2(3)
#define	GPIO_T_FLASH_D1			EXYNOS5410_GPC2(4)
#define	GPIO_T_FLASH_D2			EXYNOS5410_GPC2(5)
#define	GPIO_T_FLASH_D3			EXYNOS5410_GPC2(6)

#define	GPIO_CAM_FLASH_EN		EXYNOS5410_GPE0(0)
#define	GPIO_CAM_FLASH_SET		EXYNOS5410_GPE0(1)
#define	GPIO_CAM_IO_EN			EXYNOS5410_GPE0(2)
#define	GPIO_CAM_AF_EN			EXYNOS5410_GPE0(3)
#define	GPIO_CAM_VT_nRST		EXYNOS5410_GPE0(4)
#define	GPIO_MAIN_CAM_RESET		EXYNOS5410_GPE0(5)
#define	GPIO_HW_REV0			EXYNOS5410_GPE0(6)
#define	GPIO_HW_REV1			EXYNOS5410_GPE0(7)
#define	GPIO_HW_REV2			EXYNOS5410_GPE1(0)
#define	GPIO_HW_REV3			EXYNOS5410_GPE1(1)

#define	GPIO_MAIN_CAM_SDA_18V		EXYNOS5410_GPF0(0)
#define	GPIO_MAIN_CAM_SCL_18V		EXYNOS5410_GPF0(1)
#define	GPIO_AF_SDA			EXYNOS5410_GPF0(2)
#define	GPIO_AF_SCL			EXYNOS5410_GPF0(3)
#define	GPIO_VT_CAM_SDA_18V		EXYNOS5410_GPF0(4)
#define	GPIO_VT_CAM_SCL_18V		EXYNOS5410_GPF0(5)
#define	GPIO_CAM_SPI_SCLK		EXYNOS5410_GPF1(0)
#define	GPIO_CAM_SPI_SSN		EXYNOS5410_GPF1(1)
#define	GPIO_CAM_SPI_MISP		EXYNOS5410_GPF1(2)
#define	GPIO_CAM_SPI_MOSI		EXYNOS5410_GPF1(3)
#define	GPIO_LDO3_EN			EXYNOS5410_GPF1(4)
#define	GPIO_MMC2_EN			EXYNOS5410_GPF1(5)
#define	GPIO_MIPI_18V_EN		EXYNOS5410_GPF1(6)
/* #define	GPIO_ERR_FG		EXYNOS5410_GPF1(7) */

#define	GPIO_SLCD_RST			EXYNOS5410_GPG0(1)
#define	GPIO_SLCD_22V_EN		EXYNOS5410_GPG0(2)
#define	GPIO_OLED_ID_S			EXYNOS5410_GPG0(3)
#define	GPIO_STSP_nINT			EXYNOS5410_GPG0(4)
#define	GPIO_SOLED_DET			EXYNOS5410_GPG0(5)
#define	GPIO_OLED_ID			EXYNOS5410_GPG0(6)

#define	GPIO_IPC_SLAVE_WAKEUP		EXYNOS5410_GPG1(0)
#define	GPIO_SUSPEND_REQUEST		EXYNOS5410_GPG1(3)
#define	GPIO_PHONE_ON			EXYNOS5410_GPG1(4)
#define	GPIO_AP_DUMP_INT		EXYNOS5410_GPG1(6)

#define	GPIO_2_TOUCH_INT		EXYNOS5410_GPH1(3)

#define	GPIO_CAM_MCLK			EXYNOS5410_GPM7(5)
#define	GPIO_VT_CAM_MCLK		EXYNOS5410_GPM7(7)

#define	GPIO_TF_EN			EXYNOS5410_GPY2(0)

#define	GPIO_RGB_INT			EXYNOS5410_GPX0(0)
#define	GPIO_HALL_SENSOR_INT	EXYNOS5410_GPX0(1)
#define	GPIO_VOL_UP			EXYNOS5410_GPX0(2)
#define	GPIO_VOL_DOWN			EXYNOS5410_GPX0(3)
#define	GPIO_ACC_INT			EXYNOS5410_GPX0(4)
#define	GPIO_OK_KEY			EXYNOS5410_GPX0(5)

#define	GPIO_GPS_HOST_WAKE		EXYNOS5410_GPX0(6)
#define	GPIO_GPS_HOST_WAKE_AF	0xF

#define	GPIO_AP_PMIC_IRQ		EXYNOS5410_GPX0(7)

#define	GPIO_CP_PMU_RST			EXYNOS5410_GPX1(1)
#define	GPIO_IPC_HOST_WAKEUP		EXYNOS5410_GPX1(2)
#define	GPIO_IF_PMIC_IRQ		EXYNOS5410_GPX1(4)
#define	GPIO_HSPA_ACTIVE		EXYNOS5410_GPX1(5)
#define	GPIO_NFC_IRQ			EXYNOS5410_GPX1(3)
#define	GPIO_FUEL_ALERT			EXYNOS5410_GPX1(7)
#define	GPIO_WLAN_HOST_WAKE		EXYNOS5410_GPX2(0)
#define	GPIO_WLAN_HOST_WAKE_AF	0xF
#define	GPIO_BT_HOST_WAKE		EXYNOS5410_GPX2(1)
#define	GPIO_nPOWER			EXYNOS5410_GPX2(2)
#define	GPIO_WPC_INT			EXYNOS5410_GPX2(3)
#define	GPIO_T_FLASH_DETECT		EXYNOS5410_GPX2(4)
#define	GPIO_EAR_SEND_END		EXYNOS5410_GPX2(5)
#define	GPIO_CP_DUMP_INT		EXYNOS5410_GPX2(6)
#define	GPIO_PHONE_ACTIVE		EXYNOS5410_GPX2(7)

#define	GPIO_AP_MCU_INT			EXYNOS5410_GPX3(0)
#define	GPIO_MCU_AP_INT			EXYNOS5410_GPX3(3)
#define	GPIO_MCU_AP_INT_2		EXYNOS5410_GPX3(4)
#define	GPIO_HDMI_HPD			EXYNOS5410_GPX3(7)

#define	GPIO_MM_I2S_CLK			EXYNOS5410_GPZ(0)
#define	GPIO_MM_I2S_SYNC		EXYNOS5410_GPZ(2)
#define	GPIO_MM_I2S_DI			EXYNOS5410_GPZ(3)
#define	GPIO_MM_I2S_DO			EXYNOS5410_GPZ(4)

#define	GPIO_TSP_nINT			EXYNOS5410_GPJ0(0)
#define	GPIO_MHL_INT			EXYNOS5410_GPJ1(7)
#define	GPIO_MHL_RST			EXYNOS5410_GPJ0(2)
/*
#define	GPIO_GYRO_INT			EXYNOS5410_GPJ0(3)
*/
#if defined(CONFIG_LCD_MIPI_AMS480GYXX)
#define	GPIO_OLED_DET			EXYNOS5410_GPJ0(4)
#elif defined(CONFIG_LCD_MIPI_S6E8FA0)
#define	LED_DRIVER_EN			EXYNOS5410_GPJ0(4)
#endif
#define	GPIO_MLCD_RST			EXYNOS5410_GPJ1(0)
#define	GPIO_SUB_MICBIAS_EN		EXYNOS5410_GPJ1(1)
#define	GPIO_MICBIAS_EN			EXYNOS5410_GPJ1(2)
#define	GPIO_PDA_ACTIVE			EXYNOS5410_GPJ1(3)
#define	GPIO_ACTIVE_STATE_HSIC		EXYNOS5410_GPJ1(4)
#define	GPIO_CODEC_LDO_EN		EXYNOS5410_GPJ1(5)
/*
#define	GPIO_BARO_INT			EXYNOS5410_GPJ1(6)
*/
#define	GPIO_LCD_22V_EN			EXYNOS5410_GPJ2(0)
#define	GPIO_WLAN_EN			EXYNOS5410_GPJ2(2)
#define	GPIO_WLAN_EN_AF			1
#define	GPIO_LCD_TE				EXYNOS5410_GPJ2(3)
#define	GPIO_MHL_WAKE_UP		EXYNOS5410_GPJ2(4)
#define	GPIO_BT_EN			EXYNOS5410_GPJ2(5)
#define	GPIO_MCU_CHG			EXYNOS5410_GPJ2(6)
#define	GPIO_NFC_FIRMWARE		EXYNOS5410_GPJ2(7)
#define	GPIO_NFC_EN			EXYNOS5410_GPJ3(0)
#define	GPIO_ACTIVE_STATE		EXYNOS5410_GPJ3(2)

#define	GPIO_GPS_PWR_EN			    EXYNOS5410_GPX1(0)

#define	GPIO_MCU_NRST			EXYNOS5410_GPJ3(4)
#define	GPIO_BT_WAKE			EXYNOS5410_GPJ3(6)
#define	GPIO_RESET_REQ_N		EXYNOS5410_GPJ4(0)
/*
#define	GPIO_MSENSE_SCL_18V		EXYNOS5410_GPK0(0)
#define	GPIO_MSENSE_SDA_18V		EXYNOS5410_GPK0(1)
*/
#define	GPIO_S_LED_I2C_SCL		EXYNOS5410_GPK0(2)
#define	GPIO_S_LED_I2C_SDA		EXYNOS5410_GPK0(3)
#define	GPIO_CORE_MODE			EXYNOS5410_GPK0(4)
#define	GPIO_2_TOUCH_SCL_18V		EXYNOS5410_GPK0(6)
#define	GPIO_2_TOUCH_SDA_18V		EXYNOS5410_GPK0(7)
/*
#define	GPIO_BSENSE_SCL_18V		EXYNOS5410_GPK1(0)
#define	GPIO_BSENSE_SDA_18V		EXYNOS5410_GPK1(1)
#define	GPIO_RGB_SCL_18V		EXYNOS5410_GPK1(2)
#define	GPIO_RGB_SDA_18V		EXYNOS5410_GPK1(3)
*/
#define	GPIO_FUEL_SCL_18V		EXYNOS5410_GPK1(4)
#define	GPIO_FUEL_SDA_18V		EXYNOS5410_GPK1(5)
#define	GPIO_MHL_SCL_18V		EXYNOS5410_GPK1(6)
#define	GPIO_MHL_SDA_18V		EXYNOS5410_GPK1(7)
/*GPIO changed rev06*/
#define	GPIO_MHL_SCL_18V_06		EXYNOS5410_GPK3(4)
#define	GPIO_MHL_SDA_18V_06		EXYNOS5410_GPK3(5)
#define	GPIO_IF_PMIC_SCL		EXYNOS5410_GPK2(0)
#define	GPIO_IF_PMIC_SDA		EXYNOS5410_GPK2(1)
#define	GPIO_FM_SCL_18V			EXYNOS5410_GPK2(2)
#define	GPIO_FM_SDA_18V			EXYNOS5410_GPK2(3)

#define	GPIO_AP_JTAG_NTRST		EXYNOS5410_ETC0(0)
#define	GPIO_AP_JTAG_TMS		EXYNOS5410_ETC0(1)
#define	GPIO_AP_JTAG_TCK		EXYNOS5410_ETC0(2)
#define	GPIO_AP_JTAG_DI			EXYNOS5410_ETC0(3)
#define	GPIO_AP_JTAG_DO			EXYNOS5410_ETC0(4)

/* editing for barcode_emul and ir led */
#if defined(CONFIG_IR_REMOCON_MC96) || defined(CONFIG_IR_REMOCON_FPGA)
#define GPIO_IRDA_IRQ			EXYNOS5410_GPK1(1)
#endif
#if defined(CONFIG_IR_REMOCON_MC96)
#define GPIO_IRDA_WAKE			EXYNOS5410_GPK1(0)
#define GPIO_IRDA_SCL			EXYNOS5410_GPK1(2)
#define GPIO_IRDA_SDA			EXYNOS5410_GPK1(3)
#endif

#if defined(CONFIG_REGULATOR_MAX77802)
#define GPIO_BUCK1_SEL			EXYNOS5410_GPY7(0)
#define GPIO_BUCK2_SEL			EXYNOS5410_GPY7(1)
#define GPIO_BUCK3_SEL			EXYNOS5410_GPY7(2)
#define GPIO_BUCK4_SEL			EXYNOS5410_GPY7(3)
#define GPIO_BUCK6_SEL			EXYNOS5410_GPY7(4)
#define GPIO_PMIC_DVS1			EXYNOS5410_GPY7(5)
#define GPIO_PMIC_DVS2			EXYNOS5410_GPY7(6)
#define GPIO_PMIC_DVS3			EXYNOS5410_GPY7(7)
#endif

/*BARCODE_EMUL*/
#if defined(CONFIG_ICE4_FPGA)
#define GPIO_BARCODE_SCL_1_8V		EXYNOS5410_GPK0(0)
#define GPIO_BARCODE_SDA_1_8V		EXYNOS5410_GPK0(1)

#define GPIO_FPGA_CRESET_B              EXYNOS5410_GPJ0(3)
#define GPIO_FPGA_CDONE                 EXYNOS5410_GPJ1(6)
#define GPIO_FPGA_RST_N                 EXYNOS5410_GPK0(5)
#define GPIO_FPGA_SPI_CLK               EXYNOS5410_GPM7(4)
#define GPIO_FPGA_SPI_EN                EXYNOS5410_GPM7(6)
#define GPIO_FPGA_SPI_SI                EXYNOS5410_GPB1(0)
#endif

/* __MACH_GPIO_EXYNOS5410_UNIVERSAL_EVT0_H */
#endif