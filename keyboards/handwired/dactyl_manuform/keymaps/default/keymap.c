#include "dactyl_manuform.h"
#include "action_layer.h"
#include "eeconfig.h"

extern keymap_config_t keymap_config;

#define _BASE 0
#define _RAISE 1
#define _LOWER 2

// Fillers to make layering more clear

#define ____ KC_TRNS

#define SFT_ESC  SFT_T(KC_ESC)
#define CTL_BSPC CTL_T(KC_BSPC)
#define ALT_SPC  ALT_T(KC_SPC)
#define SFT_ENT  SFT_T(KC_ENT)

#define KC_ML KC_MS_LEFT
#define KC_MR KC_MS_RIGHT
#define KC_MU KC_MS_UP
#define KC_MD KC_MS_DOWN
#define KC_MB1 KC_MS_BTN1
#define KC_MB2 KC_MS_BTN1

#define RAISE MO(_RAISE)
#define LOWER MO(_LOWER)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_BASE] = LAYOUT( \
  KC_F1,   KC_F2,KC_F3,KC_F4,   KC_F5,   KC_F6,                                      KC_F7,KC_F8,   KC_F9,   KC_F10, KC_F11,  KC_F12,                              
  KC_ESC,  KC_1, KC_2, KC_3,    KC_4,    KC_5,                                       KC_6, KC_7,    KC_8,    KC_9,   KC_0,    KC_BSPC,\
  KC_TAB , KC_Q, KC_W, KC_E,    KC_R,    KC_T,                                       KC_Y, KC_U,    KC_I,    KC_O,   KC_P,    KC_MINS,   \
  KC_LSFT, KC_A, KC_S, KC_D,    KC_F,    KC_G,                                       KC_H, KC_J,    KC_K,    KC_L,   KC_SCLN, KC_QUOT, \
  KC_LCTL, KC_Z, KC_X, KC_C,    KC_V,    KC_B,                                       KC_N, KC_M,    KC_COMM, KC_DOT, KC_SLSH, KC_BSLASH,  \
                KC_LBRC, KC_RBRC,                                                           KC_PLUS, KC_EQL,                   \
                                                 RAISE,              LOWER,                                          \
                                               KC_SPC,  KC_BSPC,   KC_DEL,  KC_LALT,                                           \
                                               KC_HOME,   KC_LGUI,    KC_ENT, KC_END
),

[_RAISE] = LAYOUT( \
  KC_F1,   KC_F2,KC_F3,KC_F4,   KC_F5,   KC_F6,                                      KC_F7,KC_F8,   KC_F9,   KC_F10, KC_F11,  KC_F12,    
  KC_F1,   KC_F2,KC_F3,KC_F4,   KC_F5,   KC_F6,                                      KC_F7,KC_F8,   KC_F9,   KC_F10, KC_F11,  KC_F12,                                
  KC_EQL,  KC_1, KC_2, KC_3,    KC_4,    KC_5,                                       KC_6, KC_7,    KC_8,    KC_9,   KC_0,    KC_MINS,\
  KC_TILD,KC_EXLM, KC_AT ,KC_HASH,KC_DLR ,KC_PERC,                                  KC_CIRC,KC_AMPR,KC_ASTR,KC_LPRN,KC_RPRN,KC_DEL,
     _______,KC_HOME,KC_PGUP,KC_PGDN,KC_END ,KC_LPRN,                               KC_RPRN, KC_P4 , KC_P5 , KC_P6 ,KC_MINS,KC_PIPE,
              KC_LBRC, KC_RBRC,                                                           KC_MINS, KC_EQL,                   \
                                                 RAISE,              LOWER,                                          \
                                               KC_SPC,  KC_BSPC,   KC_DEL,  KC_ENT,                                           \
                                               KC_HOME,   RESET,    KC_LALT, KC_END
),

[_LOWER] = LAYOUT( \
  KC_F1,   KC_F2,KC_F3,KC_F4,   KC_F5,   KC_F6,                                      KC_F7,KC_F8,   KC_F9,   KC_F10, KC_F11,  KC_F12,    
  KC_F1,   KC_F2,KC_F3,KC_F4,   KC_F5,   KC_F6,                                      KC_F7,KC_F8,   KC_F9,   KC_F10, KC_F11,  KC_F12,   
  KC_F1,   KC_F2,KC_F3,KC_F4,   KC_F5,   KC_F6,                                      KC_F7,KC_F8,   KC_F9,   KC_F10, KC_F11,  KC_F12,  
       _______,KC_LEFT,KC_UP  ,KC_DOWN,KC_RGHT,KC_LPRN,                        KC_RPRN,KC_MPRV,KC_MPLY,KC_MNXT,_______,KC_VOLU,
    KC_TILD,KC_EXLM, KC_AT ,KC_HASH,KC_DLR ,KC_PERC,                        KC_CIRC,KC_AMPR,KC_ASTR,KC_LPRN,KC_RPRN,KC_DEL,
              KC_LBRC, KC_RBRC,                                                           KC_MINS, KC_EQL,                   \
                                                 RAISE,              LOWER,                                          \
                                               KC_SPC,  KC_BSPC,   KC_DEL,  KC_ENT,                                           \
                                               KC_HOME,   RESET,    KC_LALT, KC_END
),
};

void persistent_default_layer_set(uint16_t default_layer) {
  eeconfig_update_default_layer(default_layer);
  default_layer_set(default_layer);
}

