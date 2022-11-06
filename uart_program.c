#include "bit_cal.h"
#include "std_types.h"
#define F_CPU 8000000
/********************************************************************/
/********************************************************************/
/**************       Author : Moahmed A Shaheen     *****************/
/**************       Layer : MCAL                  *****************/
/**************       SWC:    UART_PROGRAM_C     *****************/
/**************       Version : 1.0                 *****************/
/**************       Date : 26/1/2021              *****************/


#include "avr/delay.h"
#include "uart_private.h"
void uart_init(void){
ubrrh =0;            // baud rate
ubrrl = 51 ;         // baud rate 9600 page 165
ucsrc = 0b10000110;  // page 160   Asynchronous and Synchronous mode
	                 // on parity 1 stop bit 8 databits
ucsrb = 0b00011000;  //  page 159 8 databit disable
                     // enable tx rx   & rx complete int tx complete
                     // tx data registers embity
}

void uart_send_char(u8 data){
	while(get_bit(ucsra , 5) == 0); // page 158 bit 5
udr = data ; // hardware will sent automaticlly
}
u8 uart_receive_char(void){
	while(get_bit(ucsra ,7) == 0);
	return udr ;
}
void uart_send_string(u8 *str){
	while(*str!='\0' ){
	uart_send_char(*str);
	str++;
	}
}

 void uart_receive_string(u8 *str){
	 u8 i = 0 ;
	 while(i<8){
	str[i] = uart_receive_char();
	i++;
	 }
	 str[i] = '\0';
}







