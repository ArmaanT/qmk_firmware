# Massdrop CTRL ArmaanT

Heavily inspired by [endgame](https://github.com/qmk/qmk_firmware/tree/master/keyboards/massdrop/ctrl/keymaps/endgame).

## Layers

In general the key background color indicates its functionality:

* yellow represents layer modifiers
* blue represents custom keys for a layer
* pink represents keyboard functions
* green represents dynamic macros
* gray represents computer functions
* orange represents tap dance keys

### Default (Typing) Layer

![Typing Layer](https://i.imgur.com/tmqCzA9.png)

### Function Layer

![Function Layer](https://i.imgur.com/5M1f2wI.png)

### Git Layer

![Git Layer](https://i.imgur.com/iA9cNzu.png)

## Features

### Custom color scheme

Uses a blue and pink color theme inspired by the [ducky one 2 midnight tkl](https://www.duckychannel.com.tw/en/Ducky-One2-Midnight-TKL)

Additional functionality:

* Caps Lock key turns green when on
* The custom color scheme follows the RGB led flags (on, keys only, underglow only, off) and RGB brightness
* Number keys turn pink to indicate the active layer (1 for function, 2 for git, etc)
* Disabled RGB pattern switching if custom color scheme is active
* Added a new key to switch between the custom color scheme and RGB patterns
* Disabled a bunch of default RGB patterns

### Tap dance keys

1. LCTRL is LCTRL for a single tap and LCTRL+LALT+T for a double tap.
2. Fn opens the function layer on a single hold and opens the git layer as a one shot layer.

### Git Macros

Entire layer dedicated to git macros. See [key layout](#git-layer).

Supports:

* git init
* git clone
* git add
* git diff
* git reset
* git rebase
* git branch
* git checkout
* git merge
* git remote
* git fetch
* git pull
* git push
* git commit
* git status
* git log
