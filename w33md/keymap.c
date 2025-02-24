#include QMK_KEYBOARD_H
#include "version.h"

enum custom_keycodes {
  RGB_SLD = EZ_SAFE_RANGE,
  MAC_SIRI,
};


enum tap_dance_codes {
  DANCE_0,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_ergodox_pretty(
    KC_BSLS,        DM_PLY1,        KC_2,           KC_3,           KC_4,           KC_5,           TD(DANCE_0),                                    KC_AUDIO_MUTE,  KC_6,           KC_7,           KC_8,           KC_9,           DM_REC1,        KC_EQUAL,
    KC_GRAVE,       KC_1,           KC_W,           KC_F,           KC_P,           KC_B,           LGUI(KC_RBRC),                                  KC_AUDIO_VOL_UP,KC_J,           KC_L,           KC_U,           KC_Y,           KC_0,           KC_MINUS,
    KC_TAB,         KC_Q,           KC_R,           KC_S,           KC_T,           KC_G,                                                                           KC_M,           KC_N,           KC_E,           KC_I,           KC_SCLN,        KC_DQUO,
    KC_ESCAPE,      KC_A,           KC_X,           KC_C,           KC_D,           KC_V,           LGUI(KC_LBRC),                                  KC_AUDIO_VOL_DOWN,KC_K,           KC_H,           KC_COMMA,       KC_DOT,         KC_O,           KC_QUOTE,
    KC_LEFT_SHIFT,  KC_Z,           KC_LEFT_CTRL,   KC_LEFT_ALT,    KC_LEFT_GUI,                                                                                                    MO(3),          MO(4),          MAC_SIRI,       KC_SLASH,       KC_RIGHT_SHIFT,
                                                                                                    KC_MS_BTN1,     KC_MS_BTN3,     KC_INSERT,      KC_DELETE,
                                                                                                                    KC_MS_BTN2,     KC_PSCR,
                                                                                    LT(1,KC_SPACE), KC_BSPC,        KC_UNDS,        KC_PIPE,        KC_ENTER,       LT(2,KC_SPACE)
  ),
  [1] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_KP_7,        KC_KP_8,        KC_KP_9,        KC_KP_MINUS,    KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_CIRC,        KC_AMPR,        KC_ASTR,        KC_TILD,        KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_COMMA,       KC_KP_4,        KC_KP_5,        KC_KP_6,        KC_KP_PLUS,                                                                     KC_AT,          KC_LCBR,        KC_RCBR,        KC_LPRN,        KC_COLN,        KC_TRANSPARENT,
    KC_TRANSPARENT, KC_KP_0,        KC_KP_1,        KC_KP_2,        KC_KP_3,        KC_KP_ENTER,    KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_LABK,        KC_RABK,        KC_LBRC,        KC_RBRC,        KC_RPRN,        KC_TRANSPARENT,
    KC_TRANSPARENT, KC_KP_DOT,      KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_PERC,        KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, RSFT(KC_W),     RSFT(KC_F),     RSFT(KC_P),     RSFT(KC_B),     KC_TRANSPARENT,                                 KC_TRANSPARENT, RSFT(KC_J),     RSFT(KC_L),     RSFT(KC_U),     RSFT(KC_Y),     KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, RSFT(KC_Q),     RSFT(KC_R),     RSFT(KC_S),     RSFT(KC_T),     RSFT(KC_G),                                                                     RSFT(KC_M),     RSFT(KC_N),     RSFT(KC_E),     RSFT(KC_I),     KC_EXLM,        KC_TRANSPARENT,
    KC_TRANSPARENT, RSFT(KC_A),     RSFT(KC_X),     RSFT(KC_C),     RSFT(KC_D),     RSFT(KC_V),     KC_TRANSPARENT,                                 KC_TRANSPARENT, RSFT(KC_K),     RSFT(KC_H),     KC_HASH,        KC_DLR,         RSFT(KC_O),     KC_TRANSPARENT,
    KC_TRANSPARENT, RSFT(KC_Z),     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_QUES,        KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_WH_LEFT,  KC_MS_UP,       KC_MS_WH_UP,    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_BTN1,     KC_MS_BTN3,     KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    KC_TRANSPARENT,                                                                 KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       KC_MS_BTN2,     KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_WH_RIGHT, KC_MS_DOWN,     KC_MS_WH_DOWN,  KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_HOME,        KC_PGDN,        KC_PAGE_UP,     KC_END,         KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [4] = LAYOUT_ergodox_pretty(
    RGB_TOG,        DM_REC2,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, DM_PLY2,        QK_BOOT,
    KC_NUM,         KC_TRANSPARENT, RGB_HUI,        RGB_SAI,        RGB_VAI,        KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_F7,          KC_F8,          KC_F9,          KC_TRANSPARENT, KC_TRANSPARENT,
    KC_CAPS,        RGB_SPI,        RGB_HUD,        RGB_SAD,        RGB_VAD,        KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_F4,          KC_F5,          KC_F6,          KC_F10,         KC_TRANSPARENT,
    KC_SCRL,        RGB_SPD,        RGB_MODE_FORWARD,RGB_SLD,        TOGGLE_LAYER_COLOR,KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_F1,          KC_F2,          KC_F3,          KC_F11,         KC_TRANSPARENT,
    KC_TRANSPARENT, LED_LEVEL,      KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_F12,         KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
};




bool suspended = false;

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case MAC_SIRI:
      HCS(0xCF);

    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
  }
  return true;
}

uint8_t layer_state_set_user(uint8_t state) {
    uint8_t layer = biton(state);
    ergodox_board_led_off();
    ergodox_right_led_1_off();
    ergodox_right_led_2_off();
    ergodox_right_led_3_off();
    switch (layer) {
      case 1:
        ergodox_right_led_1_on();
        break;
      case 2:
        ergodox_right_led_2_on();
        break;
      case 3:
        ergodox_right_led_3_on();
        break;
      case 4:
        ergodox_right_led_1_on();
        ergodox_right_led_2_on();
        break;
      case 5:
        ergodox_right_led_1_on();
        ergodox_right_led_3_on();
        break;
      case 6:
        ergodox_right_led_2_on();
        ergodox_right_led_3_on();
        break;
      case 7:
        ergodox_right_led_1_on();
        ergodox_right_led_2_on();
        ergodox_right_led_3_on();
        break;
      default:
        break;
    }
    return state;
};

void keyboard_post_init_user(void) {
  layer_state_set_user(layer_state);
}


typedef struct {
    bool is_press_action;
    uint8_t step;
} tap;

enum {
    SINGLE_TAP = 1,
    SINGLE_HOLD,
    DOUBLE_TAP,
    DOUBLE_HOLD,
    DOUBLE_SINGLE_TAP,
    MORE_TAPS
};

static tap dance_state[1];

uint8_t dance_step(tap_dance_state_t *state);

uint8_t dance_step(tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->interrupted || !state->pressed) return SINGLE_TAP;
        else return SINGLE_HOLD;
    } else if (state->count == 2) {
        if (state->interrupted) return DOUBLE_SINGLE_TAP;
        else if (state->pressed) return DOUBLE_HOLD;
        else return DOUBLE_TAP;
    }
    return MORE_TAPS;
}


void on_dance_0(tap_dance_state_t *state, void *user_data);
void dance_0_finished(tap_dance_state_t *state, void *user_data);
void dance_0_reset(tap_dance_state_t *state, void *user_data);

void on_dance_0(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LGUI(LSFT(KC_4)));
        tap_code16(LGUI(LSFT(KC_4)));
        tap_code16(LGUI(LSFT(KC_4)));
    }
    if(state->count > 3) {
        tap_code16(LGUI(LSFT(KC_4)));
    }
}

void dance_0_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[0].step = dance_step(state);
    switch (dance_state[0].step) {
        case SINGLE_TAP: register_code16(LGUI(LSFT(KC_4))); break;
        case SINGLE_HOLD: register_code16(LGUI(LSFT(KC_5))); break;
        case DOUBLE_TAP: register_code16(LGUI(LSFT(KC_3))); break;
        case DOUBLE_HOLD: register_code16(LCTL(LGUI(KC_ESCAPE))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LGUI(LSFT(KC_4))); register_code16(LGUI(LSFT(KC_4)));
    }
}

void dance_0_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[0].step) {
        case SINGLE_TAP: unregister_code16(LGUI(LSFT(KC_4))); break;
        case SINGLE_HOLD: unregister_code16(LGUI(LSFT(KC_5))); break;
        case DOUBLE_TAP: unregister_code16(LGUI(LSFT(KC_3))); break;
        case DOUBLE_HOLD: unregister_code16(LCTL(LGUI(KC_ESCAPE))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LGUI(LSFT(KC_4))); break;
    }
    dance_state[0].step = 0;
}

tap_dance_action_t tap_dance_actions[] = {
        [DANCE_0] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_0, dance_0_finished, dance_0_reset),
};
