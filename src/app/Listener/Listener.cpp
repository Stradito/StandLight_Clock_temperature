#include "Listener.h"

Listener::Listener(Button *button1, Button *button2, Controller *control, ClockCheck *clock)
{
    powerButton = button1;
    modeButton = button2;
    controller = control;
    clockCheck = clock;
}

Listener::~Listener()
{
}

void Listener::checkEvent()
{
    if (modeButton->getState() == RELEASE_ACTIVE)
    {
        controller->updateEvent("modeButton");
    }

    if (powerButton->getState() == RELEASE_ACTIVE)
    {
        controller->updateEvent("powerButton");
    }

    if (clockCheck->isUpdate())
    {
        controller->updateEvent("clockUpdate");
    }
}