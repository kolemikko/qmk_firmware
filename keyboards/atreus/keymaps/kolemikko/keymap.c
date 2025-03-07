#include QMK_KEYBOARD_H

#define _COLEMAK 0
#define _LOWER 1
#define _RAISE 2
#define _MOVE 4
#define _SUPER 5
#define _FACTORIO 6
#define _ADJUST 7
#define _NUMPAD 8

#define XX     KC_NO
#define __     KC_TRNS

#define LOWER  MO(_LOWER)
#define RAISE  LT(_RAISE,KC_SPC)
#define MOVE   LT(_MOVE,KC_T)
#define SUPER  LT(_SUPER,KC_TAB)
#define NUMP   MO(_NUMPAD)
#define FACTORIO TG(_FACTORIO)
#define ADJUST MO(_ADJUST)

#define CBSPC  LCTL_T(KC_BSPC)
#define KC_SFZ LSFT_T(KC_Z)

//----------------------------------------------------------------------------------------------------

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_COLEMAK] = LAYOUT( \
  //,---------------------------------------.                 ,---------------------------------------.
        KC_Q,   KC_W,   KC_F,   KC_P,   KC_G,                     KC_J,   KC_L,   KC_U,   KC_Y,KC_SCLN, \
  //|-------+-------+-------+-------+-------|                 |-------+-------+-------+-------+-------|
        KC_A,   KC_R,   KC_S,   MOVE,   KC_D,                     KC_H,   KC_N,   KC_E,   KC_I,   KC_O,\
  //|-------+-------+-------+-------+-------|                 |-------+-------+-------+-------+-------|
      KC_SFZ,   KC_X,   KC_C,   KC_V,   KC_B,                     KC_K,   KC_M,KC_COMM, KC_DOT,KC_SLSH, \
  //|-------+-------+-------+-------+-------+-------|  |------+-------+-------+-------+-------+-------|
      KC_ESC,KC_LGUI,KC_LALT,  LOWER,  CBSPC,  SUPER,   KC_ENT,  RAISE,KC_LSFT,     XX,KC_VOLD,KC_VOLU \
  //|-------+-------+-------+-------+-------+-------|  |------+-------+-------+-------+-------+-------|
  ),

  [_RAISE] = LAYOUT( \
  //,---------------------------------------.                  ,---------------------------------------.
     KC_EXLM,  KC_AT,KC_HASH,KC_DLR, KC_PERC,                   KC_CIRC,KC_AMPR,KC_ASTR,KC_LPRN,KC_RPRN,\
  //|-------+-------+-------+-------+-------|                  |-------+-------+-------+-------+-------|
          __,     XX,     XX, KC_GRV,KC_PIPE,                   KC_DQUO,KC_MINS,KC_PLUS,KC_LBRC,KC_RBRC,\
  //|-------+-------+-------+-------+-------|                  |-------+-------+-------+-------+-------|
          XX,     XX,     XX,KC_TILD,KC_BSLS,                   KC_QUOT,KC_UNDS, KC_EQL,KC_LCBR,KC_RCBR, \
  //|-------+-------+-------+-------+-------+-------|  |-------+-------+-------+-------+-------+-------|
          __,     __,     __,     __,     __,     __,        __,     __,     __,     __,     __,     __ \
  //|-------+-------+-------+-------+-------+-------|  |-------+-------+-------+-------+-------+-------|
  ),

  [_LOWER] = LAYOUT( \
  //,----------------------------------------.                  ,---------------------------------------.
          XX,      XX,     XX,     XX,     XX,                        XX,  KC_F9, KC_F10, KC_F11, KC_F12,\
  //|-------+--------+-------+-------+-------|                  |-------+-------+-------+-------+-------|
          XX,      XX,     XX,     XX,     XX,                        XX,  KC_F5,  KC_F6,  KC_F7,  KC_F8, \
  //|-------+--------+-------+-------+-------|                  |-------+-------+-------+-------+-------|
          XX,      XX,     XX,     XX,     XX,                        XX,  KC_F1,  KC_F2,  KC_F3,  KC_F4,\
  //|-------+--------+-------+-------+-------+-------|  |-------+-------+-------+-------+-------+-------|
          __,      __,     __,     __,     __,     __,        __,     __,     __,     __,     __,     __ \
  //|-------+--------+-------+-------+-------+-------|  |-------+-------+-------+-------+-------+-------|
  ),


  [_SUPER] = LAYOUT( \
  //,---------------------------------------------.                  ,---------------------------------------------------.
  SGUI(KC_C),       __,       __,       __, KC_INS,                   KC_PGUP, LGUI(KC_7),  LGUI(KC_8),LGUI(KC_9),LGUI(KC_P),\
  //|-------+---------+---------+---------+-------|                  |-------+-----------+-----------+-----------+-------|
      __,SGUI(KC_R),LGUI(KC_ENT),SGUI(KC_ENT), KC_DEL,                KC_PGDN, LGUI(KC_4),  LGUI(KC_5),LGUI(KC_6),     __,\
  //|-------+---------+---------+---------+-------|                  |-------+-----------+-----------+-----------+-------|
          __,     __,     __,     __,     __,                      LGUI(KC_0), LGUI(KC_1),  LGUI(KC_2),LGUI(KC_3),     __,\
  //|-------+---------+---------+---------+-------+-------|  |-------+-------+-----------+-----------+-----------+-------|
          __,       __,       __,       __,     __,     __,    ADJUST,     __,         __,         __,         __,     __ \
  //|-------+---------+---------+---------+-------+-------|  |-------+-------+-----------+-----------+-----------+-------|
  ),
   
  [_NUMPAD] = LAYOUT( \
  //,---------------------------------------.                  ,---------------------------------------.
          XX,     XX,     XX,     XX,     XX,                        XX,   KC_7,   KC_8,   KC_9,     XX,\
  //|-------+-------+-------+-------+-------|                  |-------+-------+-------+-------+-------|
          XX,   NUMP,KC_LGUI,     __,     XX,                        XX,   KC_4,   KC_5,   KC_6,     XX,\
  //|-------+-------+-------+-------+-------|                  |-------+-------+-------+-------+-------|
          XX,     XX,     XX,     XX,     __,                      KC_0,   KC_1,   KC_2,   KC_3,     XX,\
  //|-------+-------+-------+-------+-------+-------|  |-------+-------+-------+-------+-------+-------|
          __,     __,     __,     __,     __,     __,        __,     __,     __,     __,     __,     __ \
  //|-------+-------+-------+-------+-------+-------|  |-------+-------+-------+-------+-------+-------|
  ),

  [_MOVE] = LAYOUT( \
  //,---------------------------------------.                  ,---------------------------------------.
          XX,     XX,     XX,     XX,     XX,                        XX,     XX,     XX,     XX,     XX,\
  //|-------+-------+-------+-------+-------|                  |-------+-------+-------+-------+-------|
          XX,   NUMP,KC_LGUI,     __,     XX,                        XX,KC_LEFT,KC_DOWN,  KC_UP,KC_RGHT,\
  //|-------+-------+-------+-------+-------|                  |-------+-------+-------+-------+-------|
          XX,     __,     XX,     XX,     XX,                        XX,     XX,     XX,     XX,     XX,\
  //|-------+-------+-------+-------+-------+-------|  |-------+-------+-------+-------+-------+-------|
          __,     __,     __,     __,     __,     __,        __,     __,     __,     __,     __,     __ \
  //|-------+-------+-------+-------+-------+-------|  |-------+-------+-------+-------+-------+-------|
  ),

  [_ADJUST] = LAYOUT( \
  //,-----------------------------------------.                  ,---------------------------------------.
       RESET,     XX, FACTORIO,     XX,     XX,                        XX,     XX,     XX,     XX,     XX,\
  //|-------+-------+---------+-------+-------|                  |-------+-------+-------+-------+-------|
          XX,     XX,       XX,     XX,     XX,                        XX,     XX,     XX,     XX,     XX,\
  //|-------+-------+---------+-------+-------|                  |-------+-------+-------+-------+-------|
          XX,     XX,       XX,     XX,     XX,                        XX,     XX,     XX,     XX,     XX,\
  //|-------+-------+---------+-------+-------+-------|  |-------+-------+-------+-------+-------+-------|
          __,      __,      __,     __,     __,     __,        __,     __,     __,     __,     __,     __ \
  //|-------+-------+---------+-------+-------+-------|  |-------+-------+-------+-------+-------+-------|
  ),

  [_FACTORIO] = LAYOUT( \
  //,---------------------------------------.                  ,---------------------------------------.
          __,   KC_W,   KC_E,     __,   KC_F,                      KC_1,   KC_2,   KC_3,   KC_4,   KC_5,\
  //|-------+-------+-------+-------+-------|                  |-------+-------+-------+-------+-------|
        KC_A,   KC_S,   KC_D,     __,   KC_R,                      KC_6,   KC_7,   KC_8,   KC_9,   KC_0,\
  //|-------+-------+-------+-------+-------|                  |-------+-------+-------+-------+-------|
          __,     __,     __,     __,     __,                        __,     __,     __,     __,     __,\
  //|-------+-------+-------+-------+-------+-------|  |-------+-------+-------+-------+-------+-------|
          __,     __,     __,     __,     __,     __,        __,     __,     __,     __,     __,     __ \
  //|-------+-------+-------+-------+-------+-------|  |-------+-------+-------+-------+-------+-------|
  ),
};
