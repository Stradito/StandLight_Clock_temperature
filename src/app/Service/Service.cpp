#include "Service.h"

Service::Service(View *viewer)
{
    view = viewer;;
    lightState = LIGHT_OFF;
}

Service::~Service()
{
}

void Service::updateState(std::string strBtn)
{
    switch (lightState)
    {
    case LIGHT_OFF:
        if (strBtn == "modeButton") {
            lightState = LIGHT_1;
            view->setState(lightState);
        }
        break;

        case LIGHT_1:
        if (strBtn == "modeButton") {
            lightState = LIGHT_2;
            view->setState(lightState);
        }
        break;

        case LIGHT_2:
        if (strBtn == "modeButton") {
            lightState = LIGHT_3;
            view->setState(lightState);
        }
        break;

        case LIGHT_3:
        if (strBtn == "modeButton") {
            lightState = LIGHT_4;
            view->setState(lightState);
        }
        break;

        case LIGHT_4:
        if (strBtn == "modeButton") {
            lightState = LIGHT_5;
            view->setState(lightState);
        }
        break;
    
    case LIGHT_5:
        if (strBtn == "StateOff") {
            lightState = LIGHT_OFF;
            view->setState(lightState);
        }
        break;
    }

}

