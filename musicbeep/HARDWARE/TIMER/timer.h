#ifndef __TIM2_H
#define __TIM2_H

/*/////////////////////////////////////////////////////////////////////////////////
/�������Ƕ�ʱ��TIM2ͷ�ļ� ���ã��̽�PA2����������PC6��ʵ��PWM�����Ʒ�����
//TIM2��ʱ����ض����������ʺ�STM32F10xϵ�У�
//��������:2018/12/30
//All rights reserved
********************************************************************************/
#include "sys.h"
#include "stm32f10x_gpio.h"
#include "stm32f10x_rcc.h"
#include "stm32f10x_tim.h"
#include "LED.h"
#include "key.h"
#include "LCD_5110.h"


#define  proport  	10000 					//Tclk/(psc+1)=72000000/(7199+1)
#define  P0					0//��ֹ��
#define  L1       ((proport/131)-1)//�͵���do �����ڸ���Tout= ((arr+1)*(psc+1))/Tclk�Ƴ�arrֵ���Ǳ���define�����ֵ��ToutΪ����Ƶ��131Hz�ĵ�����Tclk=72MHz
#define  L2       ((proport/147)-1)//�͵���re ������
#define  L3       ((proport/165)-1)//�͵���mi ������
#define  L4       ((proport/176)-1)//�͵���fa ������
#define  L5       ((proport/196)-1)//�͵���sol������
#define  L6       ((proport/220)-1)//�͵���la ������
#define  L7       ((proport/247)-1)//�͵���si ������
#define  A1				((proport/139)-1)//��1
#define  A2				((proport/156)-1)//��2
#define  A4       ((proport/185)-1)//��4
#define  A5       ((proport/208)-1)//��5
#define  A6				((proport/233)-1)//��6


#define  M1       ((proport/262)-1)//�е���do ������
#define  M2       ((proport/294)-1)//�е���re ������
#define  M3       ((proport/330)-1)//�е���mi ������ 
#define  M4       ((proport/349)-1)//�е���fa ������
#define  M5       ((proport/392)-1)//�е���sol������
#define  M6       ((proport/440)-1)//�е���la ������
#define  M7       ((proport/494)-1)//�е���si ������
#define  B1				((proport/277)-1)//
#define  B2				((proport/311)-1)//
#define  B4       ((proport/370)-1)//
#define  B5       ((proport/416)-1)//
#define  B6				((proport/466)-1)//

#define  H1       ((proport/523)-1)//�ߵ���do ������
#define  H2       ((proport/587)-1)//�ߵ���re ������
#define  H3       ((proport/659)-1)//�ߵ���mi ������
#define  H4       ((proport/698)-1)//�ߵ���fa ������
#define  H5       ((proport/784)-1)//�ߵ���sol������
#define  H6       ((proport/880)-1)//�ߵ���la ������
#define  H7       ((proport/988)-1)//�ߵ���si ������
#define  C1				((proport/555)-1)//
#define  C2				((proport/623)-1)//
#define  C4       ((proport/740)-1)//
#define  C5       ((proport/831)-1)//
#define  C6				((proport/933)-1)//
//#define	csb



void Timer2_Init(u16 Period);
void Music_Play(char c);//���ų������
void TIM2_IRQHandler(void);

void Music_Quiet(void);//�������
#endif
