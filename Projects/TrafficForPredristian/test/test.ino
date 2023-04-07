/*
 * Created by ArduinoGetStarted, https://arduinogetstarted.com
 *
 * Arduino - Ultrasonic Sensor HC-SR04
 *
 * Wiring: Ultrasonic Sensor -> Arduino:
 * - VCC  -> 5VDC
 * - TRIG -> Pin 9
 * - ECHO -> Pin 8
 * - GND  -> GND
 *
 * Tutorial is available here: https://arduinogetstarted.com/tutorials/arduino-ultrasonic-sensor
 */
#include "SevSeg.h"
SevSeg sevseg;
int trigPin = 13;    // TRIG pin
int echoPin = 12;    // ECHO pin
int redLed=11;
int greenLed=10;
int yellowLed=9;

float duration_us, distance_cm;

void setup() {
  // begin serial port
  Serial.begin (9600);

  // configure the trigger pin to output mode
  pinMode(trigPin, OUTPUT);
  // configure the echo pin to input mode
  pinMode(echoPin, INPUT);
  //pinMode(0,OUTPUT);
  //pinMode(1,OUTPUT);
  pinMode(redLed,OUTPUT);
  pinMode(greenLed,OUTPUT);
  pinMode(yellowLed,OUTPUT);
  byte numDigits = 1;
    byte digitPins[] = {};
    byte segmentPins[] = {6, 5, 2, 3, 4, 7, 8};
    bool resistorsOnSegments = true;

    byte hardwareConfig = COMMON_CATHODE; 
    sevseg.begin(hardwareConfig, numDigits, digitPins, segmentPins, resistorsOnSegments);
    sevseg.setBrightness(90);
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
  int count=0;
  if(distance_cm<11)
  {
    do
    {
      count++;
      if(count>=5)
      {
        digitalWrite(yellowLed,HIGH);
        delay(2000);
        digitalWrite(yellowLed,LOW);
        for(int i = 9; i >= 0; i--)
        {
          digitalWrite(redLed,HIGH);
          sevseg.setNumber(i, i%2);
          delay(1500);
          sevseg.refreshDisplay(); 
        }
        digitalWrite(redLed,LOW);
        digitalWrite(yellowLed,HIGH);
        delay(2000);
        digitalWrite(greenLed,HIGH);
        digitalWrite(yellowLed,LOW);
        delay(2000);
        digitalWrite(greenLed,LOW);
        delay(5000);
      }
      Serial.println(count);
      delay(1000);
      digitalWrite(trigPin, HIGH);
      delayMicroseconds(10);
      digitalWrite(trigPin, LOW);
  // measure duration of pulse from ECHO pin
      duration_us = pulseIn(echoPin, HIGH);
  // calculate the distance
      distance_cm = 0.017 * duration_us;
    }while(distance_cm<11);
  }
  else
  {
    digitalWrite(redLed,LOW);
    digitalWrite(yellowLed,LOW);
    digitalWrite(greenLed,LOW);
  }
  delay(500);
}
