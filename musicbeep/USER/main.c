#include "stm32f10x.h"

/*
  ******************************************************************************
  * @�ļ�   (file)   musicbeep/USER/main.c
  * @���� (author)   ͨ��1621
  * @�汾(version)   ����ģ�壺���ڹ̼��� STM32F10x_StdPeriph_Lib_V3.5.0
  * @����   (date)   30-December-2018
  * @���  (brief)   �����������������г������ں���main����
  *          This file provides template��������
  ******************************************************************************

*/


#include "SysTick.h"
//#include "beep.h"
#include "led.h"
#include "key.h"
#include "display.h"
#include "LCD_5110.h"
#include "timer.h"

 

 int main(void)
 {	
 SysTick_Init(72);               //��ʱ����ɶ�Ĵ�������
			char id=0;									//Ĭ�ϲ��ŵ���
			char max=6;										//������������Ŀ
	 //	u8 key;										//һ��8λ���ֽڱ���
	LED_Init();										 //LED�Ƴ�ʼ��
//	BEEP_Init();									 //��������ʼ��
	KEY_Init();                    //KEY������ʼ��
	Display_Init();                //LED����ܳ�ʼ��
	LCD_Init();                    //LCD��Ļ��ʼ��

	/*****************��ӭ����***********************/	
	LCD_clear();//Һ������	
  LCD_draw_bmp_pixel(0,0,0,84,48);                  //��ӭ��ʹ��    	
	 Display_Start();																	//����ܿ�������

   while(KEY4==1);  	 					  //1.ֱ������������
//	 LCD_clear();                                     //Һ������

//	TIM_Configuration();                            //��ʱ������ 
//	TIM_NVIC_Configuration();                       //�ж�����

 /*******************������************************/
// 		TIM2_IRQHandler();
//Music_Quiet();
	 while(1)
	{ 
		
		if(KEY4==0){ 						
			LCD_Start();														//Һ����ʾ
			Display_Clear();												//���������
			LED_Start();
			LCD_clear();
		}	
//			if(KEY3==0)
//			{				
//				PAout(2)=0;
//				
//			}
						
		if(id>max) id=0;											//�������Խ�����
			if(id<0) id=max;
			Music_Play(id);
						
//		Scan();
		
//LCD_clear();		
		if(KEY2==0) id+=1;
		else	if(KEY1==0) id-=1;
//		else	if(KEY3==0) 	Music_Quiet();//���˸� (�V��V��)��ȥ�����̵���
		else id+=1;

	} //whileѭ������


	
}//����������
 
 
 