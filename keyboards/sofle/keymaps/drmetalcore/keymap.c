#include QMK_KEYBOARD_H

/* THIS FILE WAS GENERATED!
 *
 * This file was generated by qmk json2c. You may or may not want to
 * edit it directly.
 */

enum custom_keycodes {
    ACCENT_AIGUE=SAFE_RANGE,
    ACCENT_GRAVE,
    CIRCONFLEXE_E,
    CIRCONFLEXE_O,
    TRAIMAT_I,
    ACCENT_A,
    ACCENT_U,
    CEDILLE_C,
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
    case ACCENT_AIGUE:
        if (record->event.pressed) {
            SEND_STRING(SS_DOWN(X_LALT)SS_TAP(X_P1)SS_TAP(X_P3)SS_TAP(X_P0)SS_UP(X_LALT));
        }
        break;
    case ACCENT_GRAVE:
        if (record->event.pressed) {
            SEND_STRING(SS_DOWN(X_LALT)SS_TAP(X_P1)SS_TAP(X_P3)SS_TAP(X_P8)SS_UP(X_LALT));
        }
        break;
    case CIRCONFLEXE_E:
        if (record->event.pressed) {
            SEND_STRING(SS_DOWN(X_LALT)SS_TAP(X_P1)SS_TAP(X_P3)SS_TAP(X_P6)SS_UP(X_LALT));
        }
        break;
    case CIRCONFLEXE_O:
        if (record->event.pressed) {
            SEND_STRING(SS_DOWN(X_LALT)SS_TAP(X_P1)SS_TAP(X_P4)SS_TAP(X_P7)SS_UP(X_LALT));
        }
        break;
    case TRAIMAT_I:
        if (record->event.pressed) {
            SEND_STRING(SS_DOWN(X_LALT)SS_TAP(X_P1)SS_TAP(X_P3)SS_TAP(X_P9)SS_UP(X_LALT));
        }
        break;
    case ACCENT_A:
        if (record->event.pressed) {
            SEND_STRING(SS_DOWN(X_LALT)SS_TAP(X_P1)SS_TAP(X_P3)SS_TAP(X_P3)SS_UP(X_LALT));
        }
        break;
    case ACCENT_U:
        if (record->event.pressed) {
            SEND_STRING(SS_DOWN(X_LALT)SS_TAP(X_P1)SS_TAP(X_P5)SS_TAP(X_P1)SS_UP(X_LALT));
        }
        break;
    case CEDILLE_C:
        if (record->event.pressed) {
            SEND_STRING(SS_DOWN(X_LALT)SS_TAP(X_P0)SS_TAP(X_P2)SS_TAP(X_P3)SS_TAP(X_P1)SS_UP(X_LALT));
        }
        break;
    }
    return true;
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT(KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_EQL, KC_TAB, KC_A, KC_Z, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSPC, LSFT_T(KC_CAPS), KC_Q, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_M, KC_QUOT, KC_LCTL, KC_W, KC_X, KC_C, KC_V, KC_B, KC_MUTE, KC_NO, KC_N, KC_SLSH, KC_SCLN, KC_LBRC, KC_RBRC, KC_MINS, KC_LGUI, KC_LALT, MO(2), KC_NUBS, KC_SPC, KC_ENT, MO(1), KC_COMM, KC_DOT, KC_DEL),
	[1] = LAYOUT(KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_NO, ACCENT_A, CIRCONFLEXE_E, ACCENT_AIGUE, ACCENT_GRAVE, KC_NO, TRAIMAT_I, ACCENT_U, KC_UP, CIRCONFLEXE_O, KC_NO, KC_NO, KC_LSFT, RGB_TOG, KC_NO, KC_NO, RGB_MOD, RGB_VAI, KC_NO, KC_LEFT, KC_DOWN, KC_RGHT, KC_NO, KC_NO, KC_LCTL, BL_TOGG, KC_NO, CEDILLE_C, BL_STEP, BL_UP, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_LALT, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NO),
	[2] = LAYOUT(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_PSLS, KC_PAST, KC_PMNS, KC_NO, KC_NO, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_P7, KC_P8, KC_P9, KC_PPLS, KC_NO, KC_NO, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_P4, KC_P5, KC_P6, KC_PCMM, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_P1, KC_P2, KC_P3, KC_PEQL, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_RALT, KC_P0, KC_PDOT, KC_NO)
};

#if defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {

};
#endif // defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)

#ifdef OLED_ENABLE

static void render_logo(void) {
    static const char PROGMEM qmk_logo[] = {
        0x80,0x81,0x82,0x83,0x84,0x85,0x86,0x87,0x88,0x89,0x8a,0x8b,0x8c,0x8d,0x8e,0x8f,0x90,0x91,0x92,0x93,0x94,
        0xa0,0xa1,0xa2,0xa3,0xa4,0xa5,0xa6,0xa7,0xa8,0xa9,0xaa,0xab,0xac,0xad,0xae,0xaf,0xb0,0xb1,0xb2,0xb3,0xb4,
        0xc0,0xc1,0xc2,0xc3,0xc4,0xc5,0xc6,0xc7,0xc8,0xc9,0xca,0xcb,0xcc,0xcd,0xce,0xcf,0xd0,0xd1,0xd2,0xd3,0xd4,0
    };

    oled_write_P(qmk_logo, false);
}

bool oled_task_user(void) {
    render_logo();
    return false;
}

#endif




