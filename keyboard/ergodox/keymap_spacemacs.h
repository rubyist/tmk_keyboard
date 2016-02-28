static const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    KEYMAP(
        // left hand
        ESC,    1,   2,   3,    4,  5,   NO,
        TAB,    Q,   W,   E,    R,  T,  EQL,
        FN12,   A,   S,   D,    F,  G,
        FN10,   Z,   X,   C,    V,  B, MINS,
          NO, FN5, FN2, FN1, LGUI,
                                          NO,   NO,
                                                NO,
                                   BSPC, FN0, NO,
        // right hand
         GRV,  6,  7,     8,     9,     0,    NO,
        BSLS,  Y,  U,     I,     O,     P,  BSLS,
           H,  J,  K,     L,  SCLN,  FN13,
        QUOT,  N,  M,  COMM,   DOT,  SLSH,  FN11,
                 FN9,   FN4,   FN3,   FN6,  FN14,
        NO,    NO,
        NO,
        RGUI, ENT, SPC
    ),

    KEYMAP(  // Layer1 
           // left hand
           TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,
           TRNS, MS_L, MS_U, MS_D, MS_R, TRNS, TRNS,
           TRNS, VOLD, VOLU, MUTE, TRNS, TRNS,
           TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,
           TRNS, TRNS, TRNS, TRNS, TRNS,
                                                      TRNS, TRNS,
                                                            TRNS,
                                                TRNS, TRNS, TRNS,
           // right hand
           TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,
           TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,
           TRNS, TRNS, PGDN,   UP, PGUP, TRNS,
           TRNS, TRNS, TRNS, LEFT, TRNS, RIGHT, TRNS,
                 TRNS, TRNS, DOWN, TRNS, TRNS,
           TRNS, TRNS,
           TRNS,
           TRNS, TRNS, TRNS
             ),

/*
    // templates to copy from
    KEYMAP(  // LayerN: fully transparent
        // left hand
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,
                                      TRNS,TRNS,
                                           TRNS,
                                 TRNS,TRNS,TRNS,
        // right hand
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
                  TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
                       TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,
        TRNS,
        TRNS,TRNS,TRNS
    ),
*/

};

#define MACRO_SPACEMACS_SAVE  MACRO(T(ESC), T(SPC), T(F), T(S), END)
#define MACRO_SPACEMACS_FILE  MACRO(T(ESC), T(SPC), T(F), T(F), END)
#define MACRO_SPACEMACS_BUFF  MACRO(T(ESC), T(SPC), T(B), T(B), END)
#define MACRO_SPACEMACS_PFILE MACRO(T(ESC), T(SPC), T(P), T(F), END)
#define MACRO_SPACEMACS_PBUFF MACRO(T(ESC), T(SPC), T(P), T(B), END)
#define MACRO_SPACEMACS_PPROJ MACRO(T(ESC), T(SPC), T(P), T(P), END)
#define MACRO_SPACEMACS_MAGIT MACRO(T(ESC), T(SPC), T(G), T(S), END)
#define MACRO_SPACEMACS_TOGBF MACRO(T(ESC), D(LSFT), D(LCTRL), T(6), U(LCTRL), U(LSFT), END)


enum macro_id {
  SPACEMACS_SAVE,
  SPACEMACS_FILE,
  SPACEMACS_BUFF,
  SPACEMACS_PFILE,
  SPACEMACS_PBUFF,
  SPACEMACS_PPROJ,
  SPACEMACS_MAGIT,
  SPACEMACS_TOGBF,
};

enum function_id {
  LSHIFT_LPAREN,
  RSHIFT_RPAREN,
  TAPPED_LBRACE,
  TAPPED_RBRACE,
};


/*
 * Fn action definition
 */
static const uint16_t PROGMEM fn_actions[] = {
    ACTION_MACRO(SPACEMACS_SAVE),                   // FN0  = Spacemacs Save
    ACTION_MACRO(SPACEMACS_PBUFF),                  // FN1  = Spacemacs Project Buffer
    ACTION_MACRO(SPACEMACS_PFILE),                  // FN2  = Spacemacs Project File
    ACTION_MACRO(SPACEMACS_FILE),                   // FN3  = Spacemacs File
    ACTION_MACRO(SPACEMACS_BUFF),                   // FN4  = Spacemacs Buffer
    ACTION_MACRO(SPACEMACS_PPROJ),                  // FN5  = Spacemacs proj proj
    ACTION_MACRO(SPACEMACS_MAGIT),                  // FN6  = Spacemacs magit
    ACTION_MODS_KEY(MOD_LSFT, KC_9),                // FN7  = ( not used - renumber
    ACTION_MODS_KEY(MOD_LSFT, KC_0),                // FN8  = ) not used - renumber
    ACTION_MACRO(SPACEMACS_TOGBF),                  // FN9  = S-Ctrl-^
    ACTION_FUNCTION_TAP(LSHIFT_LPAREN),             // FN10 = Function LSHIFT with tap '('
    ACTION_FUNCTION_TAP(RSHIFT_RPAREN),             // FN11 = Function RSHIFT with tap ')'
    ACTION_FUNCTION_TAP(TAPPED_LBRACE),             // FN12 = Function LCTRL with tap '['
    ACTION_FUNCTION_TAP(TAPPED_RBRACE),             // FN13 = Function LCTRL with tap '['
    ACTION_LAYER_MOMENTARY(1),                      // FN14 - set Layer1
};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt) {
  switch(id) {
  case SPACEMACS_SAVE:
    if (record->event.pressed) {
      return MACRO_SPACEMACS_SAVE;
    }
  case SPACEMACS_FILE:
    if (record->event.pressed) {
      return MACRO_SPACEMACS_FILE;
    }
  case SPACEMACS_BUFF:
    if (record->event.pressed) {
      return MACRO_SPACEMACS_BUFF;
    }
  case SPACEMACS_PFILE:
    if (record->event.pressed) {
      return MACRO_SPACEMACS_PFILE;
    }
  case SPACEMACS_PBUFF:
    if (record->event.pressed) {
      return MACRO_SPACEMACS_PBUFF;
    }
  case SPACEMACS_PPROJ:
    if (record->event.pressed) {
      return MACRO_SPACEMACS_PPROJ;
    }
  case SPACEMACS_MAGIT:
    if (record->event.pressed) {
      return MACRO_SPACEMACS_MAGIT;
    }

  case SPACEMACS_TOGBF:
    if (record->event.pressed) {
      return MACRO_SPACEMACS_TOGBF;
    }
  }

  return MACRO_NONE;
}

void action_function(keyrecord_t *record, uint8_t id, uint8_t opt)
{
  switch (id) {
  case LSHIFT_LPAREN:
    // Shift parentheses example: LShft + tap '('
    // http://stevelosh.com/blog/2012/10/a-modern-space-cadet/#shift-parentheses
    // http://geekhack.org/index.php?topic=41989.msg1304899#msg1304899
    if (record->event.pressed) {
      if (record->tap.count > 0 && !record->tap.interrupted) {
        if (record->tap.interrupted) {
          register_mods(MOD_BIT(KC_LSHIFT));
        }
      } else {
        register_mods(MOD_BIT(KC_LSHIFT));
      }
    } else {
      if (record->tap.count > 0 && !(record->tap.interrupted)) {
        add_weak_mods(MOD_BIT(KC_LSHIFT));
        send_keyboard_report();
        register_code(KC_9);
        unregister_code(KC_9);
        del_weak_mods(MOD_BIT(KC_LSHIFT));
        send_keyboard_report();
        record->tap.count = 0;  // ad hoc: cancel tap
      } else {
        unregister_mods(MOD_BIT(KC_LSHIFT));
      }
    }
    break;
  case RSHIFT_RPAREN:
    if (record->event.pressed) {
      if (record->tap.count > 0 && !record->tap.interrupted) {
        if (record->tap.interrupted) {
          register_mods(MOD_BIT(KC_RSHIFT));
        }
      } else {
        register_mods(MOD_BIT(KC_RSHIFT));
      }
    } else {
      if (record->tap.count > 0 && !(record->tap.interrupted)) {
        add_weak_mods(MOD_BIT(KC_RSHIFT));
        send_keyboard_report();
        register_code(KC_0);
        unregister_code(KC_0);
        del_weak_mods(MOD_BIT(KC_RSHIFT));
        send_keyboard_report();
        record->tap.count = 0;  // ad hoc: cancel tap
      } else {
        unregister_mods(MOD_BIT(KC_RSHIFT));
      }
    }
    break;
  case TAPPED_LBRACE:
    if (record->event.pressed) {
      if (record->tap.count > 0 && !record->tap.interrupted) {
        if (record->tap.interrupted) {
          register_mods(MOD_BIT(KC_LCTRL));
        }
      } else {
        register_mods(MOD_BIT(KC_LCTRL));
      }
    } else {
      if (record->tap.count > 0 && !(record->tap.interrupted)) {
        register_code(KC_LBRACKET);
        unregister_code(KC_LBRACKET);
        record->tap.count = 0;
      } else {
        unregister_mods(MOD_BIT(KC_LCTRL));
      }
    }
    break;
  case TAPPED_RBRACE:
    if (record->event.pressed) {
      if (record->tap.count > 0 && !record->tap.interrupted) {
        if (record->tap.interrupted) {
          register_mods(MOD_BIT(KC_RCTRL));
        }
      } else {
        register_mods(MOD_BIT(KC_RCTRL));
      }
    } else {
      if (record->tap.count > 0 && !(record->tap.interrupted)) {
        register_code(KC_RBRACKET);
        unregister_code(KC_RBRACKET);
        record->tap.count = 0;
      } else {
        unregister_mods(MOD_BIT(KC_RCTRL));
      }
    }
    break;
  }
}
