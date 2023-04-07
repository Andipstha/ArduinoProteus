
int trigPin = 9;    // TRIG pin
int echoPin = 8;    // ECHO pin

float duration_us, distance_cm;

void setup() {
  // begin serial port
  Serial.begin (9600);

  // configure the trigger pin to output mode
  pinMode(trigPin, OUTPUT);
  // configure the echo pin to input mode
  pinMode(echoPin, INPUT);
  pinMode(3, OUTPUT);
}

void loop() {
  // generate 10-microsecond pulse to TRIG pin
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // measure duration of pulse from ECHO pin
  duration_us = pulseIn(echoPin, HIGH);

  // calculate the distance
  distance_cm = 0.017 * duration_us;

  // print the value to Serial Monitor
  Serial.print("distance: ");
  Serial.print(distance_cm);
  Serial.println(" cm");
  if(distance_cm<5)
  {
     digitalWrite(3, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(100);                      // wait for a second
  digitalWrite(3, LOW);   // turn the LED off by making the voltage LOW
  delay(100);
  }
 else if(distance_cm<20)
  {
     digitalWrite(11, HIGH);  // turn the LED on (HIGH is the voltage level)
  // delay(100);                      // wait for a second
  // digitalWrite(11, LOW);   // turn the LED off by making the voltage LOW
  // delay(100);      
  }
else if(distance_cm<40)
  {
     digitalWrite(1, HIGH);  // turn the LED on (HIGH is the voltage level)
  /*delay(100);                      // wait for a second
  digitalWrite(11, LOW);   // turn the LED off by making the voltage LOW
  delay(100);   */   
  }  
else
{
Serial.println("NICE");
// digitalWrite(11, LOW);
}
  delay(500);
}
