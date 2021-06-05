/* 
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

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(/* 0th Layer(Base Layer) - QWERTY */
                 KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_GRV,        KC_ESC,   KC_PSCR,   TG(1),    KC_CAPS,        KC_BSLS,  KC_6,     KC_7,     KC_8,     KC_9,     KC_0,
                 KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_LBRC,       KC_F1,    KC_F2,     KC_F3,    KC_F4,          KC_RBRC,  KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,
                 KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_TAB,        KC_F5,    KC_F6,     KC_F7,    KC_F8,          KC_QUOT,   KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,
                 KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,                    KC_F9,    KC_F10,    KC_F11,   KC_F12,                   KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH, 
                 KC_LALT,  KC_LSFT,  KC_DEL,   KC_EQL,    KC_LGUI,  KC_LCTL,      KC_HOME,  KC_UP,     KC_END,   KC_PGUP,       KC_RCTL,  KC_RGUI,   KC_MINS,  KC_BSPC,  KC_RSFT,  KC_RALT,
	                       KC_LEFT,  KC_RGHT,             KC_SPC,   KC_ENT,       KC_LEFT,  KC_DOWN,   KC_RGHT,  KC_PGDN,       KC_ENT,   KC_SPC,              KC_UP,    KC_DOWN  
				 ),
    [1] = LAYOUT(/* 1st Layer - Manually Optimized */
                 KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_GRV,        KC_ESC,   KC_PSCR,   TG(1),    KC_CAPS,        KC_BSLS,  KC_6,     KC_7,     KC_8,     KC_9,     KC_0,
                 KC_Q,     KC_H,     KC_R,     KC_F,     KC_X,     KC_LBRC,       KC_F1,    KC_F2,     KC_F3,    KC_F4,          KC_RBRC,  KC_QUOT,  KC_Y,     KC_U,     KC_O,     KC_J,
                 KC_L,     KC_S,     KC_N,     KC_T,     KC_D,     KC_TAB,       KC_F5,    KC_F6,     KC_F7,    KC_F8,           KC_SCLN,  KC_P,     KC_I,     KC_A,     KC_E,     KC_K,
                 KC_Z,     KC_M,     KC_C,     KC_V,     KC_B,                    KC_F9,    KC_F10,    KC_F11,   KC_F12,                   KC_W,     KC_G,     KC_COMM,  KC_DOT,   KC_SLSH, 
                 KC_LALT,  KC_LSFT,  KC_DEL,   KC_EQL,    KC_LGUI,  KC_LCTL,      KC_HOME,  KC_UP,     KC_END,   KC_PGUP,       KC_RCTL,  KC_RGUI,   KC_MINS,  KC_BSPC,  KC_RSFT,  KC_RALT,
	                       KC_LEFT,  KC_RGHT,             KC_SPC,   KC_ENT,       KC_LEFT,  KC_DOWN,   KC_RGHT,  KC_PGDN,       KC_ENT,   KC_SPC,              KC_UP,    KC_DOWN
                 )                                                                                        
};

