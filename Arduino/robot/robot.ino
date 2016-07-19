#include <phys253.h>
#include <LiquidCrystal.h>

#include <custom.h>

void setup()
{
#include <phys253setup.txt>
  Serial.begin(9600);
}

Example example;

void loop()
{
  for (uint8_t x = 0; x < 10; ++x)
  {
    example.set(x);
    Serial.print(example.get());

    delay(1000);
  }
}

