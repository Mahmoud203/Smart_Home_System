/*
 * UART_Interface.h
 *
 *  Created on: DEC 23, 2023
 *      Author:Ahmed Abdelghafar
 */

#ifndef INCLUDE_MCAL_UART_UART_INTERFACE_H_
#define INCLUDE_MCAL_UART_UART_INTERFACE_H_
typedef enum{
	UART_RX_INTERRUPT = 0,
	UART_UDRE_INTERRUPT,
	UART_TX_INTERRUPT,
}UART_INTERRUPT_e;

void MUART_voidInit(void);
void MUART_voidSendByteSyncBlocking(u8 A_u8DataByte);
u8 MUART_u8ReadByteAsync(void);
void MUART_voidSendByteSyncNonBlocking(u8 A_u8DataByte);
u8 MUART_u8ReadByteSyncBlocking(void);
void MUART_voidSendStringSyncNonBlocking(u8 *A_pu8String);
void MUART_voidSendByteAsync(u8 A_u8DataByte);
u8 MUART_u8ReadByteSyncNonBlocking(void);
void MUART_voidSetCallBack(UART_INTERRUPT_e A_InterruptSource , void (*A_PToFunc)(void));
void MUART_voidSendStringSyncBlocking(u8 *A_pu8String);

#endif /* INCLUDE_MCAL_UART_UART_INTERFACE_H_ */
