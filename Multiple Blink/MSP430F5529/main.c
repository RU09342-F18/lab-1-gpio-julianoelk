#include <msp430.h>


/**
 * main.c
 */
int main(void)
{
    unsigned long timer1 = 0;
    unsigned long timer2 = 0;

    WDTCTL = WDTPW | WDTHOLD;   // stop watchdog timer

    P1OUT |= BIT0;    // turns LED1 on following DIR change
    P4OUT |= BIT7;    // turns LED2 on following DIR change

    P1DIR |= BIT0;    // set Port 1.0 as output (LED connected to this pin)
    P4DIR |= BIT7;    // set Port 4.7 as output (LED connected to this pin)

    while (1)         // loops continuously
    {
        timer1++;
        timer2++;

        if(timer1 == 50000)
        {
            P1OUT ^= BIT0;            // toggle LED1 state
            timer1 = 0;
        }
        if(timer2 == 90000)
        {
            P4OUT ^= BIT7;            // toggle LED1 state
            timer2 = 0;
        }
    }

}
