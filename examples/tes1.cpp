#include <Arduino.h>
#include <simpleLog.h>

// activate log if define
#define LOG_EN

void setup()
{
    Log.init(9600);
    Log.Print("hallow world");
}
void loop()
{
}