#include QMK_KEYBOARD_H


/* THIS FILE WAS GENERATED!
 *
 * This file was generated by qmk json2c. You may or may not want to
 * edit it directly.
 */


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_split_3x6_3(KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_MINS, KC_LCTL, LGUI_T(KC_A), LALT_T(KC_S), LSFT_T(KC_D), LCTL_T(KC_F), KC_G, KC_H, RCTL_T(KC_J), RSFT_T(KC_K), LALT_T(KC_L), RGUI_T(KC_SCLN), KC_QUOT, KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, LT(3,KC_M), KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_LGUI, LSFT_T(KC_SPC), LALT_T(KC_ENT), LT(2,KC_DEL), LT(1,KC_BSPC), TO(1)),
	[1] = LAYOUT_split_3x6_3(KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_GRV, KC_LCTL, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_BSLS, KC_LSFT, KC_EQL, KC_PLUS, KC_QUOT, KC_LBRC, KC_RBRC, KC_LCBR, KC_RCBR, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, TO(0), LSFT_T(KC_SPC), LALT_T(KC_ENT), LT(2,KC_DEL), LT(1,KC_BSPC), TO(2)),
	[2] = LAYOUT_split_3x6_3(KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_LCTL, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_HOME, KC_PGUP, KC_UP, KC_PGDN, KC_END, KC_NO, KC_LSFT, KC_NO, KC_NO, KC_MUTE, KC_VOLD, KC_VOLU, KC_NO, KC_LEFT, KC_DOWN, KC_RGHT, KC_NO, KC_RSFT, TO(0), LSFT_T(KC_SPC), LALT_T(KC_ENT), LT(2,KC_DEL), LT(1,KC_BSPC), KC_NO),
	[3] = LAYOUT_split_3x6_3(KC_NO, KC_ASTR, KC_1, KC_2, KC_3, KC_PLUS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_0, KC_4, KC_5, KC_6, KC_MINS, KC_NO, KC_NO, KC_EQL, KC_ASTR, KC_SLSH, KC_NO, KC_NO, KC_SLSH, KC_7, KC_8, KC_9, KC_EQL, KC_NO, KC_NO, KC_COMM, KC_DOT, KC_NO, KC_NO, KC_NO, KC_SPC, KC_ENT, KC_NO, KC_NO, KC_NO)
};

#if defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {

};
#endif // defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)




