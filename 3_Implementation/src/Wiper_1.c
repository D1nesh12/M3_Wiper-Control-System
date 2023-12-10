#include"wiper1.h"             
#include"wiper2.h"            
#include<stdio.h>           
#include<stdint.h>         
#define START_SRAM           0x20000000UL
#define SIZE_SRAM            (128U * 1024U) 
#define END_SRAM             ((START_SRAM) + (SIZE_SRAM))
#define START_SRAM   END_SRAM
extern uint32_t _sd;
extern uint32_t _d;
extern uint32_t _ed;
uint32_t vector_table[] __attribute__((section(".isr_vector")))   = {
START_STACK ,
             (uint32_t)Reset_Handler,
	         (uint32_t)TT_B,
	         (uint32_t)E_B,
             (uint32_t)MM_B,
             0,
             0,
             0,
             0,
             0,
             0,
	         (uint32_t)S1_CC_X,     
	         (uint32_t)S2_X,        
	         (uint32_t)S3_X,        
	         (uint32_t)S4_X,  
             0,
            (uint32_t)D1_EV_X,     
	        (uint32_t)D1_ER_X,     
	        (uint32_t)D2_EV_X,     
	        (uint32_t)D2_ER_X,   
            0,
            (uint32_t)Q1_X,        
	        (uint32_t)Q2_X,        
	        (uint32_t)WW1_X, 
            (uint32_t)W4_X,       
	        (uint32_t)W5_X,
            (uint32_t)WW6_X,      
	        (uint32_t)D3_EV_X,     
	        (uint32_t)D3_ER_X, 
	        (uint32_t)Y_X,     
            };

            void Dummy_Handler(void)
{
	while(1);
}



void Reset_Handler(void)
{
	uint32_t total_size_of_d = (uint32_t)&_ed - (uint32_t)&_sd;
	
	uint8_t *source = (uint8_t*)&_d; 

	uint8_t *d = (uint8_t*)&_sd; 
	
	for(uint32_t i =0 ; i < total_size_of_d ; i++)
	{
		*d++ = *source++;
	}
	total_size_of_d = (uint32_t)&_ebss - (uint32_t)&_sbss;
	d = (uint8_t*)&_sbss;
	for(uint32_t k =0 ; k < total_size_of_d ; i++)
	{
		*d++ = 0;
	}
	
    
    
    main();
}