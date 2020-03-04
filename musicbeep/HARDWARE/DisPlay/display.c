#include "display.h"
#include "systick.h"

/*/////////////////////////////////////////////////////////////////////////////////	 
//����������ʾ��Դ�ļ� 
���ã���ʾHELLO ��ʾ��Ŀ123
1.GPIO��ʼ��
2.GPIOλ������LED�����
3.ʵ�ֳ���ֻҪ��ÿ�׸貥�ŵ�ʱ�����ó��������
(�ʺ�STM32F10xϵ��)	   
��������:2018/12/30
All rights reserved
********************************************************************************/
void Display_Init(){   /*����ܴ���->�ҹܽŶ�Ӧ*/ /*A8 A11 A12 C7 C8 C9*/
	
	GPIO_InitTypeDef GPIO_InitStructure;
	RCC_APB2PeriphClockCmd( EDG_PORT_RCC, ENABLE ); 					//1.ʹ��GPIOCʱ��
	GPIO_InitStructure.GPIO_Pin = EDG_PINL|EDG_PINR;					//2.�õ���GPIO��
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;					//3.�����ٶ�
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;					//4.���ģʽ=����
	GPIO_Init(EDG_PORTL, &GPIO_InitStructure);								  //5.GPIO��ʼ��
	
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;					//3.�����ٶ�
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;					//4.���ģʽ=����
	GPIO_Init(EDG_PORTR, &GPIO_InitStructure);								  //5.GPIO��ʼ��
 		
  GPIO_InitStructure.GPIO_Pin =GPIO_Pin_12|GPIO_Pin_13|GPIO_Pin_14|GPIO_Pin_15 ;   
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;	
  GPIO_Init(GPIOB, &GPIO_InitStructure);
	
}

void CD4534_clear(void)
{
	A=0,B=0,C=0,D=0;
}

void Display_Start(void)
	{
		
		l1=1,l2=1,l3=1,R1=1;R2=1;R3=1;
		B=1,C=1;
	}
	
void Display_Pause(void)
	{
		l1=1,l2=1,l3=1,R1=1;R2=1;R3=1;
		CD4534_clear();
	}
	
void Display_Clear(void)
{
	l1=0,l2=0,l3=0,R1=0;R2=0;R3=0;
	A=0,B=0,C=0,D=0;
}


void Display_num(u8 num)
{
	switch(num){
		case 0:
			Display_Clear();			
		break;
		
		case 1:
			Display_Clear();
		R3=1,A=1;
		break;
		
		case 2:
			Display_Clear();
		R3=1,B=1;
		break;
		
		case 3:
			Display_Clear();
		R3=1,A=1,B=1;
		break;
		
		case 4:
			Display_Clear();
		R3=1,C=1;
		break;
		
		case 5:
			Display_Clear();
		R3=1,A=1,C=1;
		break;
		
		case 6:
			Display_Clear();
		R3=1,B=1,C=1;
		break;
		
		case 7:
			Display_Clear();
		R3=1,A=1,B=1,C=1;
		break;
		
		case 8:
			Display_Clear();
		R3=1,D=1;
		break;
		
		case 9:
			Display_Clear();
		R3=1,A=1,D=1;
		break;
		}
}

