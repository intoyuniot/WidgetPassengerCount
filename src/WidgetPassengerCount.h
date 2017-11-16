#ifndef WIDGET_PASSENGER_COUNT_H_
#define WIDGET_PASSENGER_COUNT_H_

#include "application.h"


class WidgetPassengerCount
{
    public:
        WidgetPassengerCount(uint8_t ucItem = 0);
        ~WidgetPassengerCount();
        void begin(void (*UserCallBack)(void) = NULL);
        void displayPopulation(int population);

    private:
        char pDataPopulationTopic[64];
        uint8_t _Item=0;
};

#endif
