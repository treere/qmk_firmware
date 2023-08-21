#include QMK_KEYBOARD_H

const key_override_t delete_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_BSPC, KC_DEL);

// This globally defines all key overrides to be used
const key_override_t **key_overrides = (const key_override_t *[]){
    &delete_key_override,
    NULL // Null terminate the array of overrides!
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_split_3x6_3(KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_MINS, KC_LCTL, LGUI_T(KC_A), LALT_T(KC_S), LSFT_T(KC_D), LCTL_T(KC_F), KC_G, KC_H, RCTL_T(KC_J), RSFT_T(KC_K), LALT_T(KC_L), RGUI_T(KC_SCLN), KC_QUOT, CW_TOGG, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, TO(0), LT(3,KC_SPC), KC_BSPC, KC_ENT, TT(1), TT(2)),
	[1] = LAYOUT_split_3x6_3(KC_ESC, KC_CIRC, KC_LT, KC_AT, KC_GT, KC_PIPE, KC_PLUS, KC_LCBR, KC_SCLN, KC_RCBR, KC_TILD, KC_NO, KC_NO, KC_AMPR, KC_LBRC, KC_EXLM, KC_RBRC, KC_PERC, KC_MINS, KC_LPRN, KC_COLN, KC_RPRN, KC_DQUO, KC_NO, KC_NO, KC_GRV, KC_HASH, KC_DLR, KC_QUES, KC_BSLS, KC_ASTR, KC_EQL, KC_COMM, KC_DOT, KC_QUOT, KC_NO, TO(0), KC_SPC, KC_BSPC, KC_ENT, KC_TRNS, TT(2)),
	[2] = LAYOUT_split_3x6_3(KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_HOME, KC_PGUP, KC_UP, KC_PGDN, KC_END, KC_NO, KC_NO, KC_NO, KC_NO, KC_MUTE, KC_VOLD, KC_VOLU, KC_NO, KC_LEFT, KC_DOWN, KC_RGHT, KC_NO, KC_NO, TO(0), KC_SPC, KC_BSPC, KC_ENT, KC_NO, KC_NO),
	[3] = LAYOUT_split_3x6_3(KC_ESC, KC_ASTR, KC_1, KC_2, KC_3, KC_PLUS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_0, KC_4, KC_5, KC_6, KC_MINS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_SLSH, KC_7, KC_8, KC_9, KC_EQL, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_SPC, KC_BSPC, KC_ENT, KC_NO, KC_NO)
};
#if defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {

};
#endif // defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)




