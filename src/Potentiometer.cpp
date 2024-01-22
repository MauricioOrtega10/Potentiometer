#include <Potentiometer.h>
#include "Arduino.h"

Potentiometer::Potentiometer(unsigned int pin)
{
    _pin = pin;
    pinMode(_pin, INPUT);
}

Potentiometer::~Potentiometer()
{

}

int Potentiometer::read()
{
    return analogRead(_pin);
}

Potentiometer potentiometer(POTENTIOMETER_PIN);