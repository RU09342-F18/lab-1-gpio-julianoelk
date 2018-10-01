#include <msp430.h> 


/**
 * main.c
 */
int main(void)
{
    WDTCTL = WDTPW | WDTHOLD;   // stop watchdog timer

    P1OUT |= BIT0;    // turns LED on following DIR change

    P1DIR |= BIT0;    // set Port 1.0 as output (LED connected to this pin)

    while (1)         // loops continuously
    {
        __delay_cycles(500000);   // waits 0.5 seconds
        P1OUT ^= BIT0;            // toggle LED state
    }

}
