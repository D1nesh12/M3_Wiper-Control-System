#define GPIOD_BASE_ADDR 0x40020C00	//Defining Base address for GPIO//for LESDs
#define GPIOD_ODR_OFFSET 0x14       //LED are outputs so we are using ODR //Defining Offset Address for LEDs
#define GPIOD_ODR *(volatile long *)(GPIOD_BASE_ADDR + GPIOD_ODR_OFFSET)

//Adding Base address and offset address for LEDs

#define RCC_BASE_ADDR 0x40023800 //Defining RCC Address
#define RCC_AHB1ENR_OFFSET 0x30   //Defining Offset for RCC
#define RCC_AHB1ENR *(volatile long *)(RCC_BASE_ADDR + RCC_AHB1ENR_OFFSET)

//Adding Base address and offset address for RCC

#define GPIOA_BASE_ADDR 0x40020000  //Defining Base address for switch
#define GPIOA_IDR_OFFSET 0x10 //switch is input so we are using IDR //Defining Offset of Switch
#define GPIOA_IDR *(volatile long *)(GPIOA_BASE_ADDR + GPIOA_IDR_OFFSET)

//Adding Base address and offset address for SWITCH

#define GPIOD_MODE_OFFSET 0x00
#define GPIOD_MODE *(volatile long *)(GPIOD_BASE_ADDR + GPIOD_MODE_OFFSET)

//Adding Base address and offset address To clear Previous for LEDs

#define GPIOA_MODE_OFFSET 0x00
#define GPIOA_MODE *(volatile long *)(GPIOA_BASE_ADDR + GPIOA_MODE_OFFSET)
