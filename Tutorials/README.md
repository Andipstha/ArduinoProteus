# LCD (16x2) display without I2C module

1-VSS -> GND <br />
2-VDD -> 5v <br />
3-VEE -> pin 9 <br />
4-RS -> pin 12 <br />
5-PW -> GND <br />
6-E -> pin 11 <br />

10-D4 -> pin 5 <br />
12-D5 -> pin 4 <br />
13-D6 -> pin 3 <br />
14-D7 -> pin 2 <br />

15- +ve -> 5v <br />
16- -ve -> GND <br />

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

