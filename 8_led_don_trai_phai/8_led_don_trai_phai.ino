// HIEU UNG 4 : sang don, tat don tu trai qua phai
int pinLed[] = {2,3,4,5,6,7,8,9};

int i,j;
void dontraiphai()
{
  static int chay3 = 0;
  for(i=0;i<8;i++)
    digitalWrite(pinLed[i],LOW);
    delay(300);
  for(i=0;i<8;i++)
    {
      digitalWrite(pinLed[i],HIGH);
    delay(300);
    }
  for(i=0;i<8;i++)
    {
      digitalWrite(pinLed[i],LOW);
    delay(300);
    }
    
}
void setup()
{
  for(i=0;i<=7;i++)
    pinMode(pinLed[i],OUTPUT);
}
void loop()
{
  dontraiphai();
}

 
