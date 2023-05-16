//HIEU UNG 3
int pinLed[] = {2,3,4,5,6,7,8,9};

int i,j;
void chayphaitrai()
{
  static int chay2 = 7;
  for(i=0;i<8;i++)
    digitalWrite(pinLed[i],HIGH);
    digitalWrite(pinLed[chay2],LOW);
    delay(300);
    chay2--;
    if (chay2<-1)
    chay2=7;
}
void setup()
{
  for(i=0;i<=7;i++)
    pinMode(pinLed[i],OUTPUT);
}
void loop()
{
  chayphaitrai();
}

 
