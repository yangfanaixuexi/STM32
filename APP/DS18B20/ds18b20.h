#ifndef __DS18B20__H
#define __DS18B20__H

#include "sys.h"

#define DS18B20_PORT 			   GPIOG  
#define DS18B20_PIN 			  (GPIO_Pin_11)
#define DS18B20_PORT_RCC		 RCC_APB2Periph_GPIOG


								   
#define	DS18B20_DQ_OUT PGout(11) 
#define	DS18B20_DQ_IN  PGin(11)   
   	
u8 DS18B20_Init(void);			
float DS18B20_GetTemperture(void);	
void DS18B20_Start(void);		
void DS18B20_Write_Byte(u8 dat);
u8 DS18B20_Read_Byte(void);		
u8 DS18B20_Read_Bit(void);	
u8 DS18B20_Check(void);			
void DS18B20_Reset(void);			 



#endif