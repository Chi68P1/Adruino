#define Analog 1
#define Digital 4
int den = 2;
float tinhieuAO;
float tinhieuDO;
void setup()
{
  Serial.begin(9600);
  pinMode(Digital, INPUT);
  pinMode(den, OUTPUT);
  
}
void loop()
{
  tinhieuAO=analogRead(Analog);
  tinhieuDO=digitalRead(Digital); 
  
  Serial.print("Gia tri Analog:");
  Serial.print(tinhieuAO);
  Serial.print("Gia tri Digital:");
  Serial.print(tinhieuDO);
  if (tinhieuAO>28)
  {
    digitalWrite(den,HIGH);
  }
  else
  {
    digitalWrite(den,LOW);
  }
  delay(50);
}
 
