#include QMK_KEYBOARD_H

#define BASE 0
#define SYMB 1
#define NUMB 2
#define ARRW 3

enum combos {
	WE,AS,SD,DF,XC,CV,ER,
	UI,IO,JK,KL,MC,NM,CD,
};

const uint16_t PROGMEM we_combo[] = {KC_W, KC_E, COMBO_END};
const uint16_t PROGMEM sd_combo[] = {KC_S, KC_D, COMBO_END};
const uint16_t PROGMEM df_combo[] = {KC_D, KC_F, COMBO_END};
const uint16_t PROGMEM xc_combo[] = {KC_X, KC_C, COMBO_END};
const uint16_t PROGMEM cv_combo[] = {KC_C, KC_V, COMBO_END};
const uint16_t PROGMEM er_combo[] = {KC_E, KC_R, COMBO_END};

const uint16_t PROGMEM ui_combo[] = {KC_U, KC_I, COMBO_END};
const uint16_t PROGMEM io_combo[] = {KC_I, KC_O, COMBO_END};
const uint16_t PROGMEM jk_combo[] = {KC_J, KC_K, COMBO_END};
const uint16_t PROGMEM kl_combo[] = {KC_K, KC_L, COMBO_END};
const uint16_t PROGMEM mc_combo[] = {KC_M, KC_COMM, COMBO_END};
const uint16_t PROGMEM cd_combo[] = {KC_COMM, KC_DOT, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
  [WE] = COMBO(we_combo, KC_ESC),
  [ER] = COMBO(er_combo, KC_ENT),
  [SD] = COMBO(sd_combo, KC_BSPC),
  [DF] = COMBO(df_combo, KC_TAB),
  [XC] = COMBO(xc_combo, KC_MINS),
  [CV] = COMBO(cv_combo, KC_NO),

  [UI] = COMBO(ui_combo, KC_ESC),
  [IO] = COMBO(io_combo, KC_ENT),
  [JK] = COMBO(jk_combo, KC_COLN),
  [KL] = COMBO(kl_combo, KC_BSPC),
  [MC] = COMBO(mc_combo, KC_UNDS),
  [CD] = COMBO(cd_combo, KC_DQUO),
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[BASE] = LAYOUT_gergoplex(
    KC_Q,  			 			  KC_W, KC_E, KC_R, KC_T,  	KC_Y, KC_U, KC_I,    KC_O, 	 KC_P, 
    MT(MOD_LCTL, KC_A), KC_S, KC_D, KC_F, KC_G,  	KC_H, KC_J, KC_K,    KC_L, 	 LT(ARRW, KC_SCLN),
    MT(MOD_LSFT, KC_Z), KC_X, KC_C, KC_V, KC_B,  	KC_N, KC_M, KC_COMM, KC_DOT, MT(MOD_RSFT, KC_SLSH),
 		 KC_LGUI, MT(MOD_RCTL, KC_NO), MO(SYMB),    KC_SPC, MO(NUMB), MT(MOD_RALT, KC_NO)
    ),
[SYMB] = LAYOUT_gergoplex(
    KC_EXLM, KC_AT,   KC_LCBR, KC_RCBR, KC_PIPE,   KC_GRV,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    KC_HASH, KC_DLR,  KC_LPRN, KC_RPRN, KC_AMPR,   KC_PLUS, KC_MINS, KC_SLSH, KC_ASTR, KC_QUOT,
    KC_PERC, KC_CIRC, KC_LBRC, KC_RBRC, KC_TILD,   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_BSLS,
                      XXXXXXX, XXXXXXX, KC_TRNS,   KC_EQL,  XXXXXXX, XXXXXXX
    ),
[NUMB] = LAYOUT_gergoplex(
    KC_F1, KC_F2,  KC_F3,   KC_F4,   XXXXXXX,     KC_PPLS, KC_7, KC_8, KC_9, KC_PMNS,
    KC_F5, KC_F6,  KC_F7,   KC_F8,   XXXXXXX,     KC_0,    KC_4, KC_5, KC_6, KC_PAST,
    KC_F9, KC_F10, KC_F11,  KC_F12,  XXXXXXX,     KC_DOT,  KC_1, KC_2, KC_3, KC_PSLS,
                   XXXXXXX, KC_TRNS, XXXXXXX,     XXXXXXX, KC_TRNS, KC_TRNS
    ),
[ARRW] = LAYOUT_gergoplex(
    XXXXXXX,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,     KC_PGUP,   KC_HOME, KC_UP,   KC_END, XXXXXXX,
    KC_TRNS,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,     KC_PGDOWN, KC_LEFT, KC_DOWN, KC_RGHT, KC_TRNS,
    KC_TRNS,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,     XXXXXXX,   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                      XXXXXXX, XXXXXXX, XXXXXXX,     XXXXXXX, XXXXXXX, XXXXXXX
    )
};
