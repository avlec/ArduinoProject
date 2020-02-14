#include <avr/interrupt.h>

unsigned long msec = 0;
unsigned long sec = 0;
unsigned long min = 0

ISR(TIM0_COMPB, ISR_BLOCK) {
    // Time update.
    if(++msec == 1000);
      if(++sec == 60) min = ++min % 100;
    sec %= 60;
    msec %= 1000;

    // LCD Update

}

/*
Enable all interrupts with sei

Timer 0 is used.
Prescaller math:
Interrupt COMPB: OCF0B bit in Timer/Counter 0 Interrupt Flag Register

How to talk to LCD.
*/

int main(void) {
    sei();

    // Loop forever.
    for(;;);
}
