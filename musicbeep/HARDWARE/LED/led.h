#ifndef __LED_H
#define __LED_H

/*/////////////////////////////////////////////////////////////////////////////////	 
/��������LEDͷ�ļ� ���ã�λ������LED��
//LED����ض����������ʺ�STM32F10xϵ�У�		   
//��������:2018/12/30
//All rights reserved
********************************************************************************/

#include "sys.h"
#include "stm32f10x_gpio.h"
#include "stm32f10x_rcc.h"
#include "timer.h"

//����GPIOB(6789)A(01)��λ��ַ�����꣬λ����꣬�����
#define LED1 PBout(6) // PB6	
#define LED2 PBout(7) // PB7	
#define LED3 PBout(8) // PB8	
#define LED4 PBout(9) // PB9	
#define LED5 PAout(0)	// PA0
#define LED6 PAout(1) // PA1

#define LED_PORTL GPIOB
#define LED_PORTR GPIOA
#define LED_PINL GPIO_Pin_6|GPIO_Pin_7|GPIO_Pin_8|GPIO_Pin_9
#define LED_PINR GPIO_Pin_0|GPIO_Pin_1
#define LED_PORT_RCC RCC_APB2Periph_GPIOB|RCC_APB2Periph_GPIOA
	 
	 
	 
void LED_Init(void);			//led��ʼ������
void LED_Start(void);			//LED��������
void LED_Pause(void);	 		//LED��ͣ
void LED_hlhs(int c);			//������ڵ�
void LED_Q(void);					//��ˮ7����





#endif


