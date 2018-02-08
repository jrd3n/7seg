#include <Arduino.h>

#define segA 7
#define digit1 3
#define digit2 4
#define digit3 5
#define digit4 6

void setup()
{
    // put your setup code here, to run once:

    pinMode(digit1, OUTPUT);
    pinMode(segA, OUTPUT);

    digitalWrite(segA, HIGH);
}

void loop()
{
    digitalWrite(digit1, HIGH);

    delay(200);

    digitalWrite(digit1, LOW);

    delay(200);

    // put your main code here, to run repeatedly:
}