/*-----------------------------------------*\
|  RGBController_NZXTHue1.h                 |
|                                           |
|  Generic RGB Interface for NZXT Hue 1     |
|  (Smart Device V1)                        |
|                                           |
|  Adam Honse (CalcProgrammer1) 2/8/2022    |
\*-----------------------------------------*/

#pragma once
#include "RGBController.h"
#include "NZXTHue1Controller.h"

class RGBController_NZXTHue1 : public RGBController
{
public:
    RGBController_NZXTHue1(NZXTHue1Controller* controller_ptr);
    ~RGBController_NZXTHue1();

    void        SetupZones();

    void        ResizeZone(int zone, int new_size);

    void        DeviceUpdateLEDs();
    void        UpdateZoneLEDs(int zone);
    void        UpdateSingleLED(int led);

    void        SetCustomMode();
    void        DeviceUpdateMode();

private:
    NZXTHue1Controller*         controller;
    std::vector<unsigned int>   leds_channel;
    std::vector<unsigned int>   zones_channel;
};
