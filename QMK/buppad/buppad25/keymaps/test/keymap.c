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
#include "keymap.h"
#include <ctype.h>
#include <stdlib.h>

#include "quantum.h"
keycode_string_compressed_t keycode_strings[] = {
    {AMNESIA, "Amnesia"},
    {AYO, "Ayo"},
    {BACKDOOR, "BackDoor"},
    {BALLOON, "Balloon"},
    {BART, "Bart"},
    {BEARDDANCE, "BEARDDANCE"},
    {BIGBRAIN, "BigBrain"},
    {BITS, "BITS"},
    {BOOMER, "BOOMER"},
    {BUG, "Bug"},
    {BUP, "BUP"},
    {BUPS, "BUPS"},
    {BUPWAD, "BUPWAD"},
    {CALL, "Call"},
    {CATDANCE, "CATDANCE"},
    {CHEERS, "CHEERS"},
    {CHEESE, "Cheese"},
    {CHEFKISS, "Chefkiss"},
    {CROWN, "Crown"},
    {DIDDY, "Diddy"},
    {DISCO, "Disco"},
    {DOIT, "DOIT"},
    {DONUT, "Donut"},
    {DRUMS, "Drums"},
    {DUCKDANCE, "DUCKDANCE"},
    {DUCKHEAD, "Duckhead"},
    {DYE, "Dye"},
    {EE, "EE"},
    {FIRE, "Fire"},
    {FLUTE, "FLUTE"},
    {FREAKOUT, "Freakout"},
    {FROG, "FROG"},
    {GROGU, "Grogu"},
    {GROOVY, "Groovy"},
    {HEADOUT, "HEADOUT"},
    {HORN, "HORN"},
    {ID, "ID"},
    {KEKW, "Kekw"},
    {KEYS, "KEYS"},
    {LIGHTER, "Lighter"},
    {LOVE, "LOVE"},
    {LUIGIBUP, "LUIGIBUP"},
    {MOOSE, "MOOSE"},
    {PATBANG, "PATBANG"},
    {PLUG, "Plug"},
    {SALUTE, "Salute"},
    {SH, "Sh"},
    {SLAY, "Slay"},
    {SWEATY, "Sweaty"},
    {THANKS, "THANKS"},
    {WOOK, "WOOK"},
    {WUB, "WUB"},
    {ZEJIBO, "Zejibo"},
    {ZELDABUP, "ZELDABUP"},
    {BROC, "Broc"},
    {CLOUDS, "Clouds"},
    {GOOSE, "Goose"},
    {HEART, "Heart"},
    {JAWNESSA, "JAWNESSA"},
    {RAVE, "Rave"},
    {SALT, "Salt"},
    {TINFOIL, "TINFOIL"},
    {WATER, "Water"},
    {WIZ, "Wiz"},
    {BASSFACE, "BASSSFACE"},
    {BOB, "BOB"},
    {CHILLGUY, "Chillguy"},
    {DRAGON, "Dragon"},
    {JELLY, "Jelly"},
    {MAPLE, "Maple"},
    {RUMP, "Rump"},
    {SMIRK, "Smirk"},
    {UWU, "UWU"},
    {WINK, "Wink"},
    {ABDUCKTION, "AbDUCKtion"},
    {ASCEND, "Ascend"},
    {ASHDUCKEM, "ASHDUCKEM"},
    {EXCUSEME, "EXCUSEME"},
    {FANCYDUCK, "FANCYDUCK"},
    {GOLD, "Gold"},
    {HEADPHONES, "HEADPHONES"},
    {KTULUEHUG, "KTULUEHUG"},
    {RAINBOW, "RAINBOW"},
    {SMUG, "Smug"},
    {SUS, "Sus"},
    {NOD, "Nod"},
    {TIEDYE, "TIEDYE"},
    {TUNE, "TUNE"},
    {UP, "Up"},
    {WAVE, "WAVE"},
    {BOP, "BOP"},
    {BOPBOP, "BopBop"},
    {DINODANCE, "DinoDance"},
    {GLITCHLIT, "GlitchLit"},
    {GOATEMOTEY, "GoatEmotey"},
    {GOLDPLZ, "GoldPLZ"},
    {KAPPA, "Kappa"},
    {KREYGASM, "Kreygasm"},
    {MODLOVE, "ModLove"},
    {NOTLIKETHIS, "NotLikeThis"},
    {POWERUPL, "PowerUpL"},
    {POWERUPR, "PowerUpR"},
    {SINGSMIC, "SingsMic"},
    {SINGSNOTE, "SingsNote"},
    {STINKYCHEESE, "StinkyCheese"},
    {TOMBRAID, "TombRaid"},
    {TWITCHCONHYPE, "TwitchConHYPE"},
    {TWITCHLIT, "TwitchLit"},
    {TWITCHRAID, "twitchRaid"},
    {UNITY, "TwitchUnity"},
    {VOTENAY, "VoteNay"},
    {VOTEYEA, "VoteYea"},
    {BDANCE, "Dance"},
    {BMINGO, "Mingo"},
    {BMONKEY, "Monkey"},
    {BPUG, "Pug"},
    {BUGH, "Ugh"},
    {KCLAP, "Clap"},
    {KGATO, "Gato"},
    {KGGS, "GGs"},
    {KGLUTES, "GLUTES"},
    {KHI, "HI"},
    {KHUG, "HUG"},
    {KLEI, "Lei"},
    {KLOVE, "Love"},
    {KRDNC, "Rdnc"},
    {KSMUG, "SMUG"}
};

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

bool process_record_bup(uint16_t keycode, keyrecord_t *record) {
    if (record->event.pressed) {
        switch (keycode) {
            case CAPGEN5:
                SEND_STRING(SS_LCTL("acvvvvv"));
                return false;
            case CAPGEN8:
                SEND_STRING(SS_LCTL("acvvvvvvvv"));
                return false;
            case CAPGEN10:
                SEND_STRING(SS_LCTL("acvvvvvvvvvv"));
                return false;
            case FIRST_EMOTE_KEYCODE ... LAST_EMOTE_KEYCODE: {
                bool caps = host_keyboard_led_state().caps_lock;
                size_t keycode_strings_count = sizeof(keycode_strings) / sizeof(keycode_strings[0]);

                char emote_buffer[MAX_EMOTE_LEN];

                for (size_t i = 0; i < keycode_strings_count; i++) {
                    if (keycode == keycode_strings[i].keycode) {

                        if (keycode >= FIRST_EMOTE_KEYCODE && keycode <= LAST_BUP_KEYCODE) {  // Most keycodes use the bup prefix
                            snprintf(emote_buffer, sizeof(emote_buffer), "%s%s", BUP_PREFIX, keycode_strings[i].suffix);  // Construct full string with prefix
                        }else if (keycode >= FIRST_BEX_KEYCODE && keycode <= LAST_BEX_KEYCODE) {   // Handle Bex keycodes
                            snprintf(emote_buffer, sizeof(emote_buffer), "%s%s", BEX_PREFIX, keycode_strings[i].suffix);
                        }else if (keycode >= FIRST_KTLU_KEYCODE && keycode <= LAST_KTLU_KEYCODE) {  // Handle Ktulue keycodes
                            snprintf(emote_buffer, sizeof(emote_buffer), "%s%s", KTLU_PREFIX, keycode_strings[i].suffix);
                        } else {
                            strlcpy(emote_buffer, keycode_strings[i].suffix, sizeof(emote_buffer));  // Non-prefixed keycodes
                        }
                        if (caps) {
                            invert_caps(emote_buffer);
                        }

                        // Send the emote and always append a space
                        send_string(emote_buffer);
                        send_string(" ");
                        return false;
                    }
                }
                break;
            }
            default:
                break;
        }
    }
    return true;
}

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
        BASSFACE,   BOB,        LIGHTER,    UWU,        UP,
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
        RGB_MOD,    RGB_VAI,    RGB_HUI,    RGB_SAI,    RGB_SPI,
        RGB_RMOD,   RGB_VAD,    RGB_HUD,    RGB_SAD,    RGB_SPD,
        KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,
        RGB_M_P,    RGB_M_B,    RGB_M_R,    RGB_M_SW,   RGB_TOG
    ),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (!process_record_bup(keycode, record)) {
        return false;
    }

    return true;
}
