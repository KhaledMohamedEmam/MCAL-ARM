/*
 * MGPIO_prog.c
 *
 *  Created on: Jul 1, 2022
 *      Author: AlaaElnagar
 */
#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "MGPIO_interface.h"
#include "MGPIO_private.h"
#include "MGPIO_config.h"
/*void MGPIO_voidSetPinDirection( u8 Copy_u8Port , u8 Copy_u8Pin , u16 Copy_u8Mode  ){

	switch( Copy_u8Port ){
	case GPIOA_PORT :
		MGPIOA -> PUPDR   &=  ~((u32)((0b0000011)<<(Copy_u8Pin*2)));
		MGPIOA -> PUPDR   |=    (u32)((Copy_u8Mode&0b0000011)<<(Copy_u8Pin*2)) ;
		MGPIOA -> OSPEEDR &= ~ ((u32)(( (0b0001100)>>2 )<<(Copy_u8Pin*2))) ;
		MGPIOA -> OSPEEDR |=    (u32)(( (Copy_u8Mode & 0b0001100)>>2 )<<(Copy_u8Pin*2)) ;

		MGPIOA -> OTYPER  &= ~ ((u32)(( (0b0010000)>>4 )<<Copy_u8Pin)) ;
		MGPIOA -> OTYPER  |=    (u32)(( (Copy_u8Mode&0b0010000)>>4 )<<Copy_u8Pin) ;

		MGPIOA -> MODER   &= ~ ((u32)(( (0b1100000)>>5)<<(Copy_u8Pin*2))) ;
		MGPIOA -> MODER   |=    (u32)(( (Copy_u8Mode&0b1100000)>>5 )<<(Copy_u8Pin*2)) ;
		break ;
	case GPIOB_PORT :
		MGPIOB -> PUPDR   &= ~ ((u32)((0b0000011)<<(Copy_u8Pin*2)));
		MGPIOB -> PUPDR   |=    (u32)((Copy_u8Mode&0b0000011)<<(Copy_u8Pin*2)) ;

		MGPIOB -> OSPEEDR &= ~ ((u32)(( (0b0001100)>>2 )<<(Copy_u8Pin*2))) ;
		MGPIOB -> OSPEEDR |=    (u32)(( (Copy_u8Mode&0b0001100)>>2 )<<(Copy_u8Pin*2)) ;

		MGPIOB -> OTYPER  &= ~ ((u32)(( (0b0010000)>>4 )<<Copy_u8Pin)) ;
		MGPIOB -> OTYPER  |=    (u32)(( (Copy_u8Mode&0b0010000)>>4 )<<Copy_u8Pin) ;

		MGPIOB -> MODER   &= ~ ((u32)(( (0b1100000)>>5)<<(Copy_u8Pin*2))) ;
		MGPIOB -> MODER   |=    (u32)(( (Copy_u8Mode&0b1100000)>>5 )<<(Copy_u8Pin*2)) ;
		break ;
	case GPIOC_PORT :
		MGPIOC -> PUPDR   &= ~ ((u32)((0b0000011)<<(Copy_u8Pin*2)));
		MGPIOC -> PUPDR   |=    (u32)((Copy_u8Mode&0b0000011)<<(Copy_u8Pin*2)) ;

		MGPIOC -> OSPEEDR &= ~ ((u32)(( (0b0001100)>>2 )<<(Copy_u8Pin*2))) ;
		MGPIOC -> OSPEEDR |=    (u32)(( (Copy_u8Mode&0b0001100)>>2 )<<(Copy_u8Pin*2)) ;

		MGPIOC -> OTYPER  &= ~ ((u32)(( (0b0010000)>>4 )<<Copy_u8Pin)) ;
		MGPIOC -> OTYPER  |=    (u32)(( (Copy_u8Mode&0b0010000)>>4 )<<Copy_u8Pin) ;

		MGPIOC -> MODER   &= ~ ((u32)(( (0b1100000)>>5)<<(Copy_u8Pin*2))) ;
		MGPIOC -> MODER   |=    (u32)(( (Copy_u8Mode&0b1100000)>>5 )<<(Copy_u8Pin*2)) ;
		break ;

	default:
		break ;

}

}

void MGPIO_voidSetPinValue    ( u8 Copy_u8Port , u8 Copy_u8Pin , u8 Copy_u8Value ){

	switch( Copy_u8Port ){

		case GPIOA_PORT:

			if( Copy_u8Value == Gpio_Pin_High ){

				SET_BIT( MGPIOA -> ODR , Copy_u8Pin );

			}
			else if(Copy_u8Value == Gpio_Pin_LOW){

				 CLR_BIT( MGPIOA -> ODR , Copy_u8Pin );

			}

		break;
		case GPIOB_PORT:

			if( Copy_u8Value == Gpio_Pin_High ){

				SET_BIT( MGPIOB -> ODR , Copy_u8Pin );

			}
			else if(Copy_u8Value == Gpio_Pin_LOW){

				 CLR_BIT( MGPIOB -> ODR , Copy_u8Pin );

			}

		break;
		case GPIOC_PORT:

			if( Copy_u8Value == Gpio_Pin_High ){

				SET_BIT( MGPIOC -> ODR , Copy_u8Pin );

			}
			else if(Copy_u8Value == Gpio_Pin_LOW){

				 CLR_BIT( MGPIOC -> ODR , Copy_u8Pin );

			}

		break;

	}

}


u8   MGPIO_u8GetPinValue      ( u8 Copy_u8Port , u8 Copy_u8Pin ){

		u8 LOC_u8Result = 0;

		switch( Copy_u8Port ){

			case GPIOA_PORT:  LOC_u8Result = GET_BIT( MGPIOA -> IDR , Copy_u8Pin ); break;
			case GPIOB_PORT:  LOC_u8Result = GET_BIT( MGPIOB -> IDR , Copy_u8Pin ); break;
			case GPIOC_PORT:  LOC_u8Result = GET_BIT( MGPIOC -> IDR , Copy_u8Pin ); break;

		}

		return LOC_u8Result ;

}*/
void MGPIO_voidSetPinDirection( u8 Copy_u8Port , u8 Copy_u8Pin , u16 Copy_u8Mode)
{
	switch(Copy_u8Port){
	case MGPIO_PORTA:
	MGPIOA ->MODER&=~((u32)((0b1100000>>5)<<(2*Copy_u8Pin)));
	MGPIOA ->MODER|=(u32)(((Copy_u8Mode&0b1100000)>>5)<<(2*Copy_u8Pin));
	MGPIOA ->OTYPER&=~(u32)(((0b0010000>>4)<<(Copy_u8Pin)));
	MGPIOA ->OTYPER|=(u32)(((Copy_u8Mode&0b0010000)>>4)<<(Copy_u8Pin));
	MGPIOA ->OSPEEDR&=~((u32)((0b0001100>>2)<<(2*Copy_u8Pin)));
	MGPIOA ->OSPEEDR|=(u32)(((Copy_u8Mode&0b0001100)>>2)<<(2*Copy_u8Pin));
	MGPIOA ->PUPDR&=~((u32)((0b0000011)<<(2*Copy_u8Pin)));
	MGPIOA ->PUPDR|=((u32)((Copy_u8Mode)&(0b0000011))<<(2*Copy_u8Pin));
	break;
	case MGPIO_PORTB:
	MGPIOB ->MODER&=~((u32)((0b1100000>>5)<<(2*Copy_u8Pin)));
	MGPIOB ->MODER|=(u32)(((Copy_u8Mode&0b1100000)>>5)<<(2*Copy_u8Pin));
	MGPIOB ->OTYPER&=~(u32)(((0b0010000>>4)<<(Copy_u8Pin)));
	MGPIOB ->OTYPER|=(u32)(((Copy_u8Mode&0b0010000)>>4)<<(Copy_u8Pin));
	MGPIOB ->OSPEEDR&=~((u32)((0b0001100>>2)<<(2*Copy_u8Pin)));
	MGPIOB ->OSPEEDR|=(u32)(((Copy_u8Mode&0b0001100)>>2)<<(2*Copy_u8Pin));
	MGPIOB ->PUPDR&=~((u32)((0b0000011)<<(2*Copy_u8Pin)));
	MGPIOB ->PUPDR|=((u32)((Copy_u8Mode)&(0b0000011))<<(2*Copy_u8Pin));
	break;
	case MGPIO_PORTC:
    MGPIOC ->MODER&=~((u32)((0b1100000>>5)<<(2*Copy_u8Pin)));
    MGPIOC ->MODER|=(u32)(((Copy_u8Mode&0b1100000)>>5)<<(2*Copy_u8Pin));
    MGPIOC ->OTYPER&=~(u32)(((0b0010000>>4)<<(Copy_u8Pin)));
    MGPIOC ->OTYPER|=(u32)(((Copy_u8Mode&0b0010000)>>4)<<(Copy_u8Pin));
    MGPIOC ->OSPEEDR&=~((u32)((0b0001100>>2)<<(2*Copy_u8Pin)));
    MGPIOC ->OSPEEDR|=(u32)(((Copy_u8Mode&0b0001100)>>2)<<(2*Copy_u8Pin));
    MGPIOC ->PUPDR&=~((u32)((0b0000011)<<(2*Copy_u8Pin)));
    MGPIOC ->PUPDR|=((u32)((Copy_u8Mode)&(0b0000011))<<(2*Copy_u8Pin));
    break;
	}
}
void MGPIO_voidSetPinValue    ( u8 Copy_u8Port , u8 Copy_u8Pin , u8 Copy_u8Value )
{
	switch(Copy_u8Port)
	{
	case MGPIO_PORTA: if(Copy_u8Value==MGPIO_HIGH)
		SET_BIT( MGPIOA -> BSRR , Copy_u8Pin );
	else
		SET_BIT( MGPIOA -> BSRR , (Copy_u8Pin+16));
	break;
	case MGPIO_PORTB: if(Copy_u8Value==MGPIO_HIGH)
		SET_BIT( MGPIOB -> BSRR , Copy_u8Pin );
	else
		SET_BIT( MGPIOB -> BSRR , (Copy_u8Pin+16) );
	break;
	case MGPIO_PORTC:if(Copy_u8Value==MGPIO_HIGH)
		SET_BIT( MGPIOC -> BSRR , Copy_u8Pin );
	else
		SET_BIT( MGPIOC -> BSRR , (Copy_u8Pin+16) );
	break;
	}
}
u8   MGPIO_u8GetPinValue      ( u8 Copy_u8Port , u8 Copy_u8Pin )
{
	u8 LOC_u8Result=0;
	switch(Copy_u8Port)
	{
	case MGPIO_PORTA: LOC_u8Result = GET_BIT( MGPIOA -> IDR , Copy_u8Pin ); break;
	case MGPIO_PORTB: LOC_u8Result = GET_BIT( MGPIOB -> IDR , Copy_u8Pin ); break;
	case MGPIO_PORTC: LOC_u8Result = GET_BIT( MGPIOC -> IDR , Copy_u8Pin ); break;
	}
	return LOC_u8Result;
}
void MGPIO_voidSetPortVal(u8 Copy_u8Port , u32 Copy_u8val)
{
	switch(Copy_u8Port)
	{
	case MGPIO_PORTA: MGPIOA -> ODR= Copy_u8val;break;
	case MGPIO_PORTB: MGPIOB->ODR= Copy_u8val;break;
	case MGPIO_PORTC: MGPIOC->ODR= Copy_u8val;break;
	}
}
/*void MGPIO_voidSetPortDirection( u8 Copy_u8Port , u16 Copy_u8Mode)
{
	switch(Copy_u8Port){
	case MGPIO_PORTA:
		for(int i=0;i<16;i++){
	MGPIOA ->MODER&=~((u32)((0b1100000>>5)<<(2*i)));
	MGPIOA ->MODER|=(u32)(((Copy_u8Mode&0b1100000)>>5)<<(2*i));
	MGPIOA ->OTYPER&=~(u32)(((0b0010000>>4)<<(i)));
	MGPIOA ->OTYPER|=(u32)(((Copy_u8Mode&0b0010000)>>4)<<(i));
	MGPIOA ->OSPEEDR&=~((u32)((0b0001100>>2)<<(2*i)));
	MGPIOA ->OSPEEDR|=(u32)(((Copy_u8Mode&0b0001100)>>2)<<(2*i));
	MGPIOA ->PUPDR&=~((u32)((0b0000011)<<(2*i)));
	MGPIOA ->PUPDR|=((u32)((Copy_u8Mode)&(0b0000011))<<(2*i));
		}
	break;
	case MGPIO_PORTB:
		for(int i=0;i<16;i++){
	MGPIOB ->MODER&=~((u32)((0b1100000>>5)<<(2*i)));
	MGPIOB ->MODER|=(u32)(((Copy_u8Mode&0b1100000)>>5)<<(2*i));
	MGPIOB ->OTYPER&=~(u32)(((0b0010000>>4)<<(i)));
	MGPIOB ->OTYPER|=(u32)(((Copy_u8Mode&0b0010000)>>4)<<(i));
	MGPIOB ->OSPEEDR&=~((u32)((0b0001100>>2)<<(2*i)));
	MGPIOB ->OSPEEDR|=(u32)(((Copy_u8Mode&0b0001100)>>2)<<(2*i));
	MGPIOB ->PUPDR&=~((u32)((0b0000011)<<(2*i)));
	MGPIOB ->PUPDR|=((u32)((Copy_u8Mode)&(0b0000011))<<(2*i));
		}
	break;
	case MGPIO_PORTC:
		for(int i=0;i<16;i++){
    MGPIOC ->MODER&=~((u32)((0b1100000>>5)<<(2*i)));
    MGPIOC ->MODER|=(u32)(((Copy_u8Mode&0b1100000)>>5)<<(2*i));
    MGPIOC ->OTYPER&=~(u32)(((0b0010000>>4)<<(i)));
    MGPIOC ->OTYPER|=(u32)(((Copy_u8Mode&0b0010000)>>4)<<(i));
    MGPIOC ->OSPEEDR&=~((u32)((0b0001100>>2)<<(2*i)));
    MGPIOC ->OSPEEDR|=(u32)(((Copy_u8Mode&0b0001100)>>2)<<(2*i));
    MGPIOC ->PUPDR&=~((u32)((0b0000011)<<(2*i)));
    MGPIOC ->PUPDR|=((u32)((Copy_u8Mode)&(0b0000011))<<(2*i));
		}
    break;
	}*/




