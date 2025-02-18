- Activate Python Virtual Env.
`source ~/Personal/pyvenv/qmk/bin/activate`

- Define the QMK_HOME
`export QMK_HOME='~/Personal/qmk_firmware'`

- Set up QMK
`qmk setup`

- Define user keyboard and keymap
`qmk config user.keyboard=lily58/rev1`
`qmk config user.keymap=csa_lily58_wired`

- Compile the Firmware
`qmk compile -kb lily58/rev1 -km csa_lily58_wired`

- Convert json from QMK Configurator into the .c file
`qmk json2c -o keymap.c input.json`

- Flash the keyboard
`qmk flash -kb my_keyboard -km my_keymap`
