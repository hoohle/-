#include "key.h"
#include "systick.h"
#include "LCD_5110.h"
#include "led.h"
#include "display.h"
#include "timer.h"
/*/////////////////////////////////////////////////////////////////////////////////	 
//�������Ǽ���Դ�ļ� 
���ã�����ɨ�� 
1.GPIO��ʼ��
2.���صģ�����flag��ֵ�ж�
//mode:0,��֧��������;1,֧��������;
//0��û���κΰ�������
//1��KEY1����
//2��KEY2����
//3��KEY3���� 
//4��KEY4���� WK_UP
//ע��˺�������Ӧ���ȼ�,KEY1>KEY2>KEY3>KEY4
1.GPIO��ʼ��
2.������� ���� ���ŷ�����
3.ʵ�ֳ���
���ʺ�STM32F10xϵ�У�		   
��������:2018/12/30
All rights reserved
********************************************************************************/

//������ʼ������
void KEY_Init(void) //IO��ʼ��
{ //1.ʹ��ʱ��
//2.�õ���GPIO��

//4.���ģʽ=��������
//5.GPIO��ʼ��
	GPIO_InitTypeDef GPIO_InitStructure;
	RCC_APB2PeriphClockCmd(KEY_PORT_RCC, ENABLE); 	//ʹ��GPIOC GPIOAʱ��
	GPIO_InitStructure.GPIO_Pin = KEY_PINL;         //KEY123 PA567
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IPU;
	GPIO_Init(KEY_PORTL, &GPIO_InitStructure);
	
	GPIO_InitStructure.GPIO_Pin = KEY_PINR;         //KEY4 	 PC4
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IPU;
	GPIO_Init(KEY_PORTR, &GPIO_InitStructure);
}


u8 KEY_Scan(u8 mode)
{	 
	static u8 key_up=1;															//�������ɿ���־
		if(mode)key_up=1;  														//֧������		  
	if(key_up&&(KEY1==0||KEY2==0||KEY3==0||KEY4==0))
		//1    ��  	0<-��0	 ��		 0	��		0		��		 0��=0��ɨ�費ִ��
		//1    ��  	1<-��1	 ��		 0	��		0		��		 0��=1Ҫɨ�迴���ĸ���
	{
		delay_ms(8);				//ȥ���� �˴����ܳ������ʱȥ��
		key_up=0;																			//�������±�־	
		if(KEY1==0)return KEY1_PRES;
		else if(KEY2==0)return KEY2_PRES;
		else if(KEY3==0)return KEY3_PRES;
		else if(KEY4==0)return KEY4_PRES;
	}else if(KEY1==1&&KEY2==1&&KEY3==1&&KEY4==1)key_up=1; 	    
 	return 0;							//�ް�������
}

void Scan (void)
{
				u8 key;												 //һ��8λ���ֽڱ���
			  key=KEY_Scan(0);				//1.����ɨ�����      ֧������  �ް�������KEY_Scan=0��key=0

		if (key)                  											//�ް������µ������key=0��ִ�����г���
			{																							//��⵽�а�������key!=0
			switch(key)
				{
//					case KEY1_PRES:														//��һ��					
//						Display_num(0);													//����ֵΪ-1
//						break;
//					case KEY2_PRES:
//						LCD_Write_words(0,0,7,0,12);						//����ֵΪ1
//						break;
					case KEY3_PRES:
						LED3=1;
						break;					
//					case KEY4_PRES:

//						break;
				}
			}
}
