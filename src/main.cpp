#include <Arduino.h>
#include "log.h"

void setup()
{
    Log.init(9600);
    Log.Print("hallow log ");
}

void loop()
{
}