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

typedef struct {
    uint16_t keycode;
    const char *string;
} keycode_string_t;

enum custom_keycodes {
    CAPGEN5 = QK_KB_0,
    CAPGEN8,
    CAPGEN10,
    ACID, //begin T1 bup emotes
    AYO,
    BEARDDANCE,
    BITS,
    BOOMER,
    BUP,
    BUPS,
    BUPWAD,
    BACKDOOR,
    BALLOON,
    BART,
    BIGBRAIN,
    BUG,
    CATDANCE,
    CHEERS,
    CALL,
    CHEESE,
    CHEFKISS,
    CROWN,
    DOIT,
    DUCKDANCE,
    DIDDY,
    DISCO,
    DONUT,
    DRUMS,
    DUCKHEAD,
    DYE,
    EE,
    EYE,
    FLUTE,
    FROG,
    FIRE,
    FREAKOUT,
    GLUTES,
    GROGU,
    HEADOUT,
    HORN,
    ID,
    KEYS,
    KEKW,
    LOVE,
    LIGHTER,
    MOOSE,
    PATBANG,
    PLUG,
    SALUTE,
    SH,
    SLAY,
    SPOOKY,
    SWEATY,
    THANKS,
    WOOK,
    WUB,
    ZELDABUP,
    ZEJIBO, //end T1 bup emotes
    BROC, //begin T2 bup emotes
    CLOUDS,
    GOOSE,
    HEART,
    JAWNESSA,
    RAVE,
    SABER,
    THING,
    WATER,
    WIZ, //end T2 bup emotes
    BASSFACE, //begin T3 bup emotes
    BOB,
    DRAGON,
    JELLY,
    MAPLE,
    RUMP,
    SMIRK,
    TINFOIL,
    UWU,
    WINK, //end T3 bup emotes
    ASHDUCKEM,
    ABDUCKTION,
    ASCEND,
    CHICK,
    EXCUSEME,
    FANCYDUCK,
    GOLD,
    HEADPHONES,
    RAINBOW,
    SMUG,
    SUS,
    NOD, //begin follower bup emotes
    TIEDYE,
    TUNE,
    UP,
    WAVE, //end follower bup emotes
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
    RIPEPPERONIS,
    SABAPING,
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
    GBIRDGROOVE,
    GCATDANCE,
    GFUNNYCATDANCE,
    GJAMMIN,
    GKITTYDAB,
    GKITTYGROOVE,
    GNUMBERONE,
    GRAVEKITTY,
    KCLAP,
    KGATO,
    KGGS,
    KGLUTES,
    KHI,
    KHUG,
    KLEI,
    KLOVE,
    KRDNC,
    KSMUG,
    KWELP //end fam emotes
};

#define FIRST_EMOTE_KEYCODE ACID
#define LAST_EMOTE_KEYCODE KWELP

bool process_record_bup(uint16_t keycode, keyrecord_t *record);
