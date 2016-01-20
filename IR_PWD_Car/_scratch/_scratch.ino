#include <IRremote.h>
#include <IRremoteInt.h>

IRrecv irrecv(12);
decode_results results;

void setup()
{
  pinMode(13, OUTPUT);
  pinMode(11, OUTPUT);
  Serial.begin(9600);
  irrecv.enableIRIn();
}

void loop()
{
  if (irrecv.decode(&results))
  {
    digitalWrite(13, HIGH);
    delay(1000);
    digitalWrite(13, LOW);
    //delay(1000);

    if(results.value == 0xFF30CF)  // 1
    {
      digitalWrite(11, HIGH);
    }
    else
    {
      digitalWrite(11, LOW);
    }
    
    Serial.println(results.value, HEX);
    //Serial.println(results.value);
    irrecv.resume();
  }
}

