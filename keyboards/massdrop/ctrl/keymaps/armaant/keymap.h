#include QMK_KEYBOARD_H
#include <stdbool.h>

// Custom keycodes
enum ctrl_keycodes {
    U_T_AUTO = SAFE_RANGE,  // USB Extra Port Toggle Auto Detect / Always Active
    U_T_AGCR,               // USB Toggle Automatic GCR control
    DBG_TOG,                // DEBUG Toggle On / Off
    DBG_MTRX,               // DEBUG Toggle Matrix Prints
    DBG_KBD,                // DEBUG Toggle Keyboard Prints
    DBG_MOU,                // DEBUG Toggle Mouse Prints
    MD_BOOT,                // Restart into bootloader after hold timeout
    CLR_TOG,                // Toggle static (blue and pink) colors
    TERMINAL,               // CTRL+ALT+T
};

// git macro keycodes
enum git_macro_keycodes {
    // The start of this enum should always be equal to end of ctrl_keycodes + 1
    G_INIT = TERMINAL + 1,  // git init
    G_CLONE,                // git clone
    G_ADD,                  // git add
    G_DIFF,                 // git diff
    G_RESET,                // git reset
    G_REBAS,                // git rebase
    G_BRANH,                // git branch
    G_CHECK,                // git checkout
    G_MERGE,                // git merge
    G_REMTE,                // git remote add
    G_FETCH,                // git fetch
    G_PULL,                 // git pull
    G_PUSH,                 // git push
    G_COMM,                 // git commit
    G_STAT,                 // git status
    G_LOG,                  // git log
};

// Tap dance keycodes
enum tapdance_keycodes {
    TD_BSLS_TERM = 0,  // Tap dance key to open terminal on LCTRL double press
};

// Layer names
enum layout_names {
    _LK = 0,  // Keys Layout
    _LF,      // Function Layout
    _LG,      // GIT Layout
};

// Disable custom (pink + blue) color scheme
bool disable_custom_color;
