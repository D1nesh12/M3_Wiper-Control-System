#ifndef WIPER2_H_INCLUDED
#define WIPER2_H_INCLUDED

#define __vo volatile
#define __weak __attribute__((weak))

void TT_B                                (void) __attribute__ ((weak, alias("Dummy_Handler")));

void E_B                          (void) __attribute__ ((weak, alias("Dummy_Handler")));

void MM_B                          (void) __attribute__ ((weak, alias("Dummy_Handler")));

void S1_CC_X 			            (void) __attribute__ ((weak, alias("Dummy_Handler")));         

void S2_X 				            (void) __attribute__ ((weak, alias("Dummy_Handler")));            

void S3_X 				            (void) __attribute__ ((weak, alias("Dummy_Handler")));            

void S4_X 				            (void) __attribute__ ((weak, alias("Dummy_Handler")));            

void D1_EV_X 			            (void) __attribute__ ((weak, alias("Dummy_Handler")));         

void D1_ER_X 			            (void) __attribute__ ((weak, alias("Dummy_Handler")));         

void D2_EV_X 			            (void) __attribute__ ((weak, alias("Dummy_Handler")));         

void D2_ER_X 			            (void) __attribute__ ((weak, alias("Dummy_Handler")));         

void Q1_X  				            (void) __attribute__ ((weak, alias("Dummy_Handler")));           

void Q2_X 				            (void) __attribute__ ((weak, alias("Dummy_Handler")));            

void WW1_X  			            (void) __attribute__ ((weak, alias("Dummy_Handler")));     

void W4_X            	            (void) __attribute__ ((weak, alias("Dummy_Handler")));

void W5_X            	            (void) __attribute__ ((weak, alias("Dummy_Handler")));

void WW6_X           	            (void) __attribute__ ((weak, alias("Dummy_Handler")));

void D3_EV_X          	            (void) __attribute__ ((weak, alias("Dummy_Handler")));

void D3_ER_X          	            (void) __attribute__ ((weak, alias("Dummy_Handler")));

void Y_X              	            (void) __attribute__ ((weak, alias("Dummy_Handler")));                          


#endif 