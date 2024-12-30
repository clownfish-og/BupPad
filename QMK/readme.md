# BUPpad QMK Firmware Source
# Quick Start Guide

1. Set up a QMK build environment by following the [QMK Getting Started Guide](https://docs.qmk.fm/newbs_getting_started).
2. Go to the [BUPpad GitHub repository](https://github.com/clownfish-og/BUPpad) and download the repository as a zip file.
3. Unzip the contents, copy the folder `BUPpad/QMK/buppad` and paste it into your `qmk_firmware/keyboards` folder created in step 1.
4. Edit the desired files in the text editor or IDE of your choice.
5. Open the MSYS terminal and `cd` to your `qmk_firmware` directory.
6. Compile your new firmware with `make buppad/buppad25:twitch` or `qmk compile -kb buppad/buppad25 -km twitch`. Refer to the [QMK Building Firmware Guide](https://docs.qmk.fm/newbs_building_firmware#build-your-firmware) for more details.
7. Flash the firmware by following the [QMK Flashing Guide](https://docs.qmk.fm/newbs_flashing).

The firmware for the BUPpad can be flashed to the keypad using QMK Toolbox. The latest release of QMK Toolbox can be found on the [QMK Toolbox GitHub page](https://github.com/qmk/qmk_toolbox). Scroll to the bottom of the readme and choose your preferred version to download according to your OS.

8. Load the VIA JSON for further configuration. (See VIA Guide PDF)
