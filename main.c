/*
 * Polling_But.c
 *
 * Created: 9/26/2019 2:32:06 PM
 * Author : 86185
 */ 

#include <avr/io.h>


int main(void)
{
	DDRB |= (1<<PORTB5);
	PORTD |= (1<<PORTD7);
	/* Replace with your application code */
	while (1)
	{
		if (!(PIND & (1<<PORTD7)))
		{
			PORTB |= (1<<PORTB5);
		}
		else
		{
			PORTB ^= (1<<PORTB5);
		}

	}
}

