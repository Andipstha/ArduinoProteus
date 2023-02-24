int x0,x1,x2,x3,x4,x5,x6,x7,x8,x9;
int delay_time=200;

void setup() {
 
  //configure pin2 as an input and enable the internal pull-up resistor
  pinMode(12, INPUT_PULLUP);
  
  pinMode(1,OUTPUT);
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);

}

void loop() {
  //read the pushbutton value into a variable
  int sensorVal = digitalRead(12);

    if (sensorVal == LOW) {
       x0=true;
    }
      while(x0){
        zero();
          sensorVal = digitalRead(12);
          if (sensorVal == LOW) {
              x1=true;
              x0=false;
            }
               }
               
       while(x1){
        one();
          sensorVal = digitalRead(12);
          if (sensorVal == LOW) {
              x2=true;
              x1=false;
            }
               }

       while(x2){
        two();
          sensorVal = digitalRead(12);
          if (sensorVal == LOW) {
              x3=true;
              x2=false;
            }
               }

       while(x3){
        three();
          sensorVal = digitalRead(12);
          if (sensorVal == LOW) {
              x4=true;
              x3=false;
            }
               }

       while(x4){
        four();
          sensorVal = digitalRead(12);
          if (sensorVal == LOW) {
              x5=true;
              x4=false;
            }
               }

       while(x5){
        five();
          sensorVal = digitalRead(12);
          if (sensorVal == LOW) {
              x6=true;
              x5=false;
            }
               }
               
       while(x6){
        six();
          sensorVal = digitalRead(12);
          if (sensorVal == LOW) {
              x7=true;
              x6=false;
            }
               }

       while(x7){
        seven();
          sensorVal = digitalRead(12);
          if (sensorVal == LOW) {
              x8=true;
              x7=false;
            }
               }
         
      while(x8){
        eight();
          sensorVal = digitalRead(12);
          if (sensorVal == LOW) {
              x9=true;
              x8=false;
            }
               }
               
      while(x9){
        nine();
          sensorVal = digitalRead(12);
          if (sensorVal == LOW) {
              x0=true;
              x9=false;
            }
               }
                        
  }

  void zero()
  {
    for(int i=1;i<7;i++)
    {
   digitalWrite(i,HIGH);
   digitalWrite(7,LOW);
    }
    delay(delay_time);
  }

  void one()
  {
    digitalWrite(1,LOW);
    digitalWrite(2,HIGH);
    digitalWrite(3,HIGH);
    digitalWrite(4,LOW);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    digitalWrite(7,LOW);
    delay(delay_time);
  }

   void two()
  {
    digitalWrite(1,HIGH);
    digitalWrite(2,HIGH);
    digitalWrite(3,LOW);
    digitalWrite(4,HIGH);
    digitalWrite(5,HIGH);
    digitalWrite(6,LOW);
    digitalWrite(7,HIGH);
    delay(delay_time);
  }

   void three()
  {
    digitalWrite(1,HIGH);
    digitalWrite(2,HIGH);
    digitalWrite(3,HIGH);
    digitalWrite(4,HIGH);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    digitalWrite(7,HIGH);
    delay(delay_time);
  }

   void four()
  {
    digitalWrite(1,LOW);
    digitalWrite(2,HIGH);
    digitalWrite(3,HIGH);
    digitalWrite(4,LOW);
    digitalWrite(5,LOW);
    digitalWrite(6,HIGH);
    digitalWrite(7,HIGH);
    delay(delay_time);
  }

   void five()
  {
    digitalWrite(1,HIGH);
    digitalWrite(2,LOW);
    digitalWrite(3,HIGH);
    digitalWrite(4,HIGH);
    digitalWrite(5,LOW);
    digitalWrite(6,HIGH);
    digitalWrite(7,HIGH);
    delay(delay_time);
  }  

     void six()
  {
    digitalWrite(1,HIGH);
    digitalWrite(2,LOW);
    digitalWrite(3,HIGH);
    digitalWrite(4,HIGH);
    digitalWrite(5,HIGH);
    digitalWrite(6,HIGH);
    digitalWrite(7,HIGH);
    delay(delay_time);
  }

   void seven()
  {
    digitalWrite(1,HIGH);
    digitalWrite(2,HIGH);
    digitalWrite(3,HIGH);
    digitalWrite(4,LOW);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    digitalWrite(7,LOW);
    delay(delay_time);
  }

   void eight()
  {
    digitalWrite(1,HIGH);
    digitalWrite(2,HIGH);
    digitalWrite(3,HIGH);
    digitalWrite(4,HIGH);
    digitalWrite(5,HIGH);
    digitalWrite(6,HIGH);
    digitalWrite(7,HIGH);
    delay(delay_time);
  }

   void nine()
{
    digitalWrite(1,HIGH);
    digitalWrite(2,HIGH);
    digitalWrite(3,HIGH);
    digitalWrite(4,HIGH);
    digitalWrite(5,LOW);
    digitalWrite(6,HIGH);
    digitalWrite(7,HIGH);
    delay(delay_time);
  }