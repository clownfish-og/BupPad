/*
Copyright 2023
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
#include "buppad_common.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = LAYOUT(
        BACKDOOR,    MOOSE,       PATBANG,
        BITS,     LT(1, GLUTES),  FREAKOUT,
        BUP,         CAPGEN5,     KC_ENT
    ),
    [1] = LAYOUT(
        TO(2),       SLAY,        DYE,
        ZEJIBO,      _______,     DONUT,
        CATDANCE,    LOVE,        THANKS
    ),
    [2] = LAYOUT(
        TO(0),       TO(3),      TO(5),
        _______,     _______,    _______,
        _______,     _______,    _______
    ),
    [3] = LAYOUT(
        TO(0),       TO(4),      TO(5),
        _______,     _______,    _______,
        _______,     _______,    _______
    ),
    [4] = LAYOUT(
        TO(0),       _______,    TO(5),
        _______,     _______,    _______,
        _______,     _______,    _______
    ),
    [5] = LAYOUT(
        TO(0),       KC_SHFT,    _______,
        RGB_HUI,     RGB_SAI,    RGB_SPI,
        RGB_MOD,     RGB_VAI,    RGB_TOG
    ),
};
