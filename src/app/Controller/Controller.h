#ifndef __CONTROLLER_H__
#define __CONTROLLER_H__

#include <string>
#include "Service.h"

#include "LightState.h"

class Controller
{
private:
    int lightState;
    Service *servicer;

public:
    Controller(Service *service);
    virtual ~Controller();
    void updateEvent(std::string strBtn);
};

#endif /* __CONTROLLER_H__ */