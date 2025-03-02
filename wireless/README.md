# Lily 58 Pro Wireless
The Wireless Lily58 Pro

## Built with
- [ZMK](https://github.com/zmkfirmware/zmk)
- [ZMK Locale Generator](https://github.com/joelspadin/zmk-locale-generator)

## Specs
- No Encoders, All Buttons
- 2x [nice!view](https://nicekeyboards.com/nice-view/) e-paper displays
- Base + 2x Shift Layers
- 2x 3.7v 2000 mah LiPo Batteries

## Usage
- Configure the necessary files under `zmk-config`
	- It is a copy of the automatic generated configuration, so using it as a GitHub Action *should* be just plug-and-play
	- `config/lily58.keymap` has the keymap
	- `config/lily58_left.conf` has the configuration for the board / display
- Run `first_time_setup.sh` once
	- This will clone the [ZMK Repository](https://github.com/zmkfirmware/zmk) and get everything ready to build everything.
	- It will also build the Firmware
- Afterwards, you can run `sequential_build.sh` so that it rebuilds the firmware, but without going though every git pull, build, fetch, etc, massively improving build times

## Resources

This configuration is designed for a QWERTZ (German) Keyboard Layout.

This means you will need the [ZMK Locale Generator](https://github.com/joelspadin/zmk-locale-generator). 

A copy of the module is already present on `zmk-modules` but it's recommended to check the [original repository](https://github.com/joelspadin/zmk-locale-generator).

Specifically, if you need custom keys, you can check them at [the keys_de.h file](https://github.com/joelspadin/zmk-locales/blob/main/include/locale/keys_de.h).

