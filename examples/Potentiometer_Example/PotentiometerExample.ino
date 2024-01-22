#include <Arduino.h>
#include <Wire.h>
#include <SPI.h>

//Potentiometer library
#include <Potentiometer.h>

void setup() 
{
    Serial.begin(115200);
}

void loop() 
{
    Serial.println(potentiometer.read());
}