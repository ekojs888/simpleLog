#include <Arduino.h>
#include <simpleLog.h>

void setup()
{
    Log.init(9600);
    Log.Print("hallow world");
}
void loop()
{
}