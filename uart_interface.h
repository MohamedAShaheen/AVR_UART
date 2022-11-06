/********************************************************************/
/********************************************************************/
/**************       Author : Moahmed A Shaheen     *****************/
/**************       Layer : MCAL                  *****************/
/**************       SWC:     UART_INTERFACE_H_     *****************/
/**************       Version : 1.0                 *****************/
/**************       Date : 26/1/2021              *****************/


#ifndef UART_INTERFACE_H_
#define UART_INTERFACE_H_

void uart_init(void);
void uart_send_char(u8 data);
u8 uart_receive_char(void);
void uart_send_string(u8 *str);
void uart_receive_string(u8 *str);

#endif /* UART_INTERFACE_H_ */
