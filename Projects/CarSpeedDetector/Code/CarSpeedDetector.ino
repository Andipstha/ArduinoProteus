#include <LiquidCrystal.h>

const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2, ct=9;

LiquidCrystal mylcd(rs, en, d4, d5, d6, d7);

int timer1;
int timer2;

float Time;
float distance = 5.0;
float speed;

int ir_s1 = A0;
int ir_s2 = A1;

int buzzer = 13;

bool car_detected = false; // flag variable to keep track of whether a car is detected

void setup() {
  analogWrite(ct, 25);
  pinMode(ir_s1, INPUT);
  pinMode(ir_s2, INPUT);
  pinMode(buzzer, OUTPUT);
  
  mylcd.begin(16, 2);
  mylcd.clear();
  mylcd.setCursor(4, 0);
  mylcd.print("Car Speed");
  mylcd.setCursor(5, 1);
  mylcd.print("Detector ");
  delay(2000);
  mylcd.clear();
}

void loop() {
  if (digitalRead(ir_s1) == LOW && !car_detected) {
    timer1 = millis();
    car_detected = true; // set the flag to true when the first sensor detects a car
  }

  if (digitalRead(ir_s2) == LOW && car_detected) {
    timer2 = millis();
    car_detected = false; // set the flag to false when the second sensor detects the car
  }

  if (car_detected) { // if a car is passing through, turn on the buzzer and display "Car Detected" on the LCD
    digitalWrite(buzzer, HIGH);
    mylcd.setCursor(2, 1);
    mylcd.print("Car Detected");
  } else {
    if (timer1 != 0 && timer2 != 0) { // calculate the speed only when both sensors have detected a car
      Time = abs(timer2 - timer1) / 1000.0;
      speed = distance / Time * 3600.0 / 1000.0;
    } else { // if no car is detected, display "Searching..." on the LCD
      speed = 0;
      mylcd.setCursor(2, 1);
      mylcd.print("Searching...  ");
    }

    mylcd.clear();
    mylcd.setCursor(0, 0);
    mylcd.print("Speed:");
    mylcd.print(speed, 1);
    mylcd.print("Km/Hr  ");
    mylcd.setCursor(0, 1);

    if (speed > 25) { // if the car is over-speeding, turn on the buzzer and display "Over Speeding" on the LCD
      mylcd.print("Over Speeding ");
      digitalWrite(buzzer, HIGH);
    } else {
      mylcd.print("Normal Speed  ");
      digitalWrite(buzzer, LOW);
    }

    delay(1000);
    timer1 = 0;
    timer2 = 0;
  }
}

