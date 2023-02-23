//The Coding://



void setup() {

pinMode(1,OUTPUT); 
pinMode(2,OUTPUT); 
pinMode(3,OUTPUT); 
pinMode(4,OUTPUT); 
pinMode(5,OUTPUT); 
pinMode(6,OUTPUT); 
pinMode(7,OUTPUT);
pinMode(8, OUTPUT);

}

void loop()
{
digitalWrite(8,0);
digitalWrite(1,HIGH);
digitalWrite(2,HIGH);
digitalWrite(3,1);
digitalWrite(4,HIGH);
digitalWrite(5,HIGH);
digitalWrite(6,1);
digitalWrite(7,HIGH);
delay(50);
digitalWrite(8,0);
digitalWrite(1,0);
digitalWrite(2,0);
digitalWrite(3,LOW);
digitalWrite(4,0);
digitalWrite(5,0);
digitalWrite(6,LOW);
digitalWrite(7,0);
//delay(5000);
digitalWrite(8,1);
digitalWrite(1,HIGH);
digitalWrite(2,HIGH);
digitalWrite(3,0);
digitalWrite(4,HIGH);
digitalWrite(5,HIGH);
digitalWrite(6,0);
digitalWrite(7,HIGH);
delay(50);
digitalWrite(8,1);
digitalWrite(1,0);
digitalWrite(2,0);
digitalWrite(3,LOW);
digitalWrite(4,0);
digitalWrite(5,0);
digitalWrite(6,LOW);
digitalWrite(7,0);
//delay(5000);
}

