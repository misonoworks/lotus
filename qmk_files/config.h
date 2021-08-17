/*
Copyright 2020 MisonoWorks

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

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0xC456
#define DEVICE_VER      0x0001
#define MANUFACTURER    MisonoWorks
#define PRODUCT         Lotus
#define DESCRIPTION     Split column stagger keyboard w/ hotswappable components

//#define USE_I2C
#define SOFT_SERIAL_PIN D2
#define USE_SERIAL
#define MASTER_LEFT

#define MATRIX_ROWS 8
#define MATRIX_COLS 7

//
#define MATRIX_ROW_PINS { D7, E6, B4, B5 }
#define MATRIX_COL_PINS { F5, F6, F7, B1, B3, B2, B6 }


#define DIODE_DIRECTION COL2ROW

#define FORCE_NKRO

//encoderonis
#define ENCODERS_PAD_A { D4 }
#define ENCODERS_PAD_B { C6 }

#define ENCODER_RESOLUTION 4
#define LOCKING_RESYNC_ENABLE
