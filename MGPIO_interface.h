

/* * MGPIO_interface.h
 *
 *  Created on: Jul 1, 2022
 *      Author: AlaaElnagar*/


#ifndef MGPIO_INTERFACE_H_
#define MGPIO_INTERFACE_H_


/*All Gpio Pins Exist in AHB1_bus
enum GpioPins {

	  MGPIO_Pin0       ,
	  MGPIO_Pin1       ,
	  MGPIO_Pin2       ,
	  MGPIO_Pin3       ,
	  MGPIO_Pin4       ,
	  MGPIO_Pin5       ,
	  MGPIO_Pin6       ,
	  MGPIO_Pin7       ,
	  MGPIO_Pin8       ,
	  MGPIO_Pin9       ,
	  MGPIO_Pin10      ,
	  MGPIO_Pin11      ,
	  MGPIO_Pin12      ,
	  MGPIO_Pin13      ,
	  MGPIO_Pin14      ,
	  MGPIO_Pin15      ,
};

enum GpioperipherialId{
	GPIOA_PORT    ,
	GPIOB_PORT    ,
	GPIOC_PORT    ,
	GPIOD_PORT    ,
	GPIOE_PORT    ,
	GPIOH_PORT = 7
};

enum GpioPinStates
{
	Gpio_Pin_LOW ,
	Gpio_Pin_High ,

} ;


GPIO OUTPUT MODES
enum GPIO_OutputModes
{
	First two bits for [input-output-AF]"MODER"
	 *Third Bit push pll or pull doen     "TYPER"
	 *BIT4,5 							  "SPEEDR
	 *BIT6,7"Pull up don state "          "PUPDR "
	 *
 Gpio output Low speed
	GPIO_OUTPUT_PP_LowSpeed        =0b0100000    ,
	GPIO_OUTPUT_PP_PU_LowSpeed     =0b0100001    ,
	GPIO_OUTPUT_PP_PD_LowSpeed     =0b0100010    ,
	GPIO_OUTPUT_OD_LowSpeed        =0b0110000    ,
	GPIO_OUTPUT_OD_PP_LowSpeed     =0b0110001    ,
	GPIO_OUTPUT_OD_PD_LowSpeed     =0b0110010    ,
output Medium speed
	GPIO_OUTPUT_PP_MediumSpeed     =0b0100100    ,
	GPIO_OUTPUT_PP_PU_MediumSpeed  =0b0100101    ,
	GPIO_OUTPUT_PP_PD_MediumSpeed  =0b0100110    ,
	GPIO_OUTPUT_OD_MediumSpeed     =0b0110100    ,
	GPIO_OUTPUT_OD_PP_MediumSpeed  =0b0110101    ,
	GPIO_OUTPUT_OD_PD_MediumSpeed  =0b0110110    ,
Output High speed
	GPIO_OUTPUT_PP_HighSpeed       =0b0101000    ,
	GPIO_OUTPUT_PP_PU_HighSpeed    =0b0101001    ,
	GPIO_OUTPUT_PP_PD_HighSpeed    =0b0101010    ,
	GPIO_OUTPUT_OD_HighSpeed       =0b0111000    ,
	GPIO_OUTPUT_OD_PP_HighSpeed    =0b0111001    ,
	GPIO_OUTPUT_OD_PD_HighSpeed    =0b0111010    ,
Output Verry High speed
	GPIO_OUTPUT_PP_VeryHighSpeed    =0b0101100    ,
	GPIO_OUTPUT_PP_PU_VeryHighSpeed =0b0101101    ,
	GPIO_OUTPUT_PP_PD_VeryHighSpeed =0b0101110    ,
	GPIO_OUTPUT_OD_VeryHighSpeed    =0b0111100    ,
	GPIO_OUTPUT_OD_PP_VeryHighSpeed =0b0111101    ,
	GPIO_OUTPUT_OD_PD_VeryHighSpeed =0b0111110    ,
} ;

enum Gpio_Input_Modes
{
	MODER"
	 *"PUPDR
	 *
    GPIO_INPUT_Floating  =0b0000 ,
    GPIO_INPUT_PU        =0b0001 ,
    GPIO_INPUT_PD        =0b0010 ,
    GPIO_INPUT_Analog    =0b1100

};
Alternative function modes
enum Gpio_AF_Modes{
"MODER" "TYPER" "SPEEDR  "PUPDR "
Low speed AF
	GPIO_AF_PP_LowSpeed          =0b1000000,
	GPIO_AF_PP_PU_LowSpeed 		=0b1000001,
	GPIO_AF_PP_PD_LowSpeed 		=0b1000010,
	GPIO_OD_LowSpeed       		=0b1010000,
	GPIO_OD_PU_LowSpeed 			=0b1010001,
	GPIO_OD_PD_LowSpeed          =0b1010010,
Medium speed AF
	GPIO_AF_PP_MediumSpeed          =0b1000100,
	GPIO_AF_PP_PU_MediumSpeed 		=0b1000101,
	GPIO_AF_PP_PD_MediumSpeed 		=0b1000110,
	GPIO_OD_MediumSpeed       		=0b1010100,
	GPIO_OD_PU_MediumSpeed 			=0b1010101,
	GPIO_OD_PD_MediumSpeed          =0b1010110,

High speed AF
	GPIO_AF_PP_HighSpeed          =0b1001000,
	GPIO_AF_PP_PU_HighSpeed 		=0b1001001,
	GPIO_AF_PP_PD_HighSpeed 		=0b1001010,
	GPIO_OD_HighSpeed       		=0b1011000,
	GPIO_OD_PU_HighSpeed 			=0b1011001,
	GPIO_OD_PD_HighSpeed          =0b1011010,

Very High speed AF
	GPIO_AF_PP_VeryHighSpeed          =0b1001100,
	GPIO_AF_PP_PU_VeryHighSpeed 		=0b1001101,
	GPIO_AF_PP_PD_VeryHighSpeed 		=0b1001110,
	GPIO_OD_VeryHighSpeed       		=0b1011100,
	GPIO_OD_PU_VeryHighSpeed 			=0b1011101,
	GPIO_OD_PD_VeryHighSpeed          =0b1011110
};*/
#include"STD_TYPES.h"
void MGPIO_voidSetPinDirection( u8 Copy_u8Port , u8 Copy_u8Pin , u16 Copy_u8Mode  );
void MGPIO_voidSetPinValue    ( u8 Copy_u8Port , u8 Copy_u8Pin , u8 Copy_u8Value );
u8   MGPIO_u8GetPinValue      ( u8 Copy_u8Port , u8 Copy_u8Pin );
void MGPIO_voidSetPortVal(u8 Copy_u8Port , u32 Copy_u8val);
void MGPIO_voidSetPortDirection( u8 Copy_u8Port , u16 Copy_u8Mode);
enum MGPIO_PINS
{
	MGPIO_PIN0,
	MGPIO_PIN1,
	MGPIO_PIN2,
	MGPIO_PIN3,
	MGPIO_PIN4,
	MGPIO_PIN5,
	MGPIO_PIN6,
	MGPIO_PIN7,
	MGPIO_PIN8,
	MGPIO_PIN9,
	MGPIO_PIN10,
	MGPIO_PIN11,
	MGPIO_PIN12,
	MGPIO_PIN13,
	MGPIO_PIN14,
	MGPIO_PIN15,
};
enum MGPIO_PORTS
{
	MGPIO_PORTA,
	MGPIO_PORTB,
	MGPIO_PORTC,
};
enum MGPIO_STATES
{
	MGPIO_LOW,
	MGPIO_HIGH,
};
//OUTPUT STATES LOW SPEED
#define MGPIO_OUTPUT_PP_LowSpeed 0b0100000
#define MGPIO_OUTPUT_PP_PU_LowSpeed 0b0100001
#define MGPIO_OUTPUT_PP_PD_LowSpeed 0b0100010
#define MGPIO_OUTPUT_OD_LowSpeed 0b0110000
#define MGPIO_OUTPUT_OD_PU_LowSpeed 0b0110001
#define MGPIO_OUTPUT_OD_PD_LowSpeed 0b0110010
//OUTPUT STATES MEDIUM SPEED
#define MGPIO_OUTPUT_PP_MEDIUM 0b0100100
#define MGPIO_OUTPUT_PP_PU_MEDIUM 0b0100101
#define MGPIO_OUTPUT_PP_PD_MEDIUM 0b0100110
#define MGPIO_OUTPUT_OD_MEDIUM 0b0110100
#define MGPIO_OUTPUT_OD_PU_MEDIUM 0b0110101
#define MGPIO_OUTPUT_OD_PD_MEDIUM 0b0110110
//OUTPUT HIGH SPEED
#define MGPIO_OUTPUT_PP_HIGH 0b0101000
#define MGPIO_OUTPUT_PP_PU_HIGH 0b0101001
#define MGPIO_OUTPUT_PP_PD_HIGH 0b0101010
#define MGPIO_OUTPUT_OD_HIGH 0b0111000
#define MGPIO_OUTPUT_OD_PU_HIGH 0b0111001
#define MGPIO_OUTPUT_OD_PD_HIGH 0b0111010
//OUTPUT VERYHIGH SPEED
#define MGPIO_OUTPUT_PP_VERYHIGH 0b0101100
#define MGPIO_OUTPUT_PP_PU_VERYHIGH 0b0101101
#define MGPIO_OUTPUT_PP_PD_VERYHIGH 0b0101110
#define MGPIO_OUTPUT_OD_VERYHIGH 0b0111100
#define MGPIO_OUTPUT_OD_PU_VERYHIGH 0b0111101
#define MGPIO_OUTPUT_OD_PD_VERYHIGH 0b0111110
//INPUT STATES
#define MGPIO_INPUT_F 0b0000
#define MGPIO_INPUT_PU 0b0001
#define MGPIO_INPUT_PD 0b0010
//ANALOG STATE
#define MGPIO_ANALOG 0b1100
//ALTERNATIVE FUNCTIONS low speed
#define MGPIO_AF_PP_LowSpeed 0b1000000
#define MGPIO_AF_PP_PU_LowSpeed 0b1000001
#define MGPIO_AF_PP_PD_LowSpeed 0b1000010
#define MGPIO_AF_OD_LowSpeed 0b1010000
#define MGPIO_AF_OD_PU_LowSpeed 0b1010001
#define MGPIO_AF_OD_PD_LowSpeed 0b1010010
//ALTERNATIVE FUNCTIONS medium speed
#define MGPIO_AF_PP_MEDIUM 0b1000100
#define MGPIO_AF_PP_PU_MEDIUM 0b1000101
#define MGPIO_AF_PP_PD_MEDIUM 0b1000110
#define MGPIO_AF_OD_MEDIUM 0b1010100
#define MGPIO_AF_OD_PU_MEDIUM 0b1010101
#define MGPIO_AF_OD_PD_MEDIUM 0b1010110
//ALTERNATIVE FUNCTIONS HIGH speed
#define MGPIO_AF_PP_HIGH 0b1001000
#define MGPIO_AF_PP_PU_HIGH 0b1001001
#define MGPIO_AF_PP_PD_HIGH 0b1001010
#define MGPIO_AF_OD_HIGH 0b1011000
#define MGPIO_AF_OD_PU_HIGH 0b1011001
#define MGPIO_AF_OD_PD_HIGH 0b1011010
//ALTERNATIVE FUNCTIONS VERY HIGH speed
#define MGPIO_AF_PP_VERYHIGH 0b1001100
#define MGPIO_AF_PP_PU_VERYHIGH 0b1001101
#define MGPIO_AF_PP_PD_VERYHIGH 0b1001110
#define MGPIO_AF_OD_VERYHIGH 0b1011100
#define MGPIO_AF_OD_PU_VERYHIGH 0b1011101
#define MGPIO_AF_OD_PD_VERYHIGH 0b1011110




#endif  MGPIO_INTERFACE_H_

