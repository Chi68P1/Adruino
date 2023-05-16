int pinLed[] = {2,3,4,5,6,7,8,9};

int i,j;
void trongngoai()
{
  for (i=0;i<8;i++)
  digitalWrite(pinLed[i],LOW);
  delay(300);
  digitalWrite(pinLed[3],HIGH);
  digitalWrite(pinLed[4],HIGH);
  delay(300);
  digitalWrite(pinLed[2],HIGH);
  digitalWrite(pinLed[5],HIGH);
  delay(300);
   digitalWrite(pinLed[1],HIGH);
  digitalWrite(pinLed[6],HIGH);
  delay(300);
  digitalWrite(pinLed[0],HIGH);
  digitalWrite(pinLed[7],HIGH);
  delay(300);
  digitalWrite(pinLed[3],LOW);
  digitalWrite(pinLed[4],LOW);
  delay(300);
   digitalWrite(pinLed[2],LOW);
  digitalWrite(pinLed[5],LOW);
  delay(300);
   digitalWrite(pinLed[1],LOW);
  digitalWrite(pinLed[6],LOW);
  delay(300);
  digitalWrite(pinLed[0],LOW);
  digitalWrite(pinLed[7],LOW);
  delay(300);
}
void setup()
{
  for(i=0;i<=7;i++)
    pinMode(pinLed[i],OUTPUT);
}
void loop()
{
  trongngoai();
}
