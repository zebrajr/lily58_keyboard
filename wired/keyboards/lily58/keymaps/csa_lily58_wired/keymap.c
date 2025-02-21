#include QMK_KEYBOARD_H
#if __has_include("keymap.h")
#    include "keymap.h"
#endif


enum layer_number {
  _QWERTZ = 0,
  _FUNCTIONS = 1,
  _MEDIA = 2,
  _GAMING = 3,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* QWERTZ
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * | ESC  |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  |  ß   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Tab  |   Q  |   W  |   E  |   R  |   T  |                    |   Z  |   U  |   I  |   O  |   P  |  +   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |LShift|   A  |   S  |   D  |   F  |   G  |-------.    ,-------|   H  |   J  |   K  |   L  |   ´  |  #   |
 * |------+------+------+------+------+------|  MO(1)|    | MO(2) |------+------+------+------+------+------|
 * |LCtrl |   Y  |   X  |   C  |   V  |   B  |-------|    |-------|   N  |   M  |   ,  |   .  |   -  |RShift|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   | LGUI | LAlt | Del  | /Space  /       \Enter \  |BackSP| TC(3)| RAlt |
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */
    [_QWERTZ] = LAYOUT(
            KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5,                               KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS,
            KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T,                               KC_Y, KC_U, KC_I, KC_O, KC_P, KC_RBRC,
            KC_LSFT, KC_A, KC_S, KC_D, KC_F, KC_G,                              KC_H, KC_J, KC_K, KC_L, KC_EQL, KC_BSLS,
            KC_LCTL, KC_Z, KC_X, KC_C, KC_V, KC_B, MO(1),      MO(2), KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT,
                            KC_LGUI, KC_LALT, KC_DEL, KC_SPC,    KC_ENT, KC_BSPC, TG(3), KC_RALT),

/* FUNCTIONS
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |   ^  |   !  |   "  |   §  |   $  |   %  |                    |   &  |   /  |   (  |   )  |   =  |   ?  |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |                    |  F7  |  F8  |  F9  | F10  | F11  | F12  |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |LShift|CapsLO|PriScr|Delete| Home |PageUp|-------.    .-------| Left | Down |  Up  | Right|      |      |
 * |------+------+------+------+------+------|  Mo(1)|    | MO(2) |------+------+------+------+------+------|
 * |LCtrl |ScrLoc| Pause|Insert| End  |PageDo|-------|    |-------|   Ü  |   Ö  |   Ä  |      |      |RShift|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   | LAlt | LGUI | Del  | /Space  /       \Enter \  |BackSP| TC(3)| RAlt |
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */
    [_FUNCTIONS] = LAYOUT(
            KC_GRV, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC,                       KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_NUBS,
            KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6,                               KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12,
            KC_LSFT, KC_CAPS, KC_PSCR, KC_DEL, KC_HOME, KC_PGUP,                    KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_NO, KC_NO,
            KC_LCTL, KC_SCRL, KC_PAUS, KC_INS, KC_END, KC_PGDN, MO(1),             MO(2), KC_LBRC, KC_SCLN, KC_QUOT, KC_NO, KC_NO, KC_RSFT,
                                            KC_LGUI, KC_LALT, KC_DEL, KC_SPC,    KC_ENT, KC_BSPC, TG(3), KC_RALT),


/* MEDIA
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |      |      |      |      |      |                    |RGBTog|RGBMoN|RGBHUI|RGBSAI|RGBVAI|RGBSPI|
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |      |VolUp |      |      |                    |      |RGBMoP|RGBHUD|RGBSAD|RGBVAD|RGBSPD|
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |LShift|MePrev|MeStop|MePlay|MeNext|      |-------.    .-------|      |      |      |      |      |      |
 * |------+------+------+------+------+------|  Mo(1)|    | MO(2) |------+------+------+------+------+------|
 * |LCtrl |      |      |VolDow|      |      |-------|    |-------|      |      |      |      |      |RShift|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   | LAlt | LGUI | Del  | /Space  /       \Enter \  |BackSP| TC(3)| RAlt |
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */
    [_MEDIA] = LAYOUT(
            KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                                       RGB_TOG, RGB_MOD, RGB_HUI, RGB_SAI, RGB_VAI, RGB_SPI,
            KC_NO, KC_NO, KC_NO, KC_KB_VOLUME_UP, KC_NO, KC_NO,                             KC_NO, RGB_RMOD, RGB_HUD, RGB_SAD, RGB_VAD, RGB_SPD,
            KC_LSFT, KC_MPRV, KC_MSTP, KC_MPLY, KC_MNXT, KC_NO,                             KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
            KC_LCTL, KC_NO, KC_NO, KC_KB_VOLUME_DOWN, KC_NO, KC_NO, MO(1),             MO(2), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_RSFT,
                                            KC_LGUI, KC_LALT, KC_DEL, KC_SPC,      KC_ENT, KC_BSPC, TG(3), KC_RALT),





/* GAMING
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * | Esc  |   1  |   2  |   3  |   4  |   5  |                    |   6  |  7   |   8  |   9  |   0  |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Tab  |      |  Up  |      |      |      |                    |   Y  |  U   |  I   |  O   |   P  |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |LShift| Left | Down |Right |      |      |-------.    .-------|   H  |  J   |  K   |  L   |      |      |
 * |------+------+------+------+------+------|  TO(0)|    | TO(0) |------+------+------+------+------+------|
 * |LCtrl |      |      |      |      |      |-------|    |-------|      |      |      |      |      |RShift|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   | LAlt | LGUI | Del  | /Space  /       \Enter \  |BackSP| TC(0)| RAlt |
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */

    [_GAMING] = LAYOUT(
            KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5,                           KC_6, KC_7, KC_8, KC_9, KC_0, KC_NO,
            KC_TAB, KC_NO, KC_UP, KC_NO, KC_NO, KC_NO,                      KC_Y, KC_U, KC_I, KC_O, KC_P, KC_NO,
            KC_LSFT, KC_LEFT, KC_DOWN, KC_RGHT, KC_NO, KC_NO,               KC_H, KC_J, KC_K, KC_L, KC_NO, KC_NO,
            KC_LCTL, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, TO(0),         TO(0), KC_N, KC_M, KC_NO, KC_NO, KC_NO, KC_RSFT,
                        KC_LGUI, KC_LALT, KC_DEL, KC_SPC,        KC_ENT, KC_BSPC, TO(0), KC_RALT)
};



#ifdef OTHER_KEYMAP_C
#    include OTHER_KEYMAP_C
#endif // OTHER_KEYMAP_C


//SSD1306 OLED update loop, make sure to enable OLED_ENABLE=yes in rules.mkhttps://www.caniusevia.com/
#ifdef OLED_ENABLE

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
  return OLED_ROTATION_270;  // flips the display 180 degrees if offhand
  if (is_keyboard_master()) {
  }
}

// When you add source files to SRC in rules.mk, you can use functions.
const char *read_layer_state(void);
const char *read_logo(void);
void set_keylog(uint16_t keycode, keyrecord_t *record);
const char *read_keylog(void);
const char *read_keylogs(void);

// const char *read_mode_icon(bool swap);
// const char *read_host_led_state(void);
// void set_timelog(void);
// const char *read_timelog(void);

// logo
static void render_logo(void) {
    static const char PROGMEM qmk_logo[] = {
        153,154,10,
        185,186,0
    };
    oled_write_P(qmk_logo, false);

    oled_write_raw_P(qmk_logo, sizeof(qmk_logo));    oled_advance_page(true);
}

static void left_oled_display(void) {
    oled_write_ln_P(PSTR("Layer"), false);
    switch (get_highest_layer(layer_state)) {
        case _QWERTZ:
            oled_write_ln_P(PSTR("BASE"), false);
            break;
        case _FUNCTIONS:
            oled_write_ln_P(PSTR("FN"), false);
            break;
        case _MEDIA:
            oled_write_ln_P(PSTR("MEDIA"), false);
            break;
        case _GAMING:
            oled_write_ln_P(PSTR("GAMING"), false);
            break;
        default:
            // Or use the write_ln shortcut over adding '\n' to the end of your string
            oled_write_ln_P(PSTR("Undefined"), false);
    }
    oled_advance_page(true);

    // Host Keyboard LED Status
    led_t led_state = host_keyboard_led_state();
    oled_write_ln_P(led_state.num_lock ? PSTR("NUM ") : PSTR("    "), false);
    oled_write_ln_P(led_state.caps_lock ? PSTR("CAP ") : PSTR("    "), false);
    oled_write_ln_P(led_state.scroll_lock ? PSTR("SCR ") : PSTR("    "), false);
}

static void right_oled_display(void){
    render_logo();
    oled_scroll_left();
}


bool oled_task_user(void) {
    if (is_keyboard_master()) {
        left_oled_display();
    }

    if(!is_keyboard_master()){
        right_oled_display();
    }
    return false;
}

//bool oled_task_user(void) {
//  if (is_keyboard_master()) {
//    // If you want to change the display of OLED, you need to change here
//    oled_write_ln(read_layer_state(), false);
//    oled_write_ln(read_keylog(), false);
//    oled_write_ln(read_keylogs(), false);
//  } else {
//    oled_write(read_logo(), false);
//  }
//    return false;
//}



#endif // OLED_ENABLE

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (record->event.pressed) {
#ifdef OLED_ENABLE
    set_keylog(keycode, record);
#endif
    // set_timelog();
  }
  return true;
}
