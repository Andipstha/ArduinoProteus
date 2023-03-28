#include <Servo.h> //includes the servo library
Servo myservo;

#define echopin 2 // echo pin
#define trigpin 3 // Trigger pin

int set_cm = 50;

long ultra_time;
long dis_cm;

void setup(){ // put your setup code here, to run once

Serial.begin(9600);// initialize serial communication at 9600 bits per second:

myservo.attach(4);
myservo.write(0);

pinMode (trigpin, OUTPUT); // declare ultrasonic sensor Trigger pin as Output
pinMode (echopin, INPUT);  // declare ultrasonic sensor Echo pin as input

delay(1000); // Waiting for a while
}

void loop(){ 
//*************************
ultra_read();
//*************************

Serial.print("Dis :");Serial.println(dis_cm); 

if(dis_cm<set_cm){
myservo.write(20);
delay(50);
myservo.write(30);
delay(50);
myservo.write(40);
delay(50);
myservo.write(50);
delay(50);
myservo.write(80);
delay(50);  
myservo.write(110);
delay(3000); 
}

if(dis_cm>set_cm){myservo.write(0);}

delay(100); 
}

//**********************ultra_read****************************
void ultra_read(){
digitalWrite(trigpin, LOW);
delayMicroseconds(2); 
digitalWrite(trigpin, HIGH);
delayMicroseconds(10);
ultra_time = pulseIn (echopin, HIGH);
dis_cm =  ultra_time / 29 / 2; 
}