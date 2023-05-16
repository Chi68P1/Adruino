// HIEU UNG 5 : sang don, tat don tu phai sang trai
int pinLed[] = {2,3,4,5,6,7,8,9};

int i,j;
void donphaitrai()
{
  static int chay4 = 0;
  for(i=0;i<8;i++)
    digitalWrite(pinLed[i],LOW);
    delay(300);
  for(chay4=7;chay4>=0;chay4--)
    {
      digitalWrite(pinLed[chay4],HIGH);
    delay(300);
    }
  for(chay4=7;chay4>=0;chay4--)
    {
      digitalWrite(pinLed[chay4],LOW);
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
  donphaitrai();
}

 
