#include QMK_KEYBOARD_H
#include "timer.h"
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
 * |------+------+------+------+------+------| MO(1) |    | MO(2) |------+------+------+------+------+------|
 * |LCtrl |   Y  |   X  |   C  |   V  |   B  |-------|    |-------|   N  |   M  |   ,  |   .  |   -  |RShift|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   | LGUI | LAlt |  DEL | / Space /       \Enter \  | BSPC | GAlt | TG(3)|
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */
    [_QWERTZ] = LAYOUT(
            KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5,                               KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS,
            KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T,                               KC_Y, KC_U, KC_I, KC_O, KC_P, KC_RBRC,
            KC_LSFT, KC_A, KC_S, KC_D, KC_F, KC_G,                              KC_H, KC_J, KC_K, KC_L, KC_EQL, KC_BSLS,
            KC_LCTL, KC_Z, KC_X, KC_C, KC_V, KC_B, MO(1),      MO(2), KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT,
                            KC_LGUI, KC_LALT, KC_DEL, KC_SPC,    KC_ENT, KC_BSPC, KC_RALT, TG(3)),

/* FUNCTIONS
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |   ^  |   !  |   "  |   §  |   $  |   %  |                    |   &  |   /  |   (  |   )  |   =  |   ?  |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |                    |  F7  |  F8  |  F9  | F10  | F11  | F12  |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |LShift|CapsLO|PriScr|Delete| Home |PageUp|-------.    .-------| Left | Down |  Up  | Right|      |      |
 * |------+------+------+------+------+------| MO(1) |    | MO(2)|------+------+------+------+------+------|
 * |LCtrl |ScrLoc| Pause|Insert| End  |PageDo|-------|    |-------|   Ü  |   Ö  |   Ä  |      |      |RShift|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   | LGUI | LAlt | DEL  | / Space /       \Enter \  | BSPC | GAlt | TG(3)|
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */
    [_FUNCTIONS] = LAYOUT(
            KC_GRV, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC,                       KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_NUBS,
            KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6,                               KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12,
            KC_LSFT, KC_CAPS, KC_PSCR, KC_DEL, KC_HOME, KC_PGUP,                    KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_NO, KC_NO,
            KC_LCTL, KC_SCRL, KC_PAUS, KC_INS, KC_END, KC_PGDN, MO(1),             MO(2), KC_LBRC, KC_SCLN, KC_QUOT, KC_NO, KC_NO, KC_RSFT,
                                            KC_LGUI, KC_LALT, KC_DEL, KC_SPC,    KC_ENT, KC_BSPC, KC_RALT, TG(3)),


/* MEDIA
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |      |      |      |      |      |                    |RGBTog|RGBMoN|RGBHUI|RGBSAI|RGBVAI|RGBSPI|
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |      |VolUp |      |      |                    |      |RGBMoP|RGBHUD|RGBSAD|RGBVAD|RGBSPD|
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |LShift|MePrev|MeStop|MePlay|MeNext|      |-------.    .-------|      |      |      |      |      |      |
 * |------+------+------+------+------+------| MO(1) |    | MO(2) |------+------+------+------+------+------|
 * |LCtrl |      |      |VolDow|      |      |-------|    |-------|      |      |      |      |      |RShift|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   | LGUI | LAlt |  DEL |  /Space /       \Enter \  | BSPC | GAlt | TG(3)|
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */
    [_MEDIA] = LAYOUT(
            KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                                       RGB_TOG, RGB_MOD, RGB_HUI, RGB_SAI, RGB_VAI, RGB_SPI,
            KC_NO, KC_NO, KC_NO, KC_KB_VOLUME_UP, KC_NO, KC_NO,                             KC_NO, RGB_RMOD, RGB_HUD, RGB_SAD, RGB_VAD, RGB_SPD,
            KC_LSFT, KC_MPRV, KC_MSTP, KC_MPLY, KC_MNXT, KC_NO,                             KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
            KC_LCTL, KC_NO, KC_NO, KC_KB_VOLUME_DOWN, KC_NO, KC_NO, MO(1),             MO(2), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_RSFT,
                                            KC_LGUI, KC_LALT, KC_DEL, KC_SPC,      KC_ENT, KC_BSPC, KC_RALT, TG(3)),





/* GAMING
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * | Esc  |   1  |   2  |   3  |   4  |   5  |                    |   6  |  7   |   8  |   9  |   0  |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Tab  |      |  Up  |      |      |      |                    |   Y  |  U   |  I   |  O   |   P  |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |LShift| Left | Down |Right |      |      |-------.    .-------|   H  |  J   |  K   |  L   |      |      |
 * |------+------+------+------+------+------| TG(3) |    | TG(3) |------+------+------+------+------+------|
 * |LCtrl |      |      |      |      |      |-------|    |-------|   N  |  M   |      |      |      |RShift|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   | LGUI | LAlt |  DEL | /Space  /       \Enter \  | LAlt | GAlt | TG(3)|
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */

    [_GAMING] = LAYOUT(
            KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5,                           KC_6, KC_7, KC_8, KC_9, KC_0, KC_NO,
            KC_TAB, KC_NO, KC_UP, KC_NO, KC_NO, KC_NO,                      KC_Y, KC_U, KC_I, KC_O, KC_P, KC_NO,
            KC_LSFT, KC_LEFT, KC_DOWN, KC_RGHT, KC_NO, KC_NO,               KC_H, KC_J, KC_K, KC_L, KC_NO, KC_NO,
            KC_LCTL, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, TG(3),         TG(3), KC_N, KC_M, KC_NO, KC_NO, KC_NO, KC_RSFT,
                        KC_LGUI, KC_LALT, KC_DEL, KC_SPC,        KC_ENT, KC_RALT, KC_RALT, TG(3))
};


#ifdef OLED_ENABLE

// rotate the screen
oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    // make the screen face the user
    return OLED_ROTATION_270;
}

// elapsed time module
// #include "modules/elapsed_time/elapsed.time.h"
// void matrix_scan_user(void) {
//     elapsed_time_update();
// }


// variable to track last layer
// initiated to invalid value
static uint8_t last_layer = 255;

// Function to display the current layer state
static void render_layer_state(void) {
    oled_advance_page(false);
    switch (get_highest_layer(layer_state)) {
        case _QWERTZ:
            oled_write_ln_P(PSTR("Base"), false);
            break;
        case _FUNCTIONS:
            oled_write_ln_P(PSTR("Fn"), false);
            break;
        case _MEDIA:
            oled_write_ln_P(PSTR("Media"), false);
            break;
        case _GAMING:
            oled_write_ln_P(PSTR("Gaming"), false);
            break;
        default:
            oled_write_ln_P(PSTR("Undefined"), false);
    }
}

// Function to display the status of the keyboard LEDs
static void render_led_state(void) {
    led_t led_state = host_keyboard_led_state();
    oled_write_ln_P(led_state.num_lock ? PSTR("NUM ") : PSTR("    "), false);
    oled_write_ln_P(led_state.caps_lock ? PSTR("CAP ") : PSTR("    "), false);
    oled_write_ln_P(led_state.scroll_lock ? PSTR("SCR ") : PSTR("    "), false);
}
// display current WPM
#include "modules/wpm_render/wpm_render.c"

// Function to display a custom cat logo
static void render_logo(void) {
    static const char PROGMEM raw_logo[] = {
        0,192,240,248,127, 31, 31, 14, 30, 28,124,248,240,192,  0,  0,  0,  0,  0,  0,  0,  0,  0,128,128,128,128,128,  0,  0,  0,  0,  0,  3,  7,231,254,254, 62,  0,  0,  0,  0, 15, 31, 31, 60, 56,120,112,240,224,192,254,255,255,131,  3,  3,231,255,255, 28,  0,  0,  0,  0,  3, 15, 31,254,252,240,128,  0,  0,  0,  0,  0,  0,  0,  0,  0,  3,255,255,255,  7, 31, 62,124,240,225,192,  0,  0,  0,  0,  0,  0,  0,248,255,255,207,225,224,224,224,224,224,224,224,224,224,240,255,255,223,192,224,224,240,127,127, 31,  0,  0,    };
    oled_write_raw_P(raw_logo, sizeof(raw_logo));
}

// Function to handle the left OLED display
static void left_oled_display(void) {
    // render_elapsed_time();
    render_layer_state();  // Display the current layer
    render_led_state();  // Display LED status
}

// Function to handle the right OLED display
static void right_oled_display(void) {
    render_wpm();
    render_layer_state();
    render_logo();
}

// Main OLED task function
bool oled_task_user(void) {
    const uint8_t current_layer = get_highest_layer(layer_state);
    if (current_layer != last_layer){
        oled_clear();
        last_layer = current_layer;
    }

    if (is_keyboard_master()) {
        left_oled_display();
    }
    if (!is_keyboard_master()){
        right_oled_display();
    }
    return false;
}

#endif // OLED_ENABLE

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (record->event.pressed) {
#ifdef OLED_ENABLE
        // You can add keylog functionality here if needed
#endif
    }
    return true;
}
