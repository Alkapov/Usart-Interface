#include <avr/io.h>
#include "Usart/UsartRegisters.h"
int main(void)
{
	UsartRegisters usart = UsartRegisters();
	usart.Ucsra.ToggleRxc(true);
	usart.Ucsra.ToggleDor(true);
	usart.Ucsra.ToggleFe(true);
	usart.Ucsra.ToggleMpcm(true);
	
    while (1) 
    {
    }
}

