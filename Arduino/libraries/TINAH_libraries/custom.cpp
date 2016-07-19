/*
 * Custom.cpp - Custom library example.
 * Created by Rahat Dhande, July 19, 2016.
 */

#include <custom.h>
#include <Arduino.h>

Example::Example()
{
    Serial.print("Example Object Constructed.\n\n");
}

void Example::set(uint8_t x)
{
    _x = x;
}

uint8_t Example::get(void)
{
    return _x;
}