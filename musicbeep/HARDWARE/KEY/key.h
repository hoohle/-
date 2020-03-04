#ifndef __KEY_H
#define __KEY_H	 

/*/////////////////////////////////////////////////////////////////////////////////	
/��������KEYͷ�ļ� ���ã�λ������LED��
//KEY������ض����������ʺ�STM32F10xϵ�У�		   
//��������:2018/12/30
//All rights reserved
********************************************************************************/   	 
#include "sys.h"
#include "stm32f10x_gpio.h"
#include "stm32f10x_rcc.h"
#include "stm32f10x.h"

#define K4 PCin(4)	//PC4  
#define K1 PAin(5)	//PA5 
#define K2 PAin(6)	//PA6
#define K3 PAin(7)  //PA7*/
//������PA567 ��һ��PC4
#define KEY1  GPIO_ReadInputDataBit(GPIOA,GPIO_Pin_5)//��ȡ����1
#define KEY2  GPIO_ReadInputDataBit(GPIOA,GPIO_Pin_6)//��ȡ����2
#define KEY3  GPIO_ReadInputDataBit(GPIOA,GPIO_Pin_7)//��ȡ����3
#define KEY4  GPIO_ReadInputDataBit(GPIOC,GPIO_Pin_4)//��ȡ����4

//����FLAG
#define KEY1_PRES 1	//KEY1����
#define KEY2_PRES	2	//KEY2����
#define KEY3_PRES	3	//KEY3����
#define KEY4_PRES 4 //KEY4����

#define KEY_PORTR GPIOC
#define KEY_PORTL GPIOA
#define KEY_PINR GPIO_Pin_4
#define KEY_PINL GPIO_Pin_5|GPIO_Pin_6|GPIO_Pin_7
#define KEY_PORT_RCC RCC_APB2Periph_GPIOC|RCC_APB2Periph_GPIOA
void KEY_Init(void);//IO��ʼ��
u8 KEY_Scan(u8);  	//����ɨ�躯��
void Scan(void);		//����ɨ�����
#endif
