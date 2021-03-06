############################################
Hello Poly - Polyphonic MIDI to CV interface
############################################

Polyphonic MIDI to CV module for modular synths, hardware designed for Eurorack systems.

Features:

- 6x 12bit DACs with a range of 0-~8.192V (assignable as either Note or Control outputs)
- 4x Gate outputs
- Configurable CV range 1V/Octave or 1.2V/Octave (providing a 100mV/step)
- Fully assignable routing of MIDI messages by channel
- Assignable Pitchbend and Channel Aftertouch
- Multiple Polyphony modes
- Support for multiple programs (controlled via program change events)
- Configuration via MIDI
- Gate controlled LFO.
- Firmware is hardware agnostic, could be compiled for other targets.

Hardware
========

- Designed around an STM32F411 32bit ARM MCU
- MSP4822 12bit DACs
- 128x64 SSD1306 OLED display

Software
========

Software currently using Arduino, however, I am migrating to using CMSIS and the STM32 HAL 
using the STM32CubeIDE mainly for the debugging support!
