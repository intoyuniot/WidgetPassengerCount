#include "WidgetPassengerCount.h"


WidgetPassengerCount::WidgetPassengerCount(uint8_t ucItem)
{
    _Item=ucItem;
    memset(pDataPopulationTopic,0,sizeof(pDataPopulationTopic));
    sprintf(pDataPopulationTopic,"channel/passengerCount_%d/data/population",_Item);
}

WidgetPassengerCount::~WidgetPassengerCount()
{

}

void WidgetPassengerCount::begin(void (*UserCallBack)(void))
{

}

void WidgetPassengerCount::displayPopulation(int population)
{
    IntoRobot.publish(pDataPopulationTopic,population);
}


