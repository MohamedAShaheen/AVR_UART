/********************************************************************/
/********************************************************************/
/**************       Author : Moahmed A Shaheen     *****************/
/**************       Layer : MCAL                  *****************/
/**************       SWC:    UART_PRIVATE_H_     *****************/
/**************       Version : 1.0                 *****************/
/**************       Date : 26/1/2021              *****************/


#ifndef UART_PRIVATE_H_
#define UART_PRIVATE_H_



#define udr       *((u8*)0x2c)
#define ucsra     *((u8*)0x2b)   
#define ucsrb     *((u8*)0x2a)
#define ucsrc     *((u8*)0x40)
#define ubrrl     *((u8*)0x29)  // baud rate bps
#define ubrrh     *((u8*)0x40)  // baud rate bps


#endif /* UART_PRIVATE_H_ */
