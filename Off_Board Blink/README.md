Lab 1 -- Offboard Blink
Julia K.

Offboard Blink allows the user to take the G2553 off the development board and into a breadboard. 
It allows the user to press a button and light up two LEDs on the breadboard.
In order to properly use Offboard Blink, proper power must be supplied to the processor, in this case, 3.3V. 
Additionally, proper bypass and bulk capacitors, and proper reset circuitry was required. The gif link below shows the processor 
along with the proper circuit components on the breadboard, with both LEDs powered on.

GIF: https://media.giphy.com/media/1BdrySPA6Sz7bhbcHB/giphy.gif

Processors Used:
- MSP430G2553

Functionality
The program begins by initializing the pins used for the LED1 and LED2 output, 
LED1 uses P1.0, and LED2 uses P1.6. 

Then, the pull-up/pull-down resistor was enabled for the switch pin, and configured to be a pull-up resistor.

MSP430G2553 uses P1.3 as the input to the switch pin, or button.

The program then enters an infinite loop, which contains an if-statement to check the state of the button (if it is pressed or not)
When the button is not pressed, LED1 and LED2 are off.
When the button is pressed, LED1 and LED2 are on.

Resistors were placed in series (2 1k per LED in parallel, to give ~500 ohms per LED) with the LEDs to limit current through the LEDs. 
Assuming LED voltage is ~2V, and it is being driven with 3.3V, the the voltage across a resistor would be 1.3V Using 500ohms as the equivalent resistance, approximately 2.6mA run through the LEDs. 

For the bypass circuitry, a 10mF and 100nF in parallel between VCC and GND.

For the reset circuitry, a 47k pull-up resistor to VCC and a 1nF to GND were placed on the reset pin.