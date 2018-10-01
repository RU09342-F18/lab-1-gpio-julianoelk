#include <msp430.h> 


/**
 * main.c
 */
int main(void)
{
    WDTCTL = WDTPW | WDTHOLD;   // stop watchdog timer

    P1OUT &= ~BIT0;    // sets LED off to start

    P2REN |= BIT1;    // enable pull-up/pull-down resistor on S1
    P2OUT |= BIT1;    // configure pull-up/pull-down as pull-up

    P1DIR |= BIT0;    // set Port 1.0 as output (LED connected to this pin)
    P2DIR &= ~BIT1;   // set Port 2.1 as input (Pushbutton connected to this pin)

    while (1)         // loops continuously
    {
        if (P2IN & BIT1)
        {
            P1OUT &= ~BIT0;   // turn off LED1
        }
        else
        {
            P1OUT |= BIT0;   // turn on LED1
        }
    }
}
