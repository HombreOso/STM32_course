//nucleo-f446ze

// Where is the LED connected?
// Port:	A
// Pin:		5
// page 24 User Guide

#define PERIPH_BASE			(0x40000000UL)  /*page 69 Data sheet*/

#define AHB1_PERIPH_OFFSET 	(0x00020000UL) /*page 67 Data sheet*/
#define AHB1_PERIPH_BASE 	(PERIPH_BASE + AHB1_PERIPH_OFFSET)

#define GPIOA_OFFSET		(0x0000U) /*page 67 Data sheet*/
#define GPIOA_BASE			(AHB1_PERIPH_BASE + GPIOA_OFFSET)

#define RCC_OFFSET			(0x3800UL) /*page 67 Data sheet*/
#define RCC_BASE			(AHB1_PERIPH_BASE + RCC_OFFSET)

#define AHB1EN_R_OFFSET		(0x30UL) /*page 144 Reference Manual*/
#define RCC_AHB1EN_R		(*(volatile unsigned int *)(RCC_BASE + AHB1EN_R_OFFSET))

#define GPIOAEN				(1U<<0) /*page 145 Reference Manual*/

#define MODE_R_OFFSET		(0x00UL) /*page 187 Reference Manual, mode register*/
#define GPIOA_MODE_R		(*(volatile unsigned int *)(GPIOA_BASE + MODE_R_OFFSET))

#define OD_R_OFFSET			(0x14UL) /*page 190 Reference Manual*/
#define GPIOA_OD_R			(*(volatile unsigned int *)(GPIOA_BASE + OD_R_OFFSET))

#define PIN5				(1U<<5) /*page 190 Reference Manual*/
#define LED_PIN				PIN5

