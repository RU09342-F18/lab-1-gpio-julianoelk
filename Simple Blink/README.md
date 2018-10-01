Lab 1 -- Simple Blink
Julia K.

Simple Blink programs LED1 on both the MSP430F5529 and the MSP430G2553 to toggle on for 1/2 second,
and off for 1/2 second, creating a 1 second period, and thus a symmetrical 50% duty cycle.

Processors Used:
- MSP430G2553
- MSP430F5529

Functionality

The program begins by initializing the pins used for the LED output, 
in this case the same port and pin number (P1.0) for both MSPs used in this lab.

The program then enters a continous while loop, which achieves timing using a delay,
set to wait for 1/2 second. Following the delay, the output pin which drives the LED
is toggled with XOR, such that a 0 (off) becomes a 1 (on) and a 1 (on) becomes a 0 (off).
