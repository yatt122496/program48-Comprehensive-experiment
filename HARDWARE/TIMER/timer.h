#ifndef __TIMER_H
#define __TIMER_H
#include "sys.h"
//////////////////////////////////////////////////////////////////////////////////	 
//������ֻ��ѧϰʹ�ã�δ���������ɣ��������������κ���;
//ALIENTEK��ӢSTM32F103������V1
//��ʱ�� ��������	   
//����ԭ��@ALIENTEK
//������̳:www.openedv.com
//��������:2015/1/10
//�汾��V1.5
//��Ȩ���У�����ؾ���
//Copyright(C) �������������ӿƼ����޹�˾ 2009-2019
//All rights reserved									  
//********************************************************************************
//V1.1 20150110
//1,����TIM3_PWM_Init������
//2,����LED0_PWM_VAL�궨�壬����TIM3_CH2����		
//V1.2 20150110
//1,����TIM5_Cap_Init����
//2,����TIM5_IRQHandler�жϷ�����	 
//V1.3 20150115
//1,����TIM1_PWM_Init����
//V1.4 20150118
//1,����TIM6_Int_Init������
//2,����TIM6_IRQHandler����
//V1.5 20150314
//1,����TIM7_Int_Init������
//2,����TIM7_IRQHandler����
//////////////////////////////////////////////////////////////////////////////////  

//////////////////////LCD����PWMռ�ձ�����////////////////////////////////////////
#define LCD_BLPWM_VAL   TIM8->CCR2 	//LCD PWM��������

//ͨ���ı�TIM3->CCR2��ֵ���ı�ռ�ձȣ��Ӷ�����LED0������
#define LED0_PWM_VAL TIM3->CCR2    
//TIM1 CH1��ΪPWM DAC�����ͨ�� 
#define PWM_DAC_VAL  TIM1->CCR1 

void TIM3_Int_Init(u16 arr,u16 psc);
void TIM3_PWM_Init(u16 arr,u16 psc);
void TIM5_Cap_Init(u16 arr,u16 psc);
void TIM1_PWM_Init(u16 arr,u16 psc);
void TIM6_Int_Init(u16 arr,u16 psc);
void TIM7_Int_Init(u16 arr,u16 psc);
void LCD_PWM_Init(void);
#endif






















