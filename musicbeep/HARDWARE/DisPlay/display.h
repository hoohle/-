#ifndef __SCREEN__H
#define __SCREEN__H

/*/////////////////////////////////////////////////////////////////////////////////	 
//����������Ļͷ�ļ� ���ã�λ������LED�����
//LED�������ض����������ʺ�STM32F10xϵ�У�
Ӳ���ͺţ�LED����3λ�˶������ XDSM320361D3B
������2��
����оƬ��CD4534BE����������
//��������:2018/12/31
//All rights reserved
******************************************************************************* */
#include "sys.h"
#include "stm32f10x_gpio.h"
#include "stm32f10x_rcc.h"

//����GPIOA��8��11��12��C��7��8��9����λ��ַ�����꣬λ����꣬�����
#define l1 PAout(8)
#define l2 PAout(11)
#define l3 PAout(12)
#define R1 PCout(7)
#define R2 PCout(8)
#define R3 PCout(9)
#define A	 PBout(12)  //	
#define B	 PBout(13)  //	
#define C  PBout(14)  //
#define D  PBout(15)  //

#define EDG_PORTL GPIOA
#define EDG_PORTR GPIOC
#define EDG_PINL GPIO_Pin_8|GPIO_Pin_11|GPIO_Pin_12
#define EDG_PINR GPIO_Pin_7|GPIO_Pin_8|GPIO_Pin_9
#define EDG_PORT_RCC RCC_APB2Periph_GPIOA|RCC_APB2Periph_GPIOC
void Display_Init(void);//��ʾ��ʼ��
void Display_Clear(void);//�������Ƴ���
void CD4534_clear(void);//��������������

void Display_Start(void);//������ʾ����
void Display_Pause(void);//��ͣ��ʾ����
void Display_num(u8 num);//��ʾ���ֳ���

#endif

