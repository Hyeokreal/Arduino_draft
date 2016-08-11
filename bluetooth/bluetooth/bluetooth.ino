#include "SoftwareSerial.h"

SoftwareSerial btSerial(2,3);

void setup() {
  // put your setup code here, to run once:
    Serial.begin(9600);
    btSerial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:

  if(Serial.available()){
    btSerial.write(Serial.read()); 
  }

  if(btSerial.available()){
    Serial.write(btSerial.read());
  }
}

