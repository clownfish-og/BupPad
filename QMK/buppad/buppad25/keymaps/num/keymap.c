/* Copyright 2024 ClownFish (@clownfish-og)
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include QMK_KEYBOARD_H
#include "buppad_common.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        TO(1),    CHEESE,   EYE,      GLUTES,   DUCKDANCE,
        DISCO,    DIDDY,    CATDANCE, SLAY,     BEARDDANCE,
        PATBANG,  FREAKOUT, DRUMS,    FROG,     KEKW,
        BACKDOOR, LOVE,     THANKS,   ZEJIBO,   BUG,
        BITS,     MOOSE,    BUP,      CAPGEN5,  KC_ENT
    ),
    [1] = LAYOUT(
        TO(0),    TO(5),    TO(2),    TO(3),    TO(4),
        THING,    DONUT,    DYE,      SMIRK,    REVERSE,
        RUMP,     ACID,     CLOUDS,   WATER,    WINK,
        BALLOON,  HEART,    ASCEND,   JELLY,    PLUG,
        RAVE,     CROWN,    TIEDYE,   DRAGON,   KC_ENT
    ),
    [2] = LAYOUT(
        TO(0),    TO(1),    TO(5),    TO(3),    TO(4),
        DUCKHEAD, WIZ,      CHEFKISS, TINFOIL,  BIGBRAIN,
        CALL,     DOIT,     GROGU,    JAWNESSA, BART,
        BUPS,     BROC,     BUPWAD,   SPOOKY,   ZELDABUP,
        AYO,      ID,       SH,       EE,       KC_ENT
    ),
    [3] = LAYOUT(
        TO(0),    TO(1),    TO(2),    TO(5),    TO(4),
        BASSFACE, BOB,      SABER,    UWU,      UP,
        NOD,      GOOSE,    BOOMER,   WUB,      WOOK,
        HEADOUT,  RAINBOW,  SALUTE,   SWEATY,   HORN,
        FLUTE,    FIRE,     CHEERS,   KEYS,     KC_ENT
    ), 
    [4] = LAYOUT(
        TO(0),    TO(1),    TO(2),    TO(3),    TO(5),
        KC_NUM,   KC_P7,    KC_P8,    KC_P9,    KC_PMNS,
        KC_PSLS,  KC_P4,    KC_P5,    KC_P6,    KC_PPLS,
        KC_PAST,  KC_P1,    KC_P2,    KC_P3,    KC_EQL,
        WAVE,     LIGHTER,  KC_P0,    KC_PDOT,  KC_ENT
    ),
    [5] = LAYOUT(
        TO(0),    TO(1),    TO(2),    TO(3),    TO(4),
        RGB_MOD,  RGB_VAI,  RGB_HUI,  RGB_SAI,  RGB_SPI,
        RGB_RMOD, RGB_VAD,  RGB_HUD,  RGB_SAD,  RGB_SPD,
        KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,
        RGB_M_P,  RGB_M_B,  RGB_M_R,  RGB_M_SW, RGB_TOG
    ),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if(!process_record_bup(keycode, record)) {
        return false;
    }

    return true;
}