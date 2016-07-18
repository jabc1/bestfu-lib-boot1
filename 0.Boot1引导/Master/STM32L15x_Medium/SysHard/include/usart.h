/***************************Copyright xxxxx 2015-12-30**************************
**  文    件：  usart.h
**  功    能：  串口底层驱动函数头文件
**  编    译：  MDK-ARM Professional Versoin: 5.12.0.0
**  版    本：  V1.0
**  编    写：  Jay
**  创建日期：  2015-12-29
**  修改日期：  无
**  说    明：  初版
*******************************************************************************/
#ifndef __USART_H
#define	__USART_H

#if (USART_INTERFACE_EN > 0u )
/****************************宏定义********************************************/


/****************************函数声明******************************************/
void USART_Init(BF_INT32U BaudRate);
BF_INT08U USART_Send(BF_INT08U *data, BF_INT08U len, BF_INT08U level);

#endif /* usart.h */
#endif
/***********************************END OF FILE***********************************/
