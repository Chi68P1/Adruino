#include <Servo.h>

Servo servo1;     //body
Servo servo2;     //flower
Servo servo3;     //leaves

int pos = 0;
int posl = 0;
int i = 0;

void setup() {

  pinMode(4, INPUT);    //heavy sensor
  pinMode(3, INPUT);    //light sensor
  servo1.attach(9);
  servo2.attach(10);
  servo3.attach(11);
  Serial.begin(9600);
}

void loop() {

  Serial.print("Heavy sensor = ");
  Serial.println(digitalRead(4));     //signals: 1: yes (HIGH), 0: no (LOW)
  Serial.print("Light sensor = ");
  Serial.println(digitalRead(3));
  Serial.println();

  if (digitalRead(3) == HIGH) {
    servo2.write(100);
    if (digitalRead(4) == HIGH) {
      for (i = 0; i <= 1; i += 1) {
        for (pos = 0; pos <= 180; pos += 1) {
          servo1.write(pos);
          servo3.write(pos);
          delay(3);
        }
        for (pos = 180; pos >= 0; pos -= 1) {
          servo1.write(pos);
          servo3.write(pos);
          delay(3);
        }
      }
    }
    else {
      for (i = 0; i <= 1; i += 1) {
        for (pos = 0; pos <= 120; pos += 1) {
          servo1.write(pos);
          if (pos < 120) {
            servo3.write(pos);
          }
          else {
            servo3.write(130);
          }
          delay(5);
        }
        for (pos = 120; pos >= 0; pos -= 1) {
          servo1.write(pos);
          if (pos > 60) {
            servo3.write(pos);
          }
          else {
            servo3.write(50);
          }
          servo3.write(pos);
          delay(5);
        }
      }
    }
  }
  else {
    pos = 0;
    servo3.write(90);
    servo1.write(pos);
    servo2.write(pos);
  }
  delay(100);
}
  
