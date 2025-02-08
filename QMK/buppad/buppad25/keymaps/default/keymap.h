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
#include "buppad25.h"

enum custom_keycodes {
    AMNESIA = FIRST_EMOTE,  // start_bup, Tier 1
    AYO,        // Tier 1
    BACKDOOR,   // Tier 1
    BALLOON,    // Tier 1
    BART,       // Tier 1
    BEARDDANCE, // Tier 1
    BIGBRAIN,   // Tier 1
    BITS,       // Tier 1
    BOOMER,     // Tier 1
    BUG,        // Tier 1
    BUP,        // Tier 1
    BUPS,       // Tier 1
    BUPWAD,     // Tier 1
    CALL,       // Tier 1
    CATDANCE,   // Tier 1
    CHEERS,     // Tier 1
    CHEESE,     // Tier 1
    CHEFKISS,   // Tier 1
    CROWN,      // Tier 1
    DIDDY,      // Tier 1
    DISCO,      // Tier 1
    DOIT,       // Tier 1
    DONUT,      // Tier 1
    DRUMS,      // Tier 1
    DUCKDANCE,  // Tier 1
    DUCKHEAD,   // Tier 1
    DYE,        // Tier 1
    EE,         // Tier 1
    FIRE,       // Tier 1
    FLUTE,      // Tier 1
    FREAKOUT,   // Tier 1
    FROG,       // Tier 1
    GROGU,      // Tier 1
    GROOVY,     // Tier 1
    HEADOUT,    // Tier 1
    HORN,       // Tier 1
    ID,         // Tier 1
    KEKW,       // Tier 1
    KEYS,       // Tier 1
    LIGHTER,    // Tier 1
    LOVE,       // Tier 1
    LUIGIBUP,   // Tier 1
    MOOSE,      // Tier 1
    PATBANG,    // Tier 1
    PLUG,       // Tier 1
    SALUTE,     // Tier 1
    SH,         // Tier 1
    SLAY,       // Tier 1
    SWEATY,     // Tier 1
    THANKS,     // Tier 1
    WOOK,       // Tier 1
    WUB,        // Tier 1
    ZEJIBO,     // Tier 1
    ZELDABUP,   // Tier 1
    BROC,       // Tier 2
    CLOUDS,     // Tier 2
    GOOSE,      // Tier 2
    HEART,      // Tier 2
    JAWNESSA,   // Tier 2
    RAVE,       // Tier 2
    SALT,       // Tier 2
    TINFOIL,    // Tier 2
    WATER,      // Tier 2
    WIZ,        // Tier 2
    BASSSFACE,  // Tier 3
    BOB,        // Tier 3
    CHILLGUY,   // Tier 3
    DRAGON,     // Tier 3
    JELLY,      // Tier 3
    MAPLE,      // Tier 3
    RUMP,       // Tier 3
    SMIRK,      // Tier 3
    UWU,        // Tier 3
    WINK,       // Tier 3
    ABDUCKTION, // bitstier
    ASCEND,     // bitstier
    ASHDUCKEM,  // bitstier
    EXCUSEME,   // bitstier
    FANCYDUCK,  // bitstier
    GOLD,       // bitstier
    HEADPHONES, // bitstier
    KTULUEHUG,  // bitstier
    RAINBOW,    // bitstier
    SMUG,       // bitstier
    SUS,        // bitstier
    NOD,        // Follower
    TIEDYE,     // Follower
    TUNE,       // Follower
    UP,         // Follower
    WAVE,       // end_bup, Follower
    BOP,            // Start Twitch Global Emotes
    BOPBOP,         // Twitch Global Emote
    DINODANCE,      // Twitch Global Emote
    GLITCHLIT,      // Twitch Global Emote
    GOATEMOTEY,     // Twitch Global Emote
    GOLDPLZ,        // Twitch Global Emote
    KAPPA,          // Twitch Global Emote
    KREYGASM,       // Twitch Global Emote
    MODLOVE,        // Twitch Global Emote
    NOTLIKETHIS,    // Twitch Global Emote
    POWERUPL,       // Twitch Global Emote
    POWERUPR,       // Twitch Global Emote
    SINGSMIC,       // Twitch Global Emote
    SINGSNOTE,      // Twitch Global Emote
    STINKYCHEESE,   // Twitch Global Emote
    TOMBRAID,       // Twitch Global Emote
    TWITCHCONHYPE,  // Twitch Global Emote
    TWITCHLIT,      // Twitch Global Emote
    TWITCHRAID,     // Twitch Global Emote
    UNITY,          // Twitch Global Emote
    VOTENAY,        // Twitch Global Emote
    VOTEYEA,        // End Twitch Global Emotes
    BDANCE,     // start_bex
    BMINGO,     // bex
    BMONKEY,    // bex
    BPUG,       // bex
    BUGH,       // end_bex
    KCLAP,      // start_ktlu
    KGATO,      // ktlu
    KGGS,       // ktlu
    KGLUTES,    // ktlu
    KHI,        // ktlu
    KHUG,       // ktlu
    KLEI,       // ktlu
    KLOVE,      // ktlu
    KRDNC,      // ktlu
    KSMUG,      // end_ktlu
};

#define LAST_EMOTE KSMUG
