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

#include QMK_KEYBOARD_H

enum layers {
    _DEFAULT = 0,
    _SUPER,
    _META
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [_DEFAULT] = LAYOUT(
    KC_ESC,   KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,   KC_PGUP, 			  KC_PGDN,    KC_Y,   KC_U,   KC_I,     KC_O,    KC_P,     KC_BSPACE,
		KC_TAB,   KC_A,   KC_S,   KC_D,   KC_F,   KC_G,   KC_LBRC,		  KC_RBRC,   KC_H,   KC_J,   KC_K,     KC_L,    KC_QUOT,  KC_ENTER,
		KC_LSFT,  KC_Z,   KC_X,   KC_C,   KC_V,   KC_B, 								              KC_N,   KC_M,   KC_COMM,  KC_DOT,  KC_SLSH,  KC_LSHIFT,

                              KC_LCTRL, KC_LALT, KC_SPACE, MO(_SUPER),	        MO(_META), KC_BSPACE, KC_LALT, KC_LCTRL
),

    [_SUPER] = LAYOUT(
       KC_GRAVE, KC_1, KC_2, KC_3, KC_4, KC_5, KC_PGUP, 			KC_PGDN, KC_6, KC_7, KC_8, KC_9, KC_0, KC_BSPACE,
   	  KC_MINUS, KC_EQUAL, KC_DOT, KC_D, KC_F, KC_G, KC_TRNS,		KC_TRNS, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_ENTER,
   	  KC_TRNS, KC_Z, KC_X, KC_C, KC_V, KC_B, 								 KC_N, KC_M, KC_COMMA, KC_DOT, KC_BSLS, KC_LSHIFT,
   						KC_SPACE, KC_LALT, KC_LCTRL, KC_TRNS,	        KC_TRNS,		KC_LCTRL, KC_LALT, KC_BSPACE
),

	 [_META] = LAYOUT(
        KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_PGUP, 			KC_PGDN, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12,
		  KC_TRNS, KC_TRNS, KC_UP, KC_D, KC_F, KC_G, KC_TRNS,		KC_TRNS, KC_H, KC_J, KC_K, KC_L, KC_QUOT, KC_ENTER,
	    KC_TRNS, KC_LEFT, KC_DOWN, KC_RIGHT, KC_V, KC_B, 								 KC_N, KC_M, KC_COMM, KC_DOT, KC_LBRC, KC_RBRC,
	        			    KC_SPACE, KC_LALT, KC_LCTRL, KC_TRNS,	        KC_TRNS,		KC_LCTRL, KC_LALT, KC_BSPACE
),

};

void encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) {
        if (clockwise) {
            tap_code(KC_PGUP);
        } else {
            tap_code(KC_PGDOWN);
        }
    }
    else if (index == 1) {
        if (clockwise) {
            tap_code(KC_VOLU);
        } else {
            tap_code(KC_VOLD);
        }
    }
}
