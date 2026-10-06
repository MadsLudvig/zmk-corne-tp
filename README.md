# Corne TP (ZMK config)

Corne split keyboard on two nice!nano v2 boards, built with mainline ZMK:

- **Left half = central.** Connects to the host over BLE and runs the stock
  nice!view status screen (layer, BT profile, output, battery).
- **Right half = peripheral.** Has the PS/2 TrackPoint
  ([badjeff/kb_zmk_ps2_mouse_trackpoint_driver](https://github.com/badjeff/kb_zmk_ps2_mouse_trackpoint_driver)).
  Its movement and buttons are forwarded to the left half via ZMK's split
  input (`zmk,input-split`).

Firmware is built by GitHub Actions (`build.yaml`), producing:

- `corne_tp_left-nice_view_adapter-nice_view-nice_nano_zmk.uf2`
- `corne_tp_right-nice_nano_zmk.uf2`
- `settings_reset-nice_nano_zmk.uf2`

## Migrating from the old right-central firmware

The central/peripheral roles were swapped (previously the right half was
central). Old bonds and split pairing data will not work, so reset both
halves and re-pair:

1. Remove "Corne TP" from the Bluetooth device list on every host.
2. Flash `settings_reset` to the **left** half (double-tap reset, copy the
   `.uf2` to the `NICENANO` drive). Wait for it to reboot.
3. Flash `settings_reset` to the **right** half the same way.
4. Flash the **left** firmware (`corne_tp_left-...`) to the left half.
5. Flash the **right** firmware (`corne_tp_right-...`) to the right half.
6. Power on / reset both halves at roughly the same time so they pair with
   each other. Typing on the right half and moving the TrackPoint should
   work once paired.
7. Pair "Corne TP" with the host again.

If the halves do not find each other, press reset on both halves at the
same time.
