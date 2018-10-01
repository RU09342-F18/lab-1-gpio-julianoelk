Lab 1 -- Multiple Blink
Julia K.

Multiple Blink programs the MSPs below to make LED1 and LED2 blink at different rates on their respective boards.

Processors Used:
- MSP430G2553
- MSP430F5529

Functionality

The program begins by initializing the pins used for the LED output, 
in this case, LED1 uses the same port and pin number (P1.0) for both MSPs used. 
MSP430F5529 uses P4.7 as the output to LED2, and MSP430G2553 uses P1.6 as the output to LED2.
Two software timers, Timer1 and Timer2 are also intitialized as zero.

The program then enters an infinite loop, which contains if-statements which check the value of Timer1 and Timer2.
When Timer1 counts up to 50000, LED1's state is toggled, and Timer1 is reset.
When Timer2 counts up to 90000, LED2's state is toggled, and Timer2 is reset. 
This causes the two LEDs to blink at differing rates.



