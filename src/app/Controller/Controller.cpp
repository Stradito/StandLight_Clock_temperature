#include "Controller.h"

Controller::Controller(Service *service)
{
    servicer = service;
    lightState = LIGHT_OFF;
}

Controller::~Controller()
{
}

void Controller::updateEvent(std::string strBtn)
{
    switch (lightState)
    {
    case LIGHT_OFF:
        if (strBtn == "powerButton") {
            lightState = LIGHT_1;
            servicer->updateState("modeButton");
        }
        break;

        case LIGHT_1:
        if (strBtn == "powerButton") {
            lightState = LIGHT_2;
            servicer->updateState("modeButton");
        }
        break;

        case LIGHT_2:
        if (strBtn == "powerButton") {
            lightState = LIGHT_3;
            servicer->updateState("modeButton");
        }
        break;

        case LIGHT_3:
        if (strBtn == "powerButton") {
            lightState = LIGHT_4;
            servicer->updateState("modeButton");
        }
        break;

        case LIGHT_4:
        if (strBtn == "powerButton") {
            lightState = LIGHT_5;
            servicer->updateState("modeButton");
        }
        break;
    
    case LIGHT_5:
        if (strBtn == "powerButton") {
            lightState = LIGHT_OFF;
            servicer->updateState("StateOff");
        }
        break;
    }
}