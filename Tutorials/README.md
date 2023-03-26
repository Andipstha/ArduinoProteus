# LCD (16x2) display without I2C module

VSS -> GND <br />
VDD -> 5v <br />
VEE -> pin 9 <br />
RS -> pin 12 <br />
PW -> GND <br />
E -> pin 11 <br />

D7 -> pin 2 <br />
D6 -> pin 3 <br />
D5 -> pin 4 <br />
D4 -> pin 5 <br />

### Source Code

```
#include <LiquidCrystal.h>;

const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2, ct=9;
LiquidCrystal mylcd(rs, en, d4, d5, d6, d7);

void setup() {
analogWrite(ct,50);
mylcd.begin(16, 2);
mylcd.print("Hello Sandip");

}

void loop() {

}

```
### Circuit Diagram
![LCD Circuit Diagram](https://github.com/Andipstha/ArduinoProteus/blob/main/Tutorials/Img/Example_1.png "LCD Circuit Diagram")

