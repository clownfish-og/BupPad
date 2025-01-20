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

#pragma once

#include <stdint.h>
#include <stdbool.h>
#include "action.h"
#include "quantum.h"

#ifdef VIA_ENABLE
#    include "via.h"
#endif

#include "quantum_keycodes.h"



enum custom_keycodes {
    CAPGEN5 = QK_KB_0,
    CAPGEN8,
    CAPGEN10,
    AMNESIA, //begin bup emotes
    AYO,
    BACKDOOR,
    BALLOON,
    BART,
    BEARDDANCE,
    BIGBRAIN,
    BITS,
    BOOMER,
    BUG,
    BUP,
    BUPS,
    BUPWAD,
    CALL,
    CATDANCE,
    CHEERS,
    CHEESE,
    CHEFKISS,
    CROWN,
    DIDDY,
    DISCO,
    DOIT,
    DONUT,
    DRUMS,
    DUCKDANCE,
    DUCKHEAD,
    DYE,
    EE,
    FIRE,
    FLUTE,
    FREAKOUT,
    FROG,
    GROGU,
    GROOVY,
    HEADOUT,
    HORN,
    ID,
    KEKW,
    KEYS,
    LIGHTER,
    LOVE,
    LUIGIBUP,
    MOOSE,
    PATBANG,
    PLUG,
    SALUTE,
    SH,
    SLAY,
    SWEATY,
    THANKS,
    WOOK,
    WUB,
    ZEJIBO,
    ZELDABUP,
    BROC, //begin tier 2000 emotes
    CLOUDS,
    GOOSE,
    HEART,
    JAWNESSA,
    RAVE,
    SALT,
    TINFOIL,
    WATER,
    WIZ,
    BASSFACE, //begin tier 3000 emotes
    BOB,
    CHILLGUY,
    DRAGON,
    JELLY,
    MAPLE,
    RUMP,
    SMIRK,
    UWU,
    WINK,
    ABDUCKTION, //begin bitstier emotes
    ASCEND,
    ASHDUCKEM,
    EXCUSEME,
    FANCYDUCK,
    GOLD,
    HEADPHONES,
    KTULUEHUG,
    RAINBOW,
    SMUG,
    SUS,
    NOD, //begin follower emotes
    TIEDYE,
    TUNE,
    UP,
    WAVE, //end bup emotes
    BOP, //begin twitch emotes
    BOPBOP,
    DINODANCE,
    GLITCHLIT,
    GOATEMOTEY,
    GOLDPLZ,
    KAPPA,
    KREYGASM,
    MODLOVE,
    NOTLIKETHIS,
    POWERUPL,
    POWERUPR,
    SINGSMIC,
    SINGSNOTE,
    STINKYCHEESE,
    TOMBRAID,
    TWITCHCONHYPE,
    TWITCHLIT,
    TWITCHRAID,
    UNITY,
    VOTENAY,
    VOTEYEA, //end twitch emotes
    BDANCE, //begin fam emotes
    BMINGO,
    BMONKEY,
    BPUG,
    BUGH,
    KCLAP,
    KGATO,
    KGGS,
    KGLUTES,
    KHI,
    KHUG,
    KLEI,
    KLOVE,
    KRDNC,
    KSMUG, //end fam emotes
};


#define FIRST_EMOTE_KEYCODE AMNESIA
#define LAST_BUP_KEYCODE WAVE
#define FIRST_BEX_KEYCODE BDANCE
#define LAST_BEX_KEYCODE BUGH
#define FIRST_KTLU_KEYCODE KCLAP
#define LAST_KTLU_KEYCODE KSMUG
#define LAST_EMOTE_KEYCODE KSMUG
#define BUP_PREFIX "bup"
#define BEX_PREFIX "bexfro"
#define KTLU_PREFIX "ktulue"
#define MAX_EMOTE_LEN 32

typedef struct {
    uint16_t keycode;
    const char *suffix;
} keycode_string_compressed_t;

bool process_record_bup(uint16_t keycode, keyrecord_t *record);
