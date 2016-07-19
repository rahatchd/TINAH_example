/*
 * Custom.h - Custom library example.
 * Created by Rahat Dhande, July 19, 2016.
 */

#ifndef Custom_h
#define Custom_h

#include <Arduino.h>

class Example
{
public:
    Example(void);
    void set(uint8_t);
    uint8_t get(void);
private:
    uint8_t _x;
};

#endif
