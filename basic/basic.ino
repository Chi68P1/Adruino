#include <Servo.h>    //gọi thư viện cho servo

Servo myservo1;   //body
Servo myservo2;   //flower
Servo myservo3;   //leaves

int pos = 0;    //gọi biến pos

void setup() {
  
  pinMode(7,INPUT);        //thiết lập chân sensor
  myservo1.attach(9);      //thiết lập chân servo
  myservo2.attach(10); 
  myservo3.attach(11); 

}

void loop(){
  
  if (digitalRead(7) == 1) {                //tín hiệu: 1: HIGH (có âm thanh); 0: LOW (không có âm thanh)
    for(pos = 0; pos <=100; pos += 1) {    //cho pos chạy từ 0 - 180
      myservo1.write(pos);                  //cho servo chạy theo pos
     myservo2.write(0);
     myservo3.write(0);
      delay(10);
    }
   for(pos = 0; pos <= 120; pos += 1) {    //nếu trong cùng 1 lệnh mẹ có nhiều lệnh for con thì các lệnh for sẽ chạy theo thứ tự từ trên xuống dưới
      myservo1.write(0);
      myservo2.write(pos);
      myservo3.write(0);
      delay(10);
    }
    for(pos = 0; pos <= 160; pos += 1) { 
      myservo1.write(0);
      myservo2.write(0);
      myservo3.write(pos);
      delay(10);
      }
      for(pos = 0; pos <= 160; pos += 1) { 
       myservo3.write(0);
        delay(10);
    }
      }
}
