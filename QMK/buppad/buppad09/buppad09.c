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

#ifdef RGB_MATRIX_ENABLE

bool process_record_kb(uint16_t keycode, keyrecord_t *record) {
    if (!process_record_user(keycode, record)) { return false; }
    switch (keycode) {
        case RGB_TOG:
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
    }
    return true;
}

bool rgb_matrix_indicators_advanced_kb(uint8_t led_min, uint8_t led_max) {
    if (!rgb_matrix_indicators_advanced_user(led_min, led_max)) {
        return false;
        }

    HSV hsv = {0, 255, 200};

// Determine the active layer
    uint8_t active_layer = get_highest_layer(layer_state);

// Set HSV values based on the active layer
    switch (active_layer) {
        case 0:
            hsv = (HSV){200, 255, 200}; // Layer 4: MAGENTA
            break;
        case 1:
            hsv = (HSV){128, 255, 200}; // Layer 0: CYAN
            break;
        case 2:
            hsv = (HSV){170, 255, 200}; // Layer 2: BLUE
            break;
        case 3:
            hsv = (HSV){85, 255, 200}; // Layer 1: GREEN
            break;
        case 4:
            hsv = (HSV){0, 0, 200}; // Layer 3: WHITE
            break;
        case 5:
            hsv = (HSV){0, 255, 200}; // Layer 5: RED
            break;
        default:
            hsv = (HSV){43, 255, 200}; // err: YELLOW
            break;
    }
// Ensure value (brightness) consistency within range
    if (rgb_matrix_get_val() <= 100) {
        hsv.v = 100;
    } else {
        hsv.v = rgb_matrix_get_val();
    }
// Convert HSV to RGB
    RGB rgb = hsv_to_rgb(hsv);
// Set LEDs with 'indicator' flag
    for (uint8_t i = led_min; i < led_max; i++) {
        if (HAS_FLAGS(g_led_config.flags[i], 0x08)) { // 0x08 == LED_FLAG_INDICATOR
            rgb_matrix_set_color(i, rgb.r, rgb.g, rgb.b);
        }
    }
    return false;
}

#endif
