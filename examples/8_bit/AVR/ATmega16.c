#define F_CPU 1000000UL      // Set frequency to 1MHz
#include<avr/io.h>           // Include the standard library
#include<util/delay.h>       // Include this for delay function

int main()
{
    DDRA |= (1<<PA0);        //  Make PA0 as Output pin
    while(1)
    {
    	PORTA ^= (1<<PA0);   //  Toggle PA0 pin
    	_delay_ms(1000);     //  Wait 1 Second
    }
}
