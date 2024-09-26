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
 
#include "quantum.h"
#include "buppad_common.h"

bool process_record_bup(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case CAPGEN5:
            if (record->event.pressed) {
                SEND_STRING(SS_LCTL("acvvvvv"));
            }
            return false;
        case CAPGEN8:
            if (record->event.pressed) {
                SEND_STRING(SS_LCTL("acvvvvvvvv"));
            }
            return false;
        case CAPGEN10:
            if (record->event.pressed) {
                SEND_STRING(SS_LCTL("acvvvvvvvvvv"));
            }
            return false;
        case ACID:
            if (record->event.pressed) {
                SEND_STRING("bupAcid ");
            }
            return false;
        case ASCEND:
            if (record->event.pressed) {
                SEND_STRING("bupAscend ");
            }
            return false;
        case ASH:
            if (record->event.pressed) {
                SEND_STRING("bupAsh ");
            }
            return false;
        case AYO:
            if (record->event.pressed) {
                SEND_STRING("bupAyo ");
            }
            return false;
        case BACKDOOR:
            if (record->event.pressed) {
                SEND_STRING("bupBackDoor ");
            }
            return false;
        case BALLOON:
            if (record->event.pressed) {
                SEND_STRING("bupBalloon ");
            }
            return false;
        case BART:
            if (record->event.pressed) {
                SEND_STRING("bupBart ");
            }
            return false;
        case BASSFACE:
            if (record->event.pressed) {
                SEND_STRING("bupBASSSFACE ");
            }
            return false;
        case BEARDDANCE:
            if (record->event.pressed) {
                SEND_STRING("bupBEARDDANCE ");
            }
            return false;
        case BIGBRAIN:
            if (record->event.pressed) {
                SEND_STRING("bupBigBrain ");
            }
            return false;
        case BITS:
            if (record->event.pressed) {
                SEND_STRING("bupBITS ");
            }
            return false;
        case BOB:
            if (record->event.pressed) {
                SEND_STRING("bupBOB ");
            }
            return false;
        case BOOMER:
            if (record->event.pressed) {
                SEND_STRING("bupBOOMER ");
            }
            return false;
        case BROC:
            if (record->event.pressed) {
                SEND_STRING("bupBroc ");
            }
            return false;
        case BUG:
            if (record->event.pressed) {
                SEND_STRING("bupBug ");
            }
            return false;
        case BUP:
            if (record->event.pressed) {
                SEND_STRING("bupBUP ");
            }
            return false;
        case BUPS:
            if (record->event.pressed) {
                SEND_STRING("bupBUPS ");
            }
            return false;
        case BUPWAD:
            if (record->event.pressed) {
                SEND_STRING("bupBUPWAD ");
            }
            return false;
        case CALL:
            if (record->event.pressed) {
                SEND_STRING("bupCall ");
            }
            return false;
        case CATDANCE:
            if (record->event.pressed) {
                SEND_STRING("bupCATDANCE ");
            }
            return false;
        case CHEERS:
            if (record->event.pressed) {
                SEND_STRING("bupCHEERS ");
            }
            return false;
        case CHEESE:
            if (record->event.pressed) {
                SEND_STRING("bupCheese ");
            }
            return false;
        case CHEFKISS:
            if (record->event.pressed) {
                SEND_STRING("bupChefkiss ");
            }
            return false;
        case CLOUDS:
            if (record->event.pressed) {
                SEND_STRING("bupClouds ");
            }
            return false;
        case CROWN:
            if (record->event.pressed) {
                SEND_STRING("bupCrown ");
            }
            return false;
        case DIDDY:
            if (record->event.pressed) {
                SEND_STRING("bupDiddy ");
            }
            return false;
        case DISCO:
            if (record->event.pressed) {
                SEND_STRING("bupDisco ");
            }
            return false;
        case DOIT:
            if (record->event.pressed) {
                SEND_STRING("bupDOIT ");
            }
            return false;
        case DONUT:
            if (record->event.pressed) {
                SEND_STRING("bupDonut ");
            }
            return false;
        case DRAGON:
            if (record->event.pressed) {
                SEND_STRING("bupDragon ");
            }
            return false;
        case DRUMS:
            if (record->event.pressed) {
                SEND_STRING("bupDrums ");
            }
            return false;
        case DUCKDANCE:
            if (record->event.pressed) {
                SEND_STRING("bupDUCKDANCE ");
            }
            return false;
        case DUCKHEAD:
            if (record->event.pressed) {
                SEND_STRING("bupDuckhead ");
            }
            return false;
        case DYE:
            if (record->event.pressed) {
                SEND_STRING("bupDye ");
            }
            return false;
        case EE:
            if (record->event.pressed) {
                SEND_STRING("bupEE ");
            }
            return false;
        case EYE:
            if (record->event.pressed) {
                SEND_STRING("bupEye ");
            }
            return false;
        case FIRE:
            if (record->event.pressed) {
                SEND_STRING("bupFire ");
            }
            return false;
        case FLUTE:
            if (record->event.pressed) {
                SEND_STRING("bupFLUTE ");
            }
            return false;
        case FREAKOUT:
            if (record->event.pressed) {
                SEND_STRING("bupFreakout ");
            }
            return false;
        case FROG:
            if (record->event.pressed) {
                SEND_STRING("bupFROG ");
            }
            return false;
        case GOOSE:
            if (record->event.pressed) {
                SEND_STRING("bupGoose ");
            }
            return false;
        case GROGU:
            if (record->event.pressed) {
                SEND_STRING("bupGrogu ");
            }
            return false;
        case HEADOUT:
            if (record->event.pressed) {
                SEND_STRING("bupHEADOUT ");
            }
            return false;
        case HEART:
            if (record->event.pressed) {
                SEND_STRING("bupHeart ");
            }
            return false;
        case HORN:
            if (record->event.pressed) {
                SEND_STRING("bupHORN ");
            }
            return false;
        case ID:
            if (record->event.pressed) {
                SEND_STRING("bupID ");
            }
            return false;
        case JAWNESSA:
            if (record->event.pressed) {
                SEND_STRING("bupJAWNESSA ");
            }
            return false;
        case JELLY:
            if (record->event.pressed) {
                SEND_STRING("bupJelly ");
            }
            return false;
        case KEKW:
            if (record->event.pressed) {
                SEND_STRING("bupKekw ");
            }
            return false;
        case KEYS:
            if (record->event.pressed) {
                SEND_STRING("bupKEYS ");
            }
            return false;
        case LIGHTER:
            if (record->event.pressed) {
                SEND_STRING("bupLighter ");
            }
            return false;
        case LOVE:
            if (record->event.pressed) {
                SEND_STRING("bupLOVE ");
            }
            return false;
        case MOOSE:
            if (record->event.pressed) {
                SEND_STRING("bupMOOSE ");
            }
            return false;
        case NOD:
            if (record->event.pressed) {
                SEND_STRING("bupNod ");
            }
            return false;
        case PATBANG:
            if (record->event.pressed) {
                SEND_STRING("bupPATBANG ");
            }
            return false;
        case PLUG:
            if (record->event.pressed) {
                SEND_STRING("bupPlug ");
            }
            return false;
        case RAINBOW:
            if (record->event.pressed) {
                SEND_STRING("bupRAINBOW ");
            }
            return false;
        case RAVE:
            if (record->event.pressed) {
                SEND_STRING("bupRave ");
            }
            return false;
        case REVERSE:
            if (record->event.pressed) {
                SEND_STRING("bupReverse  ");
            }
            return false;
        case RUMP:
            if (record->event.pressed) {
                SEND_STRING("bupRump ");
            }
            return false;
        case SABER:
            if (record->event.pressed) {
                SEND_STRING("bupSABER ");
            }
            return false;
        case SALUTE:
            if (record->event.pressed) {
                SEND_STRING("bupSalute ");
            }
            return false;
        case SH:
            if (record->event.pressed) {
                SEND_STRING("bupSh ");
            }
            return false;
        case SLAY:
            if (record->event.pressed) {
                SEND_STRING("bupSlay ");
            }
            return false;
        case SMIRK:
            if (record->event.pressed) {
                SEND_STRING("bupSmirk ");
            }
            return false;
        case SPOOKY:
            if (record->event.pressed) {
                SEND_STRING("bupSpooky ");
            }
            return false;
        case SWEATY:
            if (record->event.pressed) {
                SEND_STRING("bupSweaty ");
            }
            return false;
        case THANKS:
            if (record->event.pressed) {
                SEND_STRING(" bupTHANKS ");
            }
            return false;
        case THING:
            if (record->event.pressed) {
                SEND_STRING("bupThing ");
            }
            return false;
        case TIEDYE:
            if (record->event.pressed) {
                SEND_STRING(" bupTIEDYE ");
            }
            return false;
        case TINFOIL:
            if (record->event.pressed) {
                SEND_STRING("bupTINFOIL ");
            }
            return false;
        case UP:
            if (record->event.pressed) {
                SEND_STRING("bupUp ");
            }
            return false;
        case UWU:
            if (record->event.pressed) {
                SEND_STRING("bupUWU ");
            }
            return false;
        case WATER:
            if (record->event.pressed) {
                SEND_STRING("bupWater ");
            }
            return false;
        case WAVE:
            if (record->event.pressed) {
                SEND_STRING("bupWAVE ");
            }
            return false;
        case WINK:
            if (record->event.pressed) {
                SEND_STRING("bupWink ");
            }
            return false;
        case WIZ:
            if (record->event.pressed) {
                SEND_STRING("bupWiz ");
            }
            return false;
        case WOOK:
            if (record->event.pressed) {
                SEND_STRING("bupWOOK ");
            }
            return false;
        case WUB:
            if (record->event.pressed) {
                SEND_STRING("bupWUB ");
            }
            return false;
        case ZEJIBO:
            if (record->event.pressed) {
                SEND_STRING("bupZejibo ");
            }
            return false;
        case ZELDABUP:
            if (record->event.pressed) {
                SEND_STRING("bupZELDABUP ");
            }
            return false;
        default:
            return true; // Process all other keycodes normally
    }
}