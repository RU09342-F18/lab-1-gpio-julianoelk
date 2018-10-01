Lab 1 -- Button Blink
Julia K.

Button Blink allows the user to control the state of an LED with a button.

Processors Used:
- MSP430G2553
- MSP430F5529

Functionality
The program begins by initializing the pins used for the LED output, 
in this case, LED1 uses the same port and pin number (P1.0) for both MSPs used. 
Then, the pull-up/pull-down resistor was enabled for the switch pin, and configured to be a pull-up resistor.

MSP430F5529 uses P2.1 as the input to the button. MSP430G2553 uses P1.3 as the input to the button.

The program then enters an infinite loop, which contains an if-statement to check the state of the button (if it is pressed or not)
When the button is not pressed, LED1 is off.
When the button is pressed, LED1 is on.
