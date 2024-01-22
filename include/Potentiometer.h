#pragma once

#ifndef _Potentiometer_h
#define _Potentiometer_h

#include <PotentiometerConfig.h>


class Potentiometer 
{
public:
    Potentiometer(unsigned int pin);
    ~Potentiometer();
    int read();

private:
    unsigned int _pin;
};

extern Potentiometer potentiometer;

#endif