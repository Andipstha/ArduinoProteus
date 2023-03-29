const int soundsensor = A0; 
const int ledstrip = 9;
const int ledstrip2 =10;
const int ledstrip3 =11;                 
void setup()
{ 
  pinMode (soundsensor, INPUT);
  pinMode (ledstrip, OUTPUT);
  pinMode (ledstrip2, OUTPUT);
  pinMode (ledstrip3,OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  int sensorvalue = digitalRead (soundsensor);             
                                                          
   if (sensorvalue == HIGH) {
   for (int i=11;i>=9;i--)                                  
   {
     digitalWrite(i, HIGH);
     delay(50);
   }
  for (int i=11;i>=9;i--)                                  
   {
     digitalWrite(i, LOW);
     delay(30);
   }
   }
   else
   {
     digitalWrite(ledstrip, LOW);
   }
  
   Serial.println(sensorvalue);
   }
