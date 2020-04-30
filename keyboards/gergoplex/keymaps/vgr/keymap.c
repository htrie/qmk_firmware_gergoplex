#include QMK_KEYBOARD_H

#define BASE 0
#define SYMB 1
#define NUMB 2
#define ARRW 3

enum combos {
  WE,DF,
  IO,JK,
};

const uint16_t PROGMEM we_combo[] = {KC_W, KC_E, COMBO_END};
const uint16_t PROGMEM df_combo[] = {KC_D, KC_F, COMBO_END};
const uint16_t PROGMEM io_combo[] = {KC_I, KC_O, COMBO_END};
const uint16_t PROGMEM jk_combo[] = {KC_J, KC_K, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
  [WE] = COMBO(we_combo, KC_ESC),
  [DF] = COMBO(df_combo, KC_TAB),
  [IO] = COMBO(io_combo, KC_ENT),
  [JK] = COMBO(jk_combo, KC_BSPC),
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[BASE] = LAYOUT_gergoplex(
    KC_Q,               KC_W,               KC_E, KC_R, KC_T,    KC_Y, KC_U, KC_I,    KC_O,               KC_P, 
    MT(MOD_LCTL, KC_A), MT(MOD_LSFT, KC_S), KC_D, KC_F, KC_G,    KC_H, KC_J, KC_K,    MT(MOD_RSFT, KC_L), LT(ARRW, KC_SCLN),
    KC_Z,               KC_X,               KC_C, KC_V, KC_B,    KC_N, KC_M, KC_COMM, KC_DOT,             KC_SLSH,
                     MO(NUMB), MT(MOD_LCTL, KC_NO), MO(SYMB),    KC_SPC, MT(MOD_LALT, KC_NO), KC_LGUI
    ),
[SYMB] = LAYOUT_gergoplex(
    KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_LPRN,    KC_MINS, KC_7, KC_8, KC_9, KC_PLUS,
    KC_PIPE, KC_PERC, KC_AMPR, KC_RPRN, KC_LCBR,    KC_0,    KC_4, KC_5, KC_6, KC_ASTR,
    KC_CIRC, KC_TILD, KC_QUOT, KC_DQUO, KC_LBRC,    KC_DOT,  KC_1, KC_2, KC_3, KC_BSLS,
                      XXXXXXX, XXXXXXX, KC_TRNS,    KC_EQL,  KC_TRNS, KC_TRNS
    ),
[NUMB] = LAYOUT_gergoplex(
    KC_F1, KC_F2,  KC_F3,   KC_F4,   XXXXXXX,     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    KC_F5, KC_F6,  KC_F7,   KC_F8,   XXXXXXX,     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    KC_F9, KC_F10, KC_F11,  KC_F12,  XXXXXXX,     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                   XXXXXXX, KC_TRNS, XXXXXXX,     XXXXXXX, XXXXXXX, XXXXXXX
    ),
[ARRW] = LAYOUT_gergoplex(
    XXXXXXX,             XXXXXXX,             XXXXXXX,             XXXXXXX, KC_RPRN,     KC_PGUP,   KC_HOME, KC_UP,   KC_END,  XXXXXXX,
    MT(MOD_LCTL, KC_NO), MT(MOD_LSFT, KC_NO), MT(MOD_LALT, KC_NO), KC_TAB,  KC_RCBR,     KC_PGDOWN, KC_LEFT, KC_DOWN, KC_RGHT, KC_TRNS,
    XXXXXXX,             KC_TRNS,             KC_TRNS,             KC_TRNS, KC_RBRC,     XXXXXXX,   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                                                         XXXXXXX,  KC_TRNS, XXXXXXX,     XXXXXXX,   KC_TRNS, XXXXXXX
    )
};
