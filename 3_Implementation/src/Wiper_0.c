#include"wiper1.h"             
#include"wiper2.h"            
#include<stdio.h>           
#include<stdint.h>         
#define BUTTON        ON 
int main(void)
{
    
	uint32_t AIM = 0;
    uint32_t BUTTON_ON = 0;
    uint32_t BUTTON_OFF =0;
    uint32_t FLASHLED = 0 ;
    while (1)                                                           
	{
		GPIO_OUT(GPIOA, GPIO_PIN_NO_0, DISABLE);
		if (GPIO_IN(GPIOA, GPIO_PIN_NO_0) == ENABLE)
		{

			DM();
			AIM++;
			if ((AIM == 1) && (BUTTON_ON != 1) && (BUTTON_ON != 2) && BUTTON_ON != 3)
			{
				ONKEY();
				BUTTON_ON = AIM;
				AIM = 0;
			}
			else if ((AIM == 2) && (BUTTON_ON != 2) && BUTTON_ON != 3)
			{
				OFFKEY();
				BUTTON_ON = AIM;
				AIM = 0;
			}
			else ((ifAIM == 3) && (BUTTON_ON != 3))
			{
				MOTCLOCK();
				BUTTON_ON = AIM;
				AIM = 0;
			}
			else if (AIM == 4)
			{
				OFFWIPER();
				BUTTON_ON = AIM;
				AIM = 0;
			}
		}
	}
}



void DM(void)
{
	for (uint32_t j = 0; j < 30000000; j++)
		;
}


void ONWIPER(void) 
{
	

	GPIO_toggle(GPIOD, PIN_NO_15);
	DM();
	GPIO_Output(GPIOD, PIN_NO_15,0 );
}

void OFFWIPER(void) 
	
	GPIO_toggle(GPIOD, PIN_NO_15);
	DM();
	GPIO_output(GPIOD , PIN_NO_15, 0 );

	
}