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

#ifdef VIA_ENABLE
#    include "via.h"
#endif

#include "quantum_keycodes.h"

enum custom_keycodes {
    CAPGEN5 = QK_KB_0,
    CAPGEN8,
    CAPGEN10,
    ACID, //begin bup emotes
    ASCEND,
    AYO,
    BACKDOOR,
    BALLOON,
    BART,
    BASSFACE,
    BEARDDANCE,
    BIGBRAIN,
    BITS,
    BOB,
    BOOMER,
    BROC,
    BUG,
    BUP,
    BUPS,
    BUPWAD,
    CALL,
    CATDANCE,
    CHEERS,
    CHEESE,
    CHEFKISS,
    CLOUDS,
    CROWN,
    DIDDY,
    DISCO,
    DOIT,
    DONUT,
    DRAGON,
    DRUMS,
    DUCKDANCE,
    DUCKHEAD,
    DYE,
    EE,
    EYE,
    FIRE,
    FLUTE,
    FREAKOUT,
    FROG,
    GLUTES,
    GOOSE,
    GROGU,
    HEADOUT,
    HEART,
    HORN,
    ID,
    JAWNESSA,
    JELLY,
    KEKW,
    KEYS,
    LIGHTER,
    LOVE,
    MOOSE,
    NOD,
    PATBANG,
    PLUG,
    RAINBOW,
    RAVE,
    REVERSE,
    RUMP,
    SABER,
    SALUTE,
    SH,
    SLAY,
    SMIRK,
    SPOOKY,
    SWEATY,
    THANKS,
    THING,
    TIEDYE,
    TINFOIL,
    UP,
    UWU,
    WATER,
    WAVE,
    WINK,
    WIZ,
    WOOK,
    WUB,
    ZEJIBO,
    ZELDABUP, //end bup emotes
    BIBLETHUMP, //begin twitch emotes
    BOP,
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
    VOTEYEA //end twitch emotes
};

bool process_record_bup(uint16_t keycode, keyrecord_t *record);