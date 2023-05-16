int pinLed[] = {2,3,4,5,6,7,8,9};

int i,j;
// HIỆU ỨNG 1
/*void nhapnhay()
{
  for(j=0;j<6;j++)
  {
    for (i=0;i<=7;i++)
         digitalWrite(pinLed[i],LOW);
      delay(300);
      for (i=0;i<=7;i++)
         digitalWrite(pinLed[i],HIGH);
      delay(300);
  }
  for (i=0;i<=7;i++)
         digitalWrite(pinLed[i],LOW);
      delay(300);
}*/
// HIỆU ỨNG 2
void chaytraiphai()
{
  static int chay1=0;
  for(i=0;i<8;i++)
  {
    for (j=0;j<8;j++)
    digitalWrite(pinLed[j],LOW);
    digitalWrite(pinLed[chay1],HIGH);
    delay(300);
    chay1++;
    if(chay1>7)
    chay1=0;
  }
}
// HIỆU ỨNG 3
void chayphaitrai()
{
  static int chay2=7;
  for(i=0;i<8;i++)
  {
    for(j=0;j<8;j++)
      digitalWrite(pinLed[j],LOW);

     digitalWrite(pinLed[chay2],HIGH);
     delay(300);
     chay2--;
     if(chay2<-1)
      chay2=7;
  }
}
// HIỆU ỨNG 4
void dontraiphai()
{
  static int chay3 = 0;
  for (i=0;i<8;i++)
    digitalWrite(pinLed[i],LOW);
    delay(300);
  for(chay3=0;chay3<8;chay3++)
  {
    digitalWrite(pinLed[chay3],HIGH);
    delay(300);
  }
  for(chay3=0;chay3<8;chay3++)
  {
    digitalWrite(pinLed[chay3],LOW);
    delay(300);
  }
}
// HIỆU ỨNG 5
void donphaitrai()
{
  static int chay4=0;
  for (i=0;i<8;i++)
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
// HIỆU ỨNG 6
void ngoaitrong()
{
for (i=0;i<8;i++)
  digitalWrite(pinLed[i],LOW);
  delay(300);
  digitalWrite(pinLed[0],HIGH);
  digitalWrite(pinLed[7],HIGH);
  delay(300);
  digitalWrite(pinLed[1],HIGH);
  digitalWrite(pinLed[6],HIGH);
  delay(300);
  digitalWrite(pinLed[2],HIGH);
  digitalWrite(pinLed[5],HIGH);
  delay(300);
  digitalWrite(pinLed[3],HIGH);
  digitalWrite(pinLed[4],HIGH);
  delay(300);
  digitalWrite(pinLed[0],LOW);
  digitalWrite(pinLed[7],LOW);
  delay(300);
  digitalWrite(pinLed[1],LOW);
  digitalWrite(pinLed[6],LOW);
  delay(300);
  digitalWrite(pinLed[2],LOW);
  digitalWrite(pinLed[5],LOW);
  delay(300);
  digitalWrite(pinLed[3],LOW);
  digitalWrite(pinLed[4],LOW);
  delay(300);
}
// HIỆU ỨNG 7
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
// HIỆU ỨNG 7
void xenke()
{
  static int chay5=0;
  for(i=0;i<8;i++)
    digitalWrite(pinLed[i],LOW);
    delay(300);
  for (j=0;j<5;j++)
  {
  for(chay5=0;chay5<8;chay5+=2)
   digitalWrite(pinLed[chay5],HIGH);
  delay(300);
  for(i=0;i<8;i++)
   digitalWrite(pinLed[i],LOW);
  for(chay5=1;chay5<8;chay5+=2)
   digitalWrite(pinLed[chay5],HIGH);
  delay(300);
  for(i=0;i<8;i++)
    digitalWrite(pinLed[i],LOW);
  }
}

void setup()
{
  for(i=0;i<=7;i++)
    pinMode(pinLed[i],OUTPUT);
}
void loop()
{
 //nhapnhay();
 chaytraiphai();
 chayphaitrai();
 dontraiphai();
 donphaitrai();
 ngoaitrong();
 trongngoai();
 xenke();
}
