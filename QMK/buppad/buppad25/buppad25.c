/* Copyright (C) 2024 @clownfish-og
 * Copyright (C) 2024 QMK
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
#include "quantum.h"

#ifdef RGB_MATRIX_ENABLE
bool process_record_kb(uint16_t keycode, keyrecord_t *record) {
    if (!process_record_user(keycode, record)) {
        return false;
    }
    switch (keycode) {
        case QK_UNDERGLOW_TOGGLE:  // Allow indicator LED function when RGB is toggled off
            if (record->event.pressed) {
                switch (rgb_matrix_get_flags()) {
                    case LED_FLAG_ALL: {
                        rgb_matrix_set_flags(LED_FLAG_NONE);
                        rgb_matrix_set_color_all(0, 0, 0);
                    } break;
                    default: {
                        rgb_matrix_set_flags(LED_FLAG_ALL);
                    } break;
                }
            }
            if (!rgb_matrix_is_enabled()) {
                rgb_matrix_set_flags(LED_FLAG_ALL);
                rgb_matrix_enable();
            }
            return false;
        case RMPL:  // Set RGB to solid_color
            if (record->event.pressed) {
                if (rgb_matrix_is_enabled()) rgb_matrix_mode(RGB_MATRIX_SOLID_COLOR);
            }
            return false;
        case RMAM:  // Set RGB to alphas_mods
            if (record->event.pressed) {
                if (rgb_matrix_is_enabled()) rgb_matrix_mode(RGB_MATRIX_ALPHAS_MODS);
            }
            return false;
        case RMSW:  // Set RGB to cycle_spiral
            if (record->event.pressed) {
                if (rgb_matrix_is_enabled()) rgb_matrix_mode(RGB_MATRIX_CYCLE_SPIRAL);
            }
            return false;
        case CAPGEN5:  // Select all, copy, paste 5x
            if (record->event.pressed) {
                SEND_STRING(SS_LCTL("acvvvvv"));
                return false;
            }
        case CAPGEN8:  // Select all, copy, paste 8x
            if (record->event.pressed) {
                SEND_STRING(SS_LCTL("acvvvvvvvv"));
                return false;
            }
        case CAPGEN10:  // Select all, copy, paste 10x
            if (record->event.pressed) {
                SEND_STRING(SS_LCTL("acvvvvvvvvvv"));
                return false;
            }
    }
    return true;
}

bool rgb_matrix_indicators_advanced_kb(uint8_t led_min, uint8_t led_max) {
    if (!rgb_matrix_indicators_advanced_user(led_min, led_max)) {  // allow user function to run ( __attribute__((weak)) )
        return false;
    }

    //  Define an assortment of HSV values for indicators and convert HSV to RGB (important for limiting brightness with WS2812)
    rgb_t rgb0 = hsv_to_rgb((hsv_t){200, 255, 200});                    // MAGENTA
    rgb_t rgb1 = hsv_to_rgb((hsv_t){128, 255, 200});                    // CYAN
    rgb_t rgb2 = hsv_to_rgb((hsv_t){170, 255, 200});                    // BLUE
    rgb_t rgb2v = hsv_to_rgb((hsv_t){170, 255, rgb_matrix_get_val()});  // BLUE - BRIGHTNESS VARIES
    rgb_t rgb3 = hsv_to_rgb((hsv_t){85, 255, 200});                     // GREEN
    rgb_t rgb3v = hsv_to_rgb((hsv_t){85, 255, rgb_matrix_get_val()});   // GREEN - BRIGHTNESS VARIES
    rgb_t rgb4 = hsv_to_rgb((hsv_t){43, 255, 200});                     // YELLOW
    rgb_t rgb5 = hsv_to_rgb((hsv_t){0, 255, 200});                      // RED
    rgb_t rgb5v = hsv_to_rgb((hsv_t){0, 255, rgb_matrix_get_val()});    // RED - BRIGHTNESS VARIES
    rgb_t rgb6 = hsv_to_rgb((hsv_t){0, 0, 200});                        // WHITE
    rgb_t rgb6v = hsv_to_rgb((hsv_t){0, 0, rgb_matrix_get_val()});      // WHITE - BRIGHTNESS VARIES

        // Determine the active layer
        uint8_t active_layer = get_highest_layer(layer_state);

        if (!rgb_matrix_get_flags()) {  // RGB is toggled off
            rgb_matrix_set_color_all(RGB_BLACK);
        }

    /*
    keylight LED index to position legend
    -----------------------
    | 20 |21 |22 |23 | 24 |
    -----------------------
    | 19 | 6 | 7 | 8 | 9  |
    -----------------------
    | 18 | 5 | 0 | 1 | 10 |
    -----------------------
    | 17 | 4 | 3 | 2 | 11 |
    -----------------------
    | 16 |15 |14 |13 | 12 |
    -----------------------
    */

    // Set indicator LEDs
    for (uint8_t i = led_min; i < led_max; i++) {
        switch (active_layer) {
            case 0:
                rgb_matrix_set_color(20, rgb0.r, rgb0.g, rgb0.b);  // TO(1) MAGENTA
                break;
            case 1:
                rgb_matrix_set_color(21, rgb1.r, rgb1.g, rgb1.b);  // TO(5) CYAN
                break;
            case 2:
                rgb_matrix_set_color(22, rgb2.r, rgb2.g, rgb2.b);  // TO(5) BLUE
                break;
            case 3:
                rgb_matrix_set_color(23, rgb3.r, rgb3.g, rgb3.b);  // TO(5) GREEN
                break;
            case 4:
                rgb_matrix_set_color(24, rgb4.r, rgb4.g, rgb4.b);  // TO(5) YELLOW
                break;
            case 5:                                             // RGB SETTINGS LAYER
                rgb_matrix_set_color(16, rgb5v.r, rgb5v.g, rgb5v.b);  // TT(6) RED - BRIGHTNESS VARIES
                rgb_matrix_set_color(20, rgb5.r, rgb5.g, rgb5.b);     // TOP ROW RED
                rgb_matrix_set_color(21, rgb5.r, rgb5.g, rgb5.b);     // TOP ROW RED
                rgb_matrix_set_color(22, rgb5.r, rgb5.g, rgb5.b);     // TOP ROW RED
                rgb_matrix_set_color(23, rgb5.r, rgb5.g, rgb5.b);     // TOP ROW RED
                rgb_matrix_set_color(24, rgb5.r, rgb5.g, rgb5.b);     // TOP ROW RED
                break;
            case 6:                                             // NUMPAD LAYER
                if (!host_keyboard_led_state().num_lock) {          // NUMLOCK OFF
                    rgb_matrix_set_color_all(rgb2v.r, rgb2v.g, rgb2v.b);  // ALL BLUE - BRIGHTNESS VARIES
                    rgb_matrix_set_color(21, rgb6.r, rgb6.g, rgb6.b);     // NUMLOCK WHITE
                    rgb_matrix_set_color(1, rgb3v.r, rgb3v.g, rgb3v.b);   // ARROW KEYS GREEN
                    rgb_matrix_set_color(3, rgb3v.r, rgb3v.g, rgb3v.b);   // ARROW KEYS GREEN
                    rgb_matrix_set_color(5, rgb3v.r, rgb3v.g, rgb3v.b);   // ARROW KEYS GREEN
                    rgb_matrix_set_color(7, rgb3v.r, rgb3v.g, rgb3v.b);   // ARROW KEYS GREEN
                    rgb_matrix_set_color(20, rgb0.r, rgb0.g, rgb0.b);     // TO(0) MAGENTA
                    rgb_matrix_set_color(16, rgb5v.r, rgb5v.g, rgb5v.b);  // TT(6) RED - BRIGHTNESS VARIES
                } else {                                            // NUMLOCK ON
                    rgb_matrix_set_color_all(rgb6v.r, rgb6v.g, rgb6v.b);  // ALL WHITE - BRIGHTNESS VARIES
                    rgb_matrix_set_color(21, rgb2.r, rgb2.g, rgb2.b);  // NUMLOCK BLUE
                    rgb_matrix_set_color(20, rgb0.r, rgb0.g, rgb0.b);     // TO(0) MAGENTA
                    rgb_matrix_set_color(19, RGB_BLACK);                  // LEFT COLUMN BLACK
                    rgb_matrix_set_color(18, RGB_BLACK);                  // LEFT COLUMN BLACK
                    rgb_matrix_set_color(17, RGB_BLACK);                  // LEFT COLUMN BLACK
                    rgb_matrix_set_color(16, rgb5v.r, rgb5v.g, rgb5v.b);  // TT(6) RED - BRIGHTNESS VARIES
                }
                break;
            case 7:
                rgb_matrix_set_color(20, rgb0.r, rgb0.g, rgb0.b);  // TO(0) MAGENTA
                rgb_matrix_set_color(21, rgb6.r, rgb6.g, rgb6.b);  // TOP ROW WHITE
                rgb_matrix_set_color(22, rgb6.r, rgb6.g, rgb6.b);  // TOP ROW WHITE
                rgb_matrix_set_color(23, rgb6.r, rgb6.g, rgb6.b);  // TOP ROW WHITE
                rgb_matrix_set_color(24, rgb6.r, rgb6.g, rgb6.b);  // TOP ROW WHITE
                break;
            default:
                rgb_matrix_set_color_all(RGB_BLACK);
                break;
        }
    }
    return false;
}

#endif
