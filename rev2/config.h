/*
Copyright 2017 Danny Nguyen <danny@hexwire.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

/* USB Device descriptor parameter */
#define VENDOR_ID       0xCB10
#define PRODUCT_ID      0x1157
#define DEVICE_VER      0x0200
#define MANUFACTURER    LOUIS
#define PRODUCT         LOUIS
#define DESCRIPTION     Split 5x14 ortholinear keyboard

/* key matrix size */
// Rows are doubled-up
#define MATRIX_ROWS 10
#define MATRIX_COLS 7

// wiring of each half
#define MATRIX_ROW_PINS { C6, D7, E6, B4, B5 }
#define MATRIX_COL_PINS { B6, B2, B3, B1, F7, F6, F5 }
#define MATRIX_ROW_PINS_RIGHT { B6, B3, B2, B1, F7 }
#define MATRIX_COL_PINS_RIGHT { B5, B4, E6, D7, C6, D4, D0 }
#define SOFT_SERIAL_PIN D1

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* ws2812 RGB LED */
//#define RGB_DI_PIN D3
//#define RGBLED_NUM 14

/* Backlight LEDs */
//#define BACKLIGHT_PIN B6
//#define BACKLIGHT_LEVELS 7

//#define SPLIT_USB_DETECT
#define MASTER_LEFT

#define USE_SERIAL
//#define SELECT_SOFT_SERIAL_SPEED 2



