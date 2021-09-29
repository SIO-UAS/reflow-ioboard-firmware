# reflow-ioboard-firmware
The Frimware for the microcontroller on my reflow ioboard

Made using the Microchip X IDE (v5.50) and the MCC and XC8(v2.32)

A compiled Hexfile is provided.

Usage:
It acts as a I2C slave with adress 0x08.
If it recives a readcommand: It answers with : 8 MSB (of the ADC on AN2) + 8 MSB (of the ADC on AN2) // Thats a bug
Write Command: 0x01 : Relay 1 -> ON
               0x02 : Relay 1 -> OFF
               0x03 : Relay 2 -> ON
               0x04 : Relay 2 -> OFF
               0x05 : Relay 3 -> ON
               0x06 : Relay 3 -> OFF
