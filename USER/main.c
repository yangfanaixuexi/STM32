/**
******************************************************************************
* @file    			main.c
* @author  			Yang Fan
* @version 			V1.0
* @date    			2020-10-8
* @brief   			��3.5.0�汾�⽨�Ĺ���ģ��
* @attention  		ʵ��ƽ̨��STM32 + W5500��̫��ģ��
*
*							
*               	�������ԣ��뱣֤W5500��IP�����PC����ͬһ�����ڣ��Ҳ���ͻ
*               	����������߸�PC��ֱ����������PC���������ӵ�ַIPΪ��̬IP��
*					����TCPʱ�뽫PC���ķ���ǽ�ر�
*
******************************************************************************
*/ 
#include <stdio.h>
#include <string.h>
#include "stm32f10x.h"
#include "sys.h"
#include "delay.h"


/* ע������TCP����ʱһ��Ҫ�رշ���ǽ�������޷�������������Э��*/
int main(void)
{ 
	delay_init();
	NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2);
	

	while(1)                           			 				/*ѭ��ִ�еĺ���*/ 
	{

	}
} 


