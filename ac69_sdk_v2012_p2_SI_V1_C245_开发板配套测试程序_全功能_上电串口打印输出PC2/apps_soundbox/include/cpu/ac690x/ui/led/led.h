#ifndef _LED_H_
#define _LED_H_

#include "includes.h"
#include "sys_detect.h"
#include "sdk_cfg.h"

#define LED_BIT           BIT(10) ///PB11
#define LED_INIT_EN()     {JL_PORTA->PU &= ~LED_BIT;JL_PORTA->PD &= ~LED_BIT;JL_PORTA->DIR &= ~LED_BIT;}
#define LED_INIT_DIS()    {JL_PORTA->PU &= ~LED_BIT;JL_PORTA->PD &= ~LED_BIT;JL_PORTA->DIR |= LED_BIT;}
#define B_LED_ON()        JL_PORTA->OUT &= ~LED_BIT;
#define B_LED_OFF()       JL_PORTA->OUT |= LED_BIT;
#define R_LED_ON(...)
#define R_LED_OFF(...)

extern u32 g_led_fre;

void led_init(void);
void led_close(void);
void led_open(void);
void led_fre_set(u32 fre,u8 led_flash);
void led_scan(void *param);

#endif/*_LED_H_*/

