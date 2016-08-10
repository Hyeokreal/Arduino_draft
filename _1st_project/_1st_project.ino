const int ledPin = 13; 
int count=0;

void setup() {
  pinMode(ledPin,OUTPUT);
  Serial.begin(9600);
}

void loop() {


  if(count%3!=0){
    digitalWrite(ledPin,HIGH);
    Serial.println(count);
    delay(1000);
 
  }
  digitalWrite(ledPin,LOW);
  delay(1000);
  count= count+1;
}

