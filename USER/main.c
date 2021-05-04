/**
******************************************************************************
* @file    			main.c
* @author  			Yang Fan
* @version 			V1.0
* @date    			2020-10-8
* @brief   			用3.5.0版本库建的工程模板
* @attention  		实验平台：STM32 + W5500以太网模块
*
*							
*               	内网测试，请保证W5500的IP与测试PC机在同一网段内，且不冲突
*               	如果是用网线跟PC机直连，请设置PC机本地连接地址IP为静态IP，
*					测试TCP时请将PC机的防火墙关闭
*
******************************************************************************
*/ 
#include <stdio.h>
#include <string.h>
#include "stm32f10x.h"
#include "sys.h"
#include "delay.h"


/* 注：测试TCP程序时一定要关闭防火墙！否则无法正常进行握手协议*/
int main(void)
{ 
	delay_init();
	NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2);
	

	while(1)                           			 				/*循环执行的函数*/ 
	{

	}
} 


