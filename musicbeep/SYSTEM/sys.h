#ifndef __SYSTEM__H
#define __SYSTEM__H
#include "stm32f10x.h"
//�������ڣ�12.31.2018
//���ܼ�飺λ������,ʵ��51���Ƶ�GPIO���ƹ���            IO�ڲ����궨��
//����ʵ��˼��,�ο�<<CM3Ȩ��ָ��>>������(87ҳ~92ҳ).

//0,��֧��ucos
//1,֧��ucos
#define SYSTEM_SUPPORT_OS		0		//����ϵͳ�ļ����Ƿ�֧��UCOS																	    	 


//����λ����ַ��
#define BITBAND(addr,bitnum) ((addr&0xF0000000) + 0x02000000 + ((addr&0x000FFFFF)<<5) + (bitnum<<2))
#define MEM_ADDR(addr) *((volatile unsigned long *)(addr))
#define BIT_ADDR(addr,bitnum) MEM_ADDR(BITBAND(addr,bitnum))
//IO�ڵ�ַӳ��
//��������Ĵ�����ַ
#define GPIOA_ODR_Addr	(GPIOA_BASE + 12)
#define GPIOB_ODR_Addr	(GPIOB_BASE + 12)
#define GPIOC_ODR_Addr	(GPIOC_BASE + 12)
#define GPIOD_ODR_Addr	(GPIOD_BASE + 12)
#define GPIOE_ODR_Addr	(GPIOE_BASE + 12)
#define GPIOF_ODR_Addr	(GPIOF_BASE + 12)
#define GPIOG_ODR_Addr	(GPIOG_BASE + 12)
//��������Ĵ�����ַ //IO�ڵ�ַӳ��
#define GPIOA_IDR_Addr	(GPIOA_BASE + 8)
#define GPIOB_IDR_Addr	(GPIOB_BASE + 8)
#define GPIOC_IDR_Addr	(GPIOC_BASE + 8)
#define GPIOD_IDR_Addr	(GPIOD_BASE + 8)
#define GPIOE_IDR_Addr	(GPIOE_BASE + 8)
#define GPIOF_IDR_Addr	(GPIOF_BASE + 8)
#define GPIOG_IDR_Addr	(GPIOG_BASE + 8)

//IO�ڲ���,ֻ�Ե�һ��IO��!
//ȷ��n��ֵС��16!
#define PAout(n)   BIT_ADDR(GPIOA_ODR_Addr,n)  //��� 
#define PAin(n)    BIT_ADDR(GPIOA_IDR_Addr,n)  //���� 

#define PBout(n)   BIT_ADDR(GPIOB_ODR_Addr,n)  //��� 
#define PBin(n)    BIT_ADDR(GPIOB_IDR_Addr,n)  //���� 

#define PCout(n)   BIT_ADDR(GPIOC_ODR_Addr,n)  //��� 
#define PCin(n)    BIT_ADDR(GPIOC_IDR_Addr,n)  //���� 

#define PDout(n)   BIT_ADDR(GPIOD_ODR_Addr,n)  //��� 
#define PDin(n)    BIT_ADDR(GPIOD_IDR_Addr,n)  //���� 

#define PEout(n)   BIT_ADDR(GPIOE_ODR_Addr,n)  //��� 
#define PEin(n)    BIT_ADDR(GPIOE_IDR_Addr,n)  //����

#define PFout(n)   BIT_ADDR(GPIOF_ODR_Addr,n)  //��� 
#define PFin(n)    BIT_ADDR(GPIOF_IDR_Addr,n)  //����

#define PGout(n)   BIT_ADDR(GPIOG_ODR_Addr,n)  //��� 
#define PGin(n)    BIT_ADDR(GPIOG_IDR_Addr,n)  //����

//����Ϊ��ຯ��
void WFI_SET(void);		//ִ��WFIָ��
void INTX_DISABLE(void);//�ر������ж�
void INTX_ENABLE(void);	//���������ж�
void MSR_MSP(u32 addr);	//���ö�ջ��ַ

#endif
