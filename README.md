# ZMK Custom Layouts

This is my personal [ZMK firmware](https://github.com/zmkfirmware/zmk/) configuration for my [sofle](https://github.com/josefadamcik/SofleKeyboard) keyboard.

# Layouts

![Current layout](./layout/eyelash_sofle.svg)

# Getting started

Currently the only way to build the firmware needed is through nix using the provided `firmware` package

```nix
nix build .#firmware
```

This will generate two `uf2` (`zmk_left.uf2` & `zmk_right.uf2`) that needs to be copied on the left & right side of the keyboard

## Building through github action (Currently disabled)

Place the content of this snippet into `.github/workflows/build.yml`

```yaml
name: Build ZMK firmware
on:
  workflow_dispatch:
  push:
    paths-ignore:
      - "layout/**"
jobs:
  build:
    uses: zmkfirmware/zmk/.github/workflows/build-user-config.yml@main
```
