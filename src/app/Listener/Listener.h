#ifndef __LISTENER_H__
#define __LISTENER_H__

#include "Button.h"
#include "ClockCheck.h"
#include "Controller.h"

class Listener
{
private :
    Button *powerButton;
    Button *modeButton;
    ClockCheck *clockCheck;
    Controller *controller;

public:
    Listener(Button *button1, Button *button2, Controller *control, ClockCheck *clock);
    ~Listener();
    void checkEvent();
};

#endif /* __LISTENER_H__ */