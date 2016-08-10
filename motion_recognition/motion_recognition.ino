int speakerpin = 12;                // choose the pin for the LED
int inputPin = 2;               // choose the input pin (for PIR sensor)
int val = 0;                    // variable for reading the pin status
 
void setup() {
  pinMode(inputPin, INPUT);
  Serial.begin(115200);   // declare sensor as input
}
 
void loop(){
  val = digitalRead(inputPin);  // read input value
  if (val == HIGH) {            // check if the input is HIGH
//    tone(speakerpin,500,1000);
    Serial.println("it's high");
    delay(2000); 
    // turn LED ON
  } else {
    Serial.println("it's low");// turn LED OFF
  }
}
