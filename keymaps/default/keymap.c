#include "isode.h"
#include "keymap_extras/keymap_german_osx.h"

#define LAYER_BASE 0
#define LAYER_RSFT 1
#define LAYER_SPEC 3
#define LAYER_RGUI 2

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
 /* BASE
 * .-----.-----.-----.-----.-----.-----.-----.-----.-----.-----.-----.-----.------.
 * | ESC |  Q  |  W  |  E  |  R  |  T  |  Z  |  U  |  I  |  O  |  P  |  Ü  | ENTR |
 * |-----'.----'.----'.----'.----'.----'.----'.----'.----'.----'.----'.----'.-----|
 * | TAB  |  A  |  S  |  D  |  F  |  G  |  H  |  J  |  K  |  L  |  Ö  |  Ä  |  #  |
 * |------'--.--'--.--'--.--'--.--'--.--'--.--'--.--'--.--'--.--'--.--'--.--'-----|
 * | LSHIFT  |  Y  |  X  |  C  |  V  |  B  |  N  |  M  |  ,  |  .  |  -  | RSHIFT |
 * |------.--'---.-'-----+-----'-----'----.'-----'-----'--.--'----.'-----+--------|
 * | CTRL | LALT |  CMD  |      MOD       |     SPACE     |  CMD  | RALT |  LOCK  |
 * `------'------'-------'----------------'---------------'-------'------'--------'
 */
	[LAYER_BASE] = KEYMAP( /* Base */
		KC_ESC,   DE_OSX_Q, DE_OSX_W, DE_OSX_E, DE_OSX_R, DE_OSX_T, DE_OSX_Z, DE_OSX_U, DE_OSX_I,    DE_OSX_O,   DE_OSX_P,    DE_OSX_UE, KC_BSPACE, \
		KC_TAB,   DE_OSX_A, DE_OSX_S, DE_OSX_D, DE_OSX_F, DE_OSX_G, DE_OSX_H, DE_OSX_J, DE_OSX_K,    DE_OSX_L,   DE_OSX_OE,   DE_OSX_AE, KC_ENTER, \
		SFT_T(DE_OSX_LESS), DE_OSX_Y, DE_OSX_X, DE_OSX_C, DE_OSX_V, DE_OSX_B, DE_OSX_N, DE_OSX_M, DE_OSX_COMM, DE_OSX_DOT, DE_OSX_MINS, LT(LAYER_RSFT,KC_RABK), \
		KC_LCTRL, KC_LALT,  KC_LGUI,            LT(LAYER_SPEC,KC_SPC),        KC_SPC,                KC_RGUI, KC_RALT, KC_RCTRL \
	),

 /* BASE + MODIFIER
 * .-----.-----.-----.-----.-----.-----.-----.-----.-----.-----.-----.-----.------.
 * |  ^  |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  0  |  UP |  +   |
 * |-----'.----'.----'.----'.----'.----'.----'.----'.----'.----'.----'.----'.-----|
 * |      |RSET |     |     |     |     |     |     |     |     |LEFT |DOWN |RIGHT|
 * |------'--.--'--.--'--.--'--.--'--.--'--.--'--.--'--.--'--.--'--.--'--.--'-----|
 * |         |     |     |     |     |     |     |     |     |     |     |        |
 * |------.--'---.-'-----+-----'-----'----.'-----'-----'--.--'----.'-----+--------|
 * |      |      |       |                |               |       |      |        |
 * `------'------'-------'----------------'---------------'-------'------'--------'
 */
	[LAYER_SPEC] = KEYMAP( /* Base */
		DE_OSX_CIRC, DE_OSX_1, DE_OSX_2, DE_OSX_3, DE_OSX_4, DE_OSX_5, DE_OSX_6, DE_OSX_7, DE_OSX_8, DE_OSX_9, DE_OSX_0, KC_UP, DE_OSX_ACUT, \
		KC_TRNS,     RESET,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_LEFT,  KC_DOWN,   KC_RIGHT, \
		KC_TRNS,     KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS, \
		KC_TRNS,     KC_TRNS,  KC_TRNS,            KC_TRNS,                      KC_TRNS,            KC_TRNS,  KC_TRNS,  KC_TRNS \
	),

 /* BASE + R_SHIFT
 * .-----.-----.-----.-----.-----.-----.-----.-----.-----.-----.-----.-----.------.
 * |  °  |  !  |  "  |  §  |  $  |  %  |  &  |  &  |  (  |  )  |  =  |  ?  |  *   |
 * |-----'.----'.----'.----'.----'.----'.----'.----'.----'.----'.----'.----'.-----|
 * |      |     |     |     |     |     |     |     |     |     |     |     |  '  |
 * |------'--.--'--.--'--.--'--.--'--.--'--.--'--.--'--.--'--.--'--.--'--.--'-----|
 * |         |     |     |     |     |     |     |     |     |     |     |        |
 * |------.--'---.-'-----+-----'-----'----.'-----'-----'--.--'----.'-----+--------|
 * |      |      |       |                |               |       |      |        |
 * `------'------'-------'----------------'---------------'-------'------'--------'
 */
	[LAYER_RSFT] = KEYMAP( /* Base */
		LSFT(DE_OSX_CIRC), LSFT(DE_OSX_1), LSFT(DE_OSX_2), LSFT(DE_OSX_3), LSFT(DE_OSX_4), LSFT(DE_OSX_5), LSFT(DE_OSX_6), LSFT(DE_OSX_7), LSFT(DE_OSX_8), LSFT(DE_OSX_9), LSFT(DE_OSX_0), DE_OSX_QST, DE_OSX_PLUS, \
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, DE_OSX_QUOT, \
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, \
		KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS,                   KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS \
	),


 /* BASE + R_GUI
 * .-----.-----.-----.-----.-----.-----.-----.-----.-----.-----.-----.-----.------.
 * |     |     |     |     |     |     |     |  {  |  [  |  ]  |  }  |     |   ~  |
 * |-----'.----'.----'.----'.----'.----'.----'.----'.----'.----'.----'.----'.-----|
 * |      |     |     |     |     |     |     |     |     |     |     |     |     |
 * |------'--.--'--.--'--.--'--.--'--.--'--.--'--.--'--.--'--.--'--.--'--.--'-----|
 * |  PIPE   |     |     |     |     |     |     |     |     |     |     |        |
 * |------.--'---.-'-----+-----'-----'----.'-----'-----'--.--'----.'-----+--------|
 * |      |      |       |                |               |       |      |        |
 * `------'------'-------'----------------'---------------'-------'------'--------'
 */
	[LAYER_RGUI] = KEYMAP( /* Base */
		KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_LCBR, KC_LBRC, KC_RBRC, KC_RCBR, DE_OSX_BSLS, KC_TRNS, \
		KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS,     KC_TRNS,     KC_TRNS,     KC_TRNS,     KC_TRNS, \
		DE_OSX_PIPE, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS,     KC_TRNS,     KC_TRNS,     KC_TRNS, \
		KC_TRNS,     KC_TRNS, KC_TRNS,            KC_TRNS,                 KC_TRNS,     KC_TRNS,     KC_TRNS,     KC_TRNS \
	)

};

const uint16_t PROGMEM fn_actions[] = {

};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
	// MACRODOWN only works in this function
			switch(id) {
				case 0:
					if (record->event.pressed) {
						register_code(KC_RSFT);
					} else {
						unregister_code(KC_RSFT);
					}
				break;
			}
		return MACRO_NONE;
};


void matrix_init_user(void) {

}

void matrix_scan_user(void) {

}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	return true;
}

void led_set_user(uint8_t usb_led) {

}
