#include<avr/io.h>
#include <util/delay.h>
#include"task.h"

void A1( )
{

DDRD &= ~(1<<PD1);
DDRD &= ~(1<<PD2);

PORTD |= (1<<PD1) ;
PORTD |= (1<<PD2);

DDRB |= (1<<PB0);
if ((!(PIND & (1<<PD1) ) ) & ( ! (PIND & (1<<PD2) ) ) )
{
PORTB |= (1<<PB0);
_delay_ms (1000);
}
else

{
PORTB &= ~(1<<PB0);
_delay_ms(1000);
}
}
