int val=0;
int buzzer = 11;
unsigned long on_time=0;
unsigned long off_time=0;
unsigned long button_ontime[20];
unsigned long button_offtime[20];
int button_seq[20];
int button1=3;
int button2=4;
int button3=5;
int button4=6;
int button5=7;
int button6=8;
int button7=9;
int button8=10;
int frequency[] = {262, 294, 330, 349, 392, 400, 440, 494};

int buttonPin = 2;
int previousState = HIGH;
unsigned int previousPress;
volatile int buttonFlag;
int buttonDebounce = 20;


int path=1;
int i=0;
int led=13;
void playback (void);

void setup() 
{
Serial.begin(9600);
pinMode(buzzer,OUTPUT);
pinMode(led,OUTPUT);

///////////////
pinMode(button1,INPUT_PULLUP);
pinMode(button2,INPUT_PULLUP);
pinMode(button3,INPUT_PULLUP);
pinMode(button4,INPUT_PULLUP);
pinMode(button5,INPUT_PULLUP);
pinMode(button6,INPUT_PULLUP);
pinMode(button7,INPUT_PULLUP);
pinMode(button8,INPUT_PULLUP);
pinMode(buttonPin,INPUT_PULLUP);
attachInterrupt(digitalPinToInterrupt(2), button_ISR, CHANGE);
analogWrite(buzzer,0);
digitalWrite(led,HIGH);
}

void loop() 
{
if(path==0)
{
  Serial.println("playback");
  playback();
}
if((millis() - previousPress) > buttonDebounce && buttonFlag)
  {
    previousPress = millis();
    if(digitalRead(buttonPin) == LOW && previousState == HIGH)
    {
      path =! path;
      previousState = LOW;
    }
    
    else if(digitalRead(buttonPin) == HIGH && previousState == LOW)
    {
      previousState = HIGH;
    }
    buttonFlag = 0;
  }

if(digitalRead(button1)==LOW)
{ 
  analogWrite(buzzer,frequency[0]);
  on_time=millis();
  if(i>0)
  {
    button_offtime[i-1]=on_time-off_time;
  }
  while(digitalRead(button1)==LOW);
  if(path==1)
  {
    off_time=millis();
    button_ontime[i]=(off_time-on_time);
    button_seq[i]=0;
    i++;
    Serial.println("button 1 stored");
  }
}

else if(digitalRead(button2)==LOW)
{
analogWrite(buzzer,frequency[1]);
on_time=millis();
if(i!=0)
button_offtime[i-1]=on_time-off_time;
while(digitalRead(button2)==LOW);
if(path==1)
  {
    off_time=millis();
    button_ontime[i]=(off_time-on_time);
    button_seq[i]=1;
     i++;
     Serial.println("button 2 stored");
  }
}

else if(digitalRead(button3)==LOW)
{
analogWrite(buzzer,frequency[2]);
on_time=millis();
if(i!=0)
button_offtime[i-1]=on_time-off_time;
while(digitalRead(button3)==LOW);
if(path==1)
  {
    off_time=millis();
    button_ontime[i]=(off_time-on_time);
    button_seq[i]=2;
     i++;
     Serial.println("button 3 stored");
  }
}

else if(digitalRead(button4)==LOW)
{
analogWrite(buzzer,frequency[3]);
on_time=millis();
if(i!=0)
button_offtime[i-1]=on_time-off_time;
while(digitalRead(button4)==LOW);
if(path==1)
  {
    off_time=millis();
    button_ontime[i]=(off_time-on_time);
    button_seq[i]=3;
     i++;
     Serial.println("button 4 stored");
  }
}

else if(digitalRead(button5)==LOW)
{
analogWrite(buzzer,frequency[4]);
on_time=millis();
if(i!=0)
button_offtime[i-1]=on_time-off_time;
while(digitalRead(button5)==LOW);
if(path==1)
  {
    off_time=millis();
    button_ontime[i]=(off_time-on_time);
    button_seq[i]=4;
     i++;
     Serial.println("button 5 stored");
  }
}

else if(digitalRead(button6)==LOW)
{
analogWrite(buzzer,frequency[5]);
on_time=millis();
if(i!=0)
button_offtime[i-1]=on_time-off_time;
while(digitalRead(button6)==LOW);
if(path==1)
  {
    off_time=millis();
    button_ontime[i]=(off_time-on_time);
    button_seq[i]=5;
     i++;
     Serial.println("button 6 stored");
  }
}

else if(digitalRead(button7)==LOW)
{
analogWrite(buzzer,frequency[6]);
on_time=millis();
if(i!=0)
button_offtime[i-1]=on_time-off_time;
while(digitalRead(button7)==LOW);
if(path==1)
  {
    off_time=millis();
    button_ontime[i]=(off_time-on_time);
    button_seq[i]=6;
     i++;
     Serial.println("button 7 stored");
  }
}
else if(digitalRead(button8)==LOW)
{
analogWrite(buzzer,frequency[7]);
on_time=millis();
if(i!=0)
button_offtime[i-1]=on_time-off_time;
while(digitalRead(button8)==LOW);
if(path==1)
  {
    off_time=millis();
    button_ontime[i]=(off_time-on_time);
    button_seq[i]=1;
     i++;
     Serial.println("button 8 stored");
  }
}

analogWrite(buzzer,0);
}


void playback (void)
{
 digitalWrite(led,LOW);
 for(int j=0;j<i;j++)
 {
  analogWrite(buzzer,frequency[button_seq[j]]);
  delay(button_ontime[j]);
  analogWrite(buzzer,0);
  delay(button_offtime[j]);
 }
 i=0;
 off_time=0;
 on_time=0;
 path=1;
 digitalWrite(led,HIGH);
}




void button_ISR()
{
  buttonFlag = 1;
  
}