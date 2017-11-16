/*
 ************************************************************************
 * 作者:  IntoRobot Team
 * 版本:  V1.0.0
 * 日期:  03-30-15
 ************************************************************************
 功能描述：
 客流统计器：统计经过的人数

 所需器件:
 1.E18-D80NK 红外光电开关 漫反射式避障传感器模块

 接线说明:
 E18-D80NK                    Atom
 1.红色线                     +5V
 2.黑色线                     GND
 3.黄色线                     D0

 说明：带有“D”的为数字管脚，带有“A”的为模拟管脚，接线时请确认核心板引脚，避免接线错误。
 */

#include <WidgetPassengerCount.h>

#define InfraredSensorINPUT   D0

WidgetPassengerCount passenger = WidgetPassengerCount();
uint32_t populationNow = 0;

void countISR(void)
{
    populationNow++;
}

void setup()
{
    pinMode(InfraredSensorINPUT, INPUT_PULLUP);
    attachInterrupt(InfraredSensorINPUT, countISR, FALLING);
}

void loop()
{
    passenger.displayPopulation(populationNow);
    delay(3000);
}


