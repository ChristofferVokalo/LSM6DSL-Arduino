#ifndef VOKALO_PINS_H
#define VOKALO_PINS_H

// Version 2.0.0 last edit by MOH
// Updated for new PCB v2 (September 2023)
// Created from schematic found at: https://drive.google.com/file/d/10cc8mvwW6yT8FD-He8cLG-D2r2LE4n6z/view?usp=drive_link
#define SD_D3 4
#define MIC_SCK 5
#define MIC_SD 6
#define SD_CLK 7
#define SD_CMD 15
#define SD_D0 16
#define BTN2 17
#define BTN1 18
#define VBAT 8
#define QI_EN_ACTIVE_LOW 19
#define QI_CHG 20
#define ECHO_FDBK 9
#define CHG_STAT 10
#define IMU_INT1 11
#define LCD_RESET 12
#define HALL 13
#define LCD_SCL 14
#define LCD_SDA 21
#define IMU_AMP_RTC_SDA 47
#define LL_EN 48
#define UNUSED4 38
#define IMU_AMP_RTC_SCL 39
#define AMP_FSYNC_HV 40
#define AMP_SBCLK_HV 41
#define AMP_EN_HV 42
#define UNUSED5 2
#define AMP_SDIN_HV 1

#define SD_CS SD_D3
#define SD_MOSI SD_CMD
#define SD_MISO SD_D0

#endif 