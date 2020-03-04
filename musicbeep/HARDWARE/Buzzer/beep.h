#ifndef __BEEP__H
#define __BEEP__H
//��������д����ֹд��û����һ���鷳�� ���������û������������
/*/////////////////////////////////////////////////////////////////////////////////	 
//��������BEEPͷ�ļ� ���ã�λ������������
//��������ض����������ʺ�STM32F10xϵ�У�		   
//��������:2018/12/30
//All rights reserved
******************************************************************************* */
#include "sys.h"
#include "stm32f10x_gpio.h"
#include "stm32f10x_rcc.h"

//����GPIOC��λ��ַ�����꣬λ����꣬�����
#define PBeep PCout(6)

#define BEEP_PORT	GPIOC
#define BEEP_PIN	GPIO_Pin_6
#define BEEP_PORT_RCC RCC_APB2Periph_GPIOC
void BEEP_Init(void);
void Sound(u16 frq);
void play(void);
#endif

