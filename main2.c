#include <avr/io.h>
#include <util/delay.h>

int main(){
DDRB=255;
DDRD = 255;
while(1){
PORTB = PORTB | 1 << PB3;
_delay_ms(120);
PORTB = PORTB &~ 1 << PB3;
PORTB = PORTB | 1 << PB2;
_delay_ms(120);
PORTB = PORTB &~ 1 << PB2;
PORTB = PORTB | 1 << PB1;
_delay_ms(120);
PORTB = PORTB &~ 1 << PB1;
PORTD = PORTD | 1 << PD6;
_delay_ms(120);
PORTD = PORTD &~ 1 << PD6;
PORTD = PORTD | 1 << PD5;
_delay_ms(120);
PORTD = PORTD &~ 1 << PD5;
PORTD = PORTD | 1 << PD3;
_delay_ms(120);
PORTD = PORTD &~ 1 << PD3;
PORTD = PORTD | 1 << PD5;
_delay_ms(120);
PORTD = PORTD &~ 1 << PD5;
PORTD = PORTD | 1 << PD6;
_delay_ms(120);
PORTD = PORTD &~ 1 << PD6;
PORTB = PORTB | 1 << PB1;
_delay_ms(120);
PORTB = PORTB &~ 1 << PB1;
PORTB = PORTB | 1 << PB2;
_delay_ms(120);
PORTB = PORTB &~ 1 << PB2;
}


  return 0;
}