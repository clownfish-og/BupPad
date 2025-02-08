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
#include <ctype.h>
#include "keymap.h"


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        TO(1),      CHEESE,     AMNESIA,    GROOVY,     DUCKDANCE,
        DISCO,      DIDDY,      CATDANCE,   SLAY,       BEARDDANCE,
        PATBANG,    FREAKOUT,   DRUMS,      FROG,       KEKW,
        BACKDOOR,   LOVE,       THANKS,     ZEJIBO,     BUG,
        BITS,       MOOSE,      BUP,        CAPGEN5,    KC_ENT
    ),
    [1] = LAYOUT(
        TO(0),      TO(5),      TO(2),      TO(3),      TO(4),
        WATER,      DONUT,      DYE,        SMIRK,      EXCUSEME,
        RUMP,       TINFOIL,    CLOUDS,     SALT,       WINK,
        BALLOON,    HEART,      ASCEND,     JELLY,      PLUG,
        RAVE,       CROWN,      TIEDYE,     DRAGON,     SUS
    ),
    [2] = LAYOUT(
        TO(0),      TO(1),      TO(5),      TO(3),      TO(4),
        DUCKHEAD,   WIZ,        CHEFKISS,   MAPLE,      BIGBRAIN,
        CALL,       DOIT,       GROGU,      JAWNESSA,   BART,
        BUPS,       BROC,       BUPWAD,     LUIGIBUP,   ZELDABUP,
        AYO,        TUNE,       SH,         EE,         ID
    ),
    [3] = LAYOUT(
        TO(0),      TO(1),      TO(2),      TO(5),      TO(4),
        BASSSFACE,   BOB,        LIGHTER,    UWU,        UP,
        NOD,        GOOSE,      BOOMER,     WUB,        WOOK,
        HEADOUT,    RAINBOW,    SALUTE,     SWEATY,     HORN,
        FLUTE,      FIRE,       CHEERS,     KEYS,       CHILLGUY
    ),
    [4] = LAYOUT(
        TO(0),      TO(1),      TO(2),      TO(3),      TO(5),
        BDANCE,     BMINGO,     BMONKEY,    BPUG,       BUGH,
        KGLUTES,    KHI,        KHUG,       KLEI,       KLOVE,
        KCLAP,      KGATO,      KGGS,       KRDNC,      KSMUG,
        BOPBOP,     DINODANCE,  UNITY,      KAPPA,      TOMBRAID
    ),
    [5] = LAYOUT(
        TO(0),      TO(1),      TO(2),      TO(3),      TO(4),
        UG_NEXT,    UG_VALU,    UG_HUEU,    UG_SATU,    UG_SPDU,
        UG_PREV,    UG_VALD,    UG_HUED,    UG_SATD,    UG_SPDD,
        KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,
        TT(6),      RMAM,       RMPL,       RMSW,       UG_TOGG
    ),
    [6] = LAYOUT(
        TO(0),      KC_NUM,     KC_PSLS,    KC_PAST,    KC_BSPC,
        KC_NO,      KC_P7,      KC_P8,      KC_P9,      KC_PMNS,
        KC_NO,      KC_P4,      KC_P5,      KC_P6,      KC_PPLS,
        KC_NO,      KC_P1,      KC_P2,      KC_P3,      KC_NO,
        _______,    KC_P0,      KC_P0,      KC_PDOT,    KC_PENT
    ),
};

    const char *suffix[] = {
    "Amnesia",
    "Ayo",
    "BackDoor",
    "Balloon",
    "Bart",
    "BEARDDANCE",
    "BigBrain",
    "BITS",
    "BOOMER",
    "Bug",
    "BUP",
    "BUPS",
    "BUPWAD",
    "Call",
    "CATDANCE",
    "CHEERS",
    "Cheese",
    "Chefkiss",
    "Crown",
    "Diddy",
    "Disco",
    "DOIT",
    "Donut",
    "Drums",
    "DUCKDANCE",
    "Duckhead",
    "Dye",
    "EE",
    "Fire",
    "FLUTE",
    "Freakout",
    "FROG",
    "Grogu",
    "Groovy",
    "HEADOUT",
    "HORN",
    "ID",
    "Kekw",
    "KEYS",
    "Lighter",
    "LOVE",
    "LUIGIBUP",
    "MOOSE",
    "PATBANG",
    "Plug",
    "Salute",
    "Sh",
    "Slay",
    "Sweaty",
    "THANKS",
    "WOOK",
    "WUB",
    "Zejibo",
    "ZELDABUP",
    "Broc",
    "Clouds",
    "Goose",
    "Heart",
    "JAWNESSA",
    "Rave",
    "Salt",
    "TINFOIL",
    "Water",
    "Wiz",
    "BASSSFACE",
    "BOB",
    "Chillguy",
    "Dragon",
    "Jelly",
    "Maple",
    "Rump",
    "Smirk",
    "UWU",
    "Wink",
    "AbDUCKtion",
    "Ascend",
    "ASHDUCKEM",
    "EXCUSEME",
    "FANCYDUCK",
    "Gold",
    "HEADPHONES",
    "KTULUEHUG",
    "RAINBOW",
    "Smug",
    "Sus",
    "Nod",
    "TIEDYE",
    "TUNE",
    "Up",
    "WAVE",
    "BOP",
    "BopBop",
    "DinoDance",
    "GlitchLit",
    "GoatEmotey",
    "GoldPLZ",
    "Kappa",
    "Kreygasm",
    "ModLove",
    "NotLikeThis",
    "PowerUpL",
    "PowerUpR",
    "SingsMic",
    "SingsNote",
    "StinkyCheese",
    "TombRaid",
    "TwitchConHYPE",
    "TwitchLit",
    "twitchRaid",
    "TwitchUnity",
    "VoteNay",
    "VoteYea",
    "Dance",
    "Mingo",
    "Monkey",
    "Pug",
    "Ugh",
    "Clap",
    "Gato",
    "GGs",
    "GLUTES",
    "HI",
    "HUG",
    "Lei",
    "Love",
    "Rdnc",
    "SMUG"
};

const int start_bup = AMNESIA;
const int end_bup = WAVE;
const int start_bex = BDANCE;
const int end_bex = BUGH;
const int start_ktlu = KCLAP;
const int end_ktlu = KSMUG;

const char bup_p[] = "bup";
const char bex_p[] = "bexfro";
const char ktlu_p[] = "ktulue";

// This function inverts the capitalization of each character in the given string.
void invert_caps(char *str) {
    while (*str) {
        if (islower(*str)) {
            *str = toupper(*str);
        } else if (isupper(*str)) {
            *str = tolower(*str);
        }
        str++;
    }
}

// Helper function to concatenate prefix and suffix
void build_emote(char *emote_buffer, const char *prefix, const char *suffix_buffer, size_t buffer_size) {
    bool caps = host_keyboard_led_state().caps_lock;
    strncpy(emote_buffer, prefix, buffer_size);
uprintf("Prefix: %s\n", emote_buffer);  // Debug output
    strncat(emote_buffer, suffix_buffer, buffer_size - strlen(emote_buffer) - 1);
uprintf("Emote: %s, Caps state: %d, ", emote_buffer, caps);  // Debug output
    strncat(emote_buffer, " ", buffer_size - strlen(emote_buffer) - strlen(suffix_buffer) - 1);
        if (caps) {
            invert_caps(emote_buffer);
        }
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (record->event.pressed) {
        switch (keycode) {
            case FIRST_EMOTE ... LAST_EMOTE: {
                uint8_t i = keycode - FIRST_EMOTE;
                char suffix_buffer[24];
                char emote_buffer[36];
                suffix_buffer[0] = '\0';
                emote_buffer[0] = '\0';
                strncpy(suffix_buffer, suffix[i], sizeof(suffix_buffer) - 1);
uprintf("Suffix array index i: %d, Suffix: %s, ", i, suffix_buffer);  // Debug output

                if (start_bup <= keycode && keycode <= end_bup) {
                    build_emote(emote_buffer, bup_p, suffix_buffer, sizeof(emote_buffer));
                } else if (start_bex <= keycode && keycode <= end_bex) {
                    build_emote(emote_buffer, bex_p, suffix_buffer, sizeof(emote_buffer));
                } else if (start_ktlu <= keycode && keycode <= end_ktlu) {
                    build_emote(emote_buffer, ktlu_p, suffix_buffer, sizeof(emote_buffer));
                } else {
                    strncpy(emote_buffer, suffix_buffer, sizeof(emote_buffer));
                }
uprintf("Keycode: %u, Output: %s\n", keycode, emote_buffer);  // Debug output

                send_string(emote_buffer);
                return false;
            }
        }
    }
    return true;
}

#ifndef MAGIC_ENABLE
uint8_t mod_config(uint8_t mod) {
    return mod;
}
uint16_t keycode_config(uint16_t keycode) {
    return keycode;
}
#endif
