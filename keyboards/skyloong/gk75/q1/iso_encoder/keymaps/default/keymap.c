// Copyright 2023 JZ-Skyloong (@JZ-Skyloong)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = LAYOUT_iso_all(
         KC_ESC,              KC_F1,    KC_F2,    KC_F3,    KC_F4,       KC_F5,    KC_F6,      KC_F7,    KC_F8,       KC_F9,      KC_F10,   KC_F11,    KC_F12,   KC_PSCR,
         KC_GRV,     KC_1,     KC_2,     KC_3,     KC_4,     KC_5,        KC_6,     KC_7,       KC_8,     KC_9,        KC_0,     KC_MINS,   KC_EQL,   KC_BSPC,    KC_DEL,
         KC_TAB,     KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,        KC_Y,     KC_U,       KC_I,     KC_O,        KC_P,     KC_LBRC,  KC_RBRC,              KC_PGUP,
        KC_CAPS,     KC_A,     KC_S,     KC_D,     KC_F,     KC_G,        KC_H,     KC_J,       KC_K,     KC_L,     KC_SCLN,     KC_QUOT,   KC_ENT,   KC_NUBS,   KC_PGDN,
        KC_LSFT,  KC_NUHS,     KC_Z,     KC_X,     KC_C,     KC_V,      KC_SPC,     KC_N,       KC_M,  KC_COMM,      KC_DOT,     KC_SLSH,  KC_RSFT,     KC_UP,
        KC_LCTL,  KC_LGUI,  KC_LALT,             KC_SPC,   KC_SPC,        KC_B,   KC_SPC,              KC_RALT,       MO(1),      KC_APP,  KC_LEFT,   KC_DOWN,   KC_RGHT
    ),

    [1] = LAYOUT_iso_all(
        _______,            _______,  _______,  _______,  _______,     _______,   _______,   _______,  _______,    _______,      _______,  _______,  _______,   _______,
        _______,  _______,  _______,  _______,  _______,  _______,     _______,   _______,   _______,  RGB_TOG,      KC_NO,     RGB_RMOD,  RGB_MOD,  _______,   _______,
        _______,  _______,  _______,  _______,  _______,  _______,     _______,   _______,   _______,  _______,    _______,      _______,  _______,             _______,
        _______,  _______,  _______,  _______,  _______,  _______,     _______,   _______,   _______,  _______,    _______,      _______,  _______,  _______,   _______,
        _______,  _______,  _______,  _______,  _______,  _______,     _______,   _______,   _______,  _______,    _______,      _______,  _______,  RGB_VAI,
        _______,  _______,  _______,            _______,  _______,     _______,   _______,             _______,    _______,      _______,  RGB_SPD,  RGB_VAD,   RGB_SPI
    )
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [0] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_WH_L, KC_WH_R), ENCODER_CCW_CW(KC_WH_D, KC_WH_U), ENCODER_CCW_CW(KC_RIGHT, KC_LEFT) },
    [1] = { ENCODER_CCW_CW(RGB_HUD, RGB_HUI), ENCODER_CCW_CW(RGB_VAD, RGB_VAI), ENCODER_CCW_CW(RGB_SPD, RGB_SPI), ENCODER_CCW_CW(RGB_SAD, RGB_SAI) }
};
#endif

