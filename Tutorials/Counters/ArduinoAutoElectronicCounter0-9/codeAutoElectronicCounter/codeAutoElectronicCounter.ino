//The Coding://

int delay_time=1000;

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

void loop1()
{
digitalWrite(8,0);
digitalWrite(1,HIGH);
digitalWrite(2,HIGH);
digitalWrite(3,LOW);
digitalWrite(4,HIGH);
digitalWrite(5,HIGH);
digitalWrite(6,LOW);
digitalWrite(7,HIGH);
delay(5000);
digitalWrite(8,0);
digitalWrite(1,0);
digitalWrite(2,0);
digitalWrite(3,LOW);
digitalWrite(4,0);
digitalWrite(5,0);
digitalWrite(6,LOW);

digitalWrite(7,0);
digitalWrite(8,1);
digitalWrite(1,HIGH);
digitalWrite(2,HIGH);
digitalWrite(3,HIGH);
digitalWrite(4,HIGH);
digitalWrite(5,1);
digitalWrite(6,1);
digitalWrite(7,HIGH);
delay(5000);
digitalWrite(8,0);
digitalWrite(1,0);
digitalWrite(2,0);
digitalWrite(3,LOW);
digitalWrite(4,0);
digitalWrite(5,0);
digitalWrite(6,LOW);

}

void loopOLD() {

for(int i=1;i<7;i++)
{
digitalWrite(i,HIGH); digitalWrite(7,LOW); }

delay(1000);

digitalWrite(1,LOW);
digitalWrite(2,HIGH);
digitalWrite(3,HIGH);
digitalWrite(4,LOW);
digitalWrite(5,LOW);
digitalWrite(6,LOW);
digitalWrite(7,LOW);
delay(delay_time);



digitalWrite(1,HIGH);
digitalWrite(2,HIGH);
digitalWrite(3,LOW);
digitalWrite(4,HIGH);
digitalWrite(5,HIGH);
digitalWrite(6,LOW);
digitalWrite(7,HIGH);
delay(delay_time);

digitalWrite(1,HIGH);
digitalWrite(2,HIGH);
digitalWrite(3,HIGH);
digitalWrite(4,HIGH);
digitalWrite(5,LOW);
digitalWrite(6,LOW);
digitalWrite(7,HIGH);
delay(delay_time);



digitalWrite(1,LOW);
digitalWrite(2,HIGH);
digitalWrite(3,HIGH);
digitalWrite(4,LOW);
digitalWrite(5,LOW);
digitalWrite(6,HIGH);
digitalWrite(7,HIGH);
delay(delay_time);



digitalWrite(1,HIGH);
digitalWrite(2,LOW);
digitalWrite(3,HIGH);
digitalWrite(4,HIGH);
digitalWrite(5,LOW);
digitalWrite(6,HIGH);
digitalWrite(7,HIGH);
delay(delay_time);

digitalWrite(1,HIGH);
digitalWrite(2,LOW);
digitalWrite(3,HIGH);
digitalWrite(4,HIGH);
digitalWrite(5,HIGH);
digitalWrite(6,HIGH);
digitalWrite(7,HIGH);
delay(delay_time);

digitalWrite(1,HIGH);
digitalWrite(2,HIGH);
digitalWrite(3,HIGH);
digitalWrite(4,LOW);
digitalWrite(5,LOW);
digitalWrite(6,LOW);
digitalWrite(7,LOW);
delay(delay_time);

digitalWrite(1,HIGH);
digitalWrite(2,HIGH);
digitalWrite(3,HIGH);
digitalWrite(4,HIGH);
digitalWrite(5,HIGH);
digitalWrite(6,HIGH);
digitalWrite(7,HIGH);
delay(delay_time);

digitalWrite(1,HIGH);
digitalWrite(2,HIGH);
digitalWrite(3,HIGH);
digitalWrite(4,HIGH);
digitalWrite(5,LOW);
digitalWrite(6,HIGH);
digitalWrite(7,HIGH);
delay(delay_time);
}