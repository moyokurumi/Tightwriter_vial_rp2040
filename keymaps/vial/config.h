/* SPDX-License-Identifier: GPL-2.0-or-later */

#pragma once
#define VIAL_KEYBOARD_UID {0x6F, 0x88, 0x6E, 0x3B, 0x01, 0xB8, 0xF8, 0xC7}
#define VIAL_UNLOCK_COMBO_ROWS {0, 0}
#define VIAL_UNLOCK_COMBO_COLS {0, 1}

 //==+====1====+====2====+====3====+====4====+====5====+====6====+====7====+====8====+====9====+====0
 // RP2040用 定義
 //==+====1====+====2====+====3====+====4====+====5====+====6====+====7====+====8====+====9====+====0
 // リセットボタンをダブルタップすることでブートローダーモードをアクティブ化する
 #define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
 // リセットボタンのダブルタップのタイムアウト（200ms）
 #define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 200U

#define VIAL_TAP_DANCE_ENTRIES 32
#define VIAL_COMBO_ENTRIES 32
#define VIAL_KEY_OVERRIDE_ENTRIES 32

/* WS2812B RGB LED */
#ifdef RGBLIGHT_ENABLE
#define WS2812_PIO_USE_PIO1 // RP2040用に追加
#endif