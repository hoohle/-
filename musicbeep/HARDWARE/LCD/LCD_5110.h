#ifndef __LCD5110_H
#define __LCD5110_H	 

/*/////////////////////////////////////////////////////////////////////////////////	
/��������LCDͷ�ļ�
//LCDҺ����ʾ����ض�����������س���˵�����ʺ�STM32F10xϵ�У�	
Ӳ���ͺţ�Nokia��ŵ���ǣ�5110
84*48�ĵ��� �¸�λ ����ɨ��
//��������:2018/01/04
//All rights reserved
********************************************************************************/   	 
#include "sys.h"
#include "stm32f10x_gpio.h"
#include "stm32f10x_rcc.h"
#include "display.h"

//#define SET_LCD_RST	LCD_RST=1	//��λ
#define SET_LCD_RST	 GPIO_SetBits(GPIOC,GPIO_Pin_5)//��λ  C5��1
#define CLR_LCD_RST  GPIO_ResetBits(GPIOC,GPIO_Pin_5)//C5��0

#define SET_LCD_CE	GPIO_SetBits(GPIOB,GPIO_Pin_0)//��λ   B0
#define CLR_LCD_CE	GPIO_ResetBits(GPIOB,GPIO_Pin_0) 

#define SET_LCD_DC	GPIO_SetBits(GPIOB,GPIO_Pin_1)//��λ   B1
#define CLR_LCD_DC	GPIO_ResetBits(GPIOB,GPIO_Pin_1) 

#define SET_SDIN	GPIO_SetBits(GPIOB,GPIO_Pin_10)//��λ   B10
#define CLR_SDIN	GPIO_ResetBits(GPIOB,GPIO_Pin_10) 

#define SET_SCLK	GPIO_SetBits(GPIOB,GPIO_Pin_11)//��λ   B11
#define CLR_SCLK	GPIO_ResetBits(GPIOB,GPIO_Pin_11) 

  /**********************************************************************
* �������ƣ�LCD_write_byte()
* �������ܣ�дһ���ֽ�
* ��ڲ�����data,Ҫд����ֽ�;command:0Ϊ����,1Ϊ����
* ���ڲ�������
* �޸���  ��BDC
* �޸�ʱ�䣺2011/08/04
***********************************************************************/
void LCD_write_byte( unsigned char data, unsigned char command)    ;

   /**********************************************************************
* �������ƣ�LCD_clear()		
* �������ܣ�Һ������
* ��ڲ�������
* ���ڲ�������
* �޸���  ��BDC
* �޸�ʱ�䣺2011/08/04
**********************************************************************/
void LCD_clear(void)    ;

/**********************************************************************
* �������ƣ�LCD_Init()		
* �������ܣ���ʼ��nokia5110
* ��ڲ�������
* ���ڲ�������
* �޸���  ��BDC
* �޸�ʱ�䣺2011/08/04
**********************************************************************/
void LCD_Init(void)  ;

  
  /**********************************************************************
* �������ƣ�LCD_set_XY()
* �������ܣ���궨λx��y��
* ��ڲ�����X,Y   x��y��
* ���ڲ�������
* �޸���  ��BDC
* �޸�ʱ�䣺2011/08/04
**********************************************************************/
void LCD_set_XY( unsigned char X,  unsigned char Y)        ;

 /***********************************************************************
* �������ƣ�LCD_write_char()
* �������ܣ�д��1���ַ�
* ��ڲ�����c   Ҫд�������
* ���ڲ�������
* �޸���  ��BDC
* �޸�ʱ�䣺2011/08/04
**********************************************************************/
void LCD_write_char( unsigned char c)   ;

  /***********************************************************************
* �������ƣ�LCD_Write_Char()
* �������ܣ�д��1���ַ�
* ��ڲ�����X:��;Y:��;asc:Ҫд�������
* ���ڲ�������
* �޸���  ��BDC
* �޸�ʱ�䣺2011/08/04
**********************************************************************/
void LCD_Write_Char( unsigned char X, unsigned char Y, unsigned char asc)         ;

/***********************************************************************
* �������ƣ�LCD_Write_Num()
* �������ܣ���ʾ����
* ��ڲ�����X:��;Y:��;num:����;N:Ҫ��ʾ�ı�����λ��
* ���ڲ�������
* �޸���  ��BDC
* �޸�ʱ�䣺2011/08/04
**********************************************************************/
void LCD_Write_Num( unsigned char X, unsigned char Y ,   int num, unsigned char N)    ;

/***********************************************************************
* �������ƣLLCD_write_english_string()
* �������ܣ�дӢ���ַ���
* ��ڲ�����X,Y,*S------x��y��*sΪӢ���ַ���
* ���ڲ�������
* �޸���  ��BDC
* �޸�ʱ�䣺2011/08/04
***********************************************************************/
void LCD_write_english_string( unsigned char X, unsigned char Y,unsigned char *s)  ;

 

/*********************************************************** 
*�������ƣ�LCD_vertical_bar
*�������ܣ�������
*��ڲ�����X��λͼ���Ƶ���ʼX�vertical_bar��������
*
*���ڲ������� 
*�޸���  ��
*�޸�ʱ�䣺
*�� ע�� 
***********************************************************/

void LCD_vertical_bar(unsigned char X , unsigned char *vertical_bar);
/*********************************************************** 
*�������ƣ�LCD_Vertical_Bar
*�������ܣ�������  ��̬
*��ڲ���:   X:�����ꣻhigh:��Ҫ�ĸ߶�
*
*���ڲ������� 
*�޸���  ��
*�޸�ʱ�䣺
*�� ע�� 
***********************************************************/


//void LCD_Vertical_Bar(unsigned char X,unsigned char high )  ;
void LCD_Vertical_Bar(unsigned char X,unsigned int high,unsigned int  line);

/*********************************************************** 
*�������ƣ�LCD_Write_cn
*�������ܣ�д����
*��ڲ���: row:�� page:ҳ dd:�ַ� 
*
*���ڲ������� 
*�޸���  ��
*�޸�ʱ�䣺
*�� ע�� 
***********************************************************/
//void LCD_Paodao(void) ;


/***********************************************************
�������ƣ�LCD_draw_bmp_pixel
�������ܣ�λͼ���ƺ���
��ڲ�����X��Y    ��λͼ���Ƶ���ʼX��Y���ꣻ
          *map    ��λͼ�������ݣ�
          Pix_x   ��λͼ���أ�����
          Pix_y   ��λͼ���أ���
���ڲ�������
�� ע��
***********************************************************/
void LCD_draw_bmp_pixel(unsigned char X,unsigned char Y,unsigned char *map, unsigned char Pix_x,unsigned char Pix_y);
void LCD_draw_bmp_pause(unsigned char X,unsigned char Y,unsigned char *map, unsigned char Pix_x,unsigned char Pix_y);

void LCD_Write_cn(unsigned char row, unsigned char page,unsigned char c); 

void LCD_Write_words(unsigned char row,unsigned char page,unsigned char n,unsigned char c,unsigned word_spacing);  //n ����д�����֣�row���У�page��ҳ��c ������ֿ��ĵڼ�����ʼ,word_spacing�����ּ�࣬�Ƽ�Ϊ14

void Lcd_Display(u32 date);
void LCD_Start(void);//LCDҺ��������ʾ����
void LCD_ID(char n);//��ʾ������Ŀ������
#endif

