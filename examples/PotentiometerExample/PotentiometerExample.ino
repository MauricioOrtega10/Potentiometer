#include <Arduino.h>
#include <Potentiometer.h>

void setup() 
{
    Serial.begin(9600);
}

void loop() 
{
    Serial.println(potentiometer.read());
}