#include <Arduino.h>
#include "simpleLog.h"

#define LOG_EN

void setup()
{
    Log.init(9600);
    Log.Print("hallow log ");
}

void loop()
{
}