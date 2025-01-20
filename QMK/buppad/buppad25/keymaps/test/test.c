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

#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "quantum.h"
#include "buppad_common.h"
#include "send_string.h"

keycode_string_t keycode_strings[] = {
    {CAPGEN5, SS_LCTL("acvvvvv")},
    {CAPGEN8, SS_LCTL("acvvvvvvvv")},
    {CAPGEN10, SS_LCTL("acvvvvvvvvvv")},
    {ACID, "bupAcid "},
    {AYO, "bupAyo "},
    {BEARDDANCE, "bupBEARDDANCE "},
    {BITS, "bupBITS "},
    {BOOMER, "bupBOOMER "},
    {BUP, "bupBUP "},
    {BUPS, "bupBUPS "},
    {BUPWAD, "bupBUPWAD "},
    {BACKDOOR, "bupBackDoor "},
    {BALLOON, "bupBalloon "},
    {BART, "bupBart "},
    {BIGBRAIN, "bupBigBrain "},
    {BUG, "bupBug "},
    {CATDANCE, "bupCATDANCE "},
    {CHEERS, "bupCHEERS "},
    {CALL, "bupCall "},
    {CHEESE, "bupCheese "},
    {CHEFKISS, "bupChefkiss "},
    {CROWN, "bupCrown "},
    {DOIT, "bupDOIT "},
    {DUCKDANCE, "bupDUCKDANCE "},
    {DIDDY, "bupDiddy "},
    {DISCO, "bupDisco "},
    {DONUT, "bupDonut "},
    {DRUMS, "bupDrums "},
    {DUCKHEAD, "bupDuckhead "},
    {DYE, "bupDye "},
    {EE, "bupEE "},
    {EYE, "bupEye "},
    {FLUTE, "bupFLUTE "},
    {FROG, "bupFROG "},
    {FIRE, "bupFire "},
    {FREAKOUT, "bupFreakout "},
    {GLUTES, "bupGlutes "},
    {GROGU, "bupGrogu "},
    {HEADOUT, "bupHEADOUT "},
    {HORN, "bupHORN "},
    {ID, "bupID "},
    {KEYS, "bupKEYS "},
    {KEKW, "bupKekw "},
    {LOVE, "bupLOVE "},
    {LIGHTER, "bupLighter "},
    {MOOSE, "bupMOOSE "},
    {PATBANG, "bupPATBANG "},
    {PLUG, "bupPlug "},
    {SALUTE, "bupSalute "},
    {SH, "bupSh "},
    {SLAY, "bupSlay "},
    {SPOOKY, "bupSpooky "},
    {SWEATY, "bupSweaty "},
    {THANKS, "bupTHANKS "},
    {WOOK, "bupWOOK "},
    {WUB, "bupWUB "},
    {ZELDABUP, "bupZELDABUP "},
    {ZEJIBO, "bupZejibo "},
    {BROC, "bupBroc "},
    {CLOUDS, "bupClouds "},
    {GOOSE, "bupGoose "},
    {HEART, "bupHeart "},
    {JAWNESSA, "bupJAWNESSA "},
    {RAVE, "bupRave "},
    {SABER, "bupSABER "},
    {THING, "bupThing "},
    {WATER, "bupWater "},
    {WIZ, "bupWiz "},
    {BASSFACE, "bupBASSSFACE "},
    {BOB, "bupBOB "},
    {DRAGON, "bupDragon "},
    {JELLY, "bupJelly "},
    {MAPLE, "bupMaple "},
    {RUMP, "bupRump "},
    {SMIRK, "bupSmirk "},
    {TINFOIL, "bupTINFOIL "},
    {UWU, "bupUWU "},
    {WINK, "bupWink "},
    {ASHDUCKEM, "bupASHDUCKEM "},
    {ABDUCKTION, "bupAbDUCKtion "},
    {ASCEND, "bupAscend "},
    {CHICK, "bupCHICK "},
    {EXCUSEME, "bupEXCUSEME "},
    {FANCYDUCK, "bupFANCYDUCK "},
    {GOLD, "bupGold "},
    {HEADPHONES, "bupHEADPHONES "},
    {RAINBOW, "bupRAINBOW "},
    {SMUG, "bupSmug "},
    {SUS, "bupSus "},
    {NOD, "bupNod "},
    {TIEDYE, "bupTIEDYE "},
    {TUNE, "bupTUNE "},
    {UP, "bupUp "},
    {WAVE, "bupWAVE "},
    {BOP, "BOP "},
    {BOPBOP, "BopBop "},
    {DINODANCE, "DinoDance "},
    {GLITCHLIT, "GlitchLit "},
    {GOATEMOTEY, "GoatEmotey "},
    {GOLDPLZ, "GoldPLZ "},
    {KAPPA, "Kappa "},
    {KREYGASM, "Kreygasm "},
    {MODLOVE, "ModLove "},
    {NOTLIKETHIS, "NotLikeThis "},
    {POWERUPL, "PowerUpL "},
    {POWERUPR, "PowerUpR "},
    {RIPEPPERONIS, "riPepperonis "},
    {SABAPING, "SabaPing "},
    {SINGSMIC, "SingsMic "},
    {SINGSNOTE, "SingsNote "},
    {STINKYCHEESE, "StinkyCheese "},
    {TOMBRAID, "TombRaid "},
    {TWITCHCONHYPE, "TwitchConHYPE "},
    {TWITCHLIT, "TwitchLit "},
    {TWITCHRAID, "twitchRaid "},
    {UNITY, "TwitchUnity "},
    {VOTENAY, "VoteNay "},
    {VOTEYEA, "VoteYea "},
    {BDANCE, "bexfroDance "},
    {BMINGO, "bexfroMingo "},
    {BMONKEY, "bexfroMonkey "},
    {BPUG, "bexfroPug "},
    {BUGH, "bexfroUgh "},
    {GBIRDGROOVE, "groove21Birdgroove "},
    {GCATDANCE, "groove21Catdance2 "},
    {GFUNNYCATDANCE, "groove21Funnycatdance "},
    {GJAMMIN, "groove21Jammin "},
    {GKITTYDAB, "groove21Kittydab "},
    {GKITTYGROOVE, "groove21Kittygroove "},
    {GNUMBERONE, "groove21Numberone "},
    {GRAVEKITTY, "groove21Ravekitty "},
    {KCLAP, "ktulueClap "},
    {KGATO, "ktulueGato "},
    {KGGS, "ktulueGGs "},
    {KGLUTES, "ktulueGLUTES "},
    {KHI, "ktulueHI "},
    {KHUG, "ktulueHUG "},
    {KLEI, "ktulueLei "},
    {KLOVE, "ktulueLove "},
    {KRDNC, "ktulueRdnc "},
    {KSMUG, "ktulueSMUG "},
    {KWELP, "ktulueWELP "},
 };

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
        for (int i = 0; i < sizeof(keycode_strings) / sizeof(keycode_strings[0]); i++) {
            if (keycode == keycode_strings[i].keycode) {
                if (keycode >= FIRST_EMOTE_KEYCODE && keycode <= LAST_EMOTE_KEYCODE) {
                    if (host_keyboard_led_state().caps_lock) {
                        size_t len = strlen(keycode_strings[i].string) + 1; // +1 for null terminator
                        char *inverted_string = (char *)malloc(len);
                        if (inverted_string != NULL) {
                            strcpy(inverted_string, keycode_strings[i].string);
                            invert_caps(inverted_string);
                            send_string(inverted_string);
                            free(inverted_string);
                        }
                    } else {
                        send_string(keycode_strings[i].string);
                    }
                } else {
                    send_string(keycode_strings[i].string);
                }
                return false;
            }
        }
    }
    return true;
}
