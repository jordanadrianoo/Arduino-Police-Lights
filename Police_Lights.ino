const int BBlue=8;
const int BRed=10;
const int FBlue=11;
const int FRed=9;
const int  buzzer =7;


int pattern=0;

void setup()
{
  Serial.begin(9600);

 for(int x=8;x<12;x++)
 {
  pinMode(x,OUTPUT);
 }
// pinMode(Button,Input);
}

void loop()
{
Serial.print(pattern);

for(int x=0;x<2;x++)
{
  digitalWrite(BBlue,HIGH);
  digitalWrite(FBlue,HIGH);
  digitalWrite(BRed,LOW);
  digitalWrite(FRed,LOW);
  delay(80);

  digitalWrite(BBlue,LOW);
  digitalWrite(FBlue,LOW);
  digitalWrite(BRed,LOW);
  digitalWrite(FRed,LOW);
  delay(50);
}  

  for(int x=0;x<2;x++)
{
  digitalWrite(BBlue,LOW);
  digitalWrite(FBlue,LOW);
  digitalWrite(BRed,HIGH);
  digitalWrite(FRed,HIGH);
  delay(80);

  digitalWrite(BBlue,LOW);
  digitalWrite(FBlue,LOW);
  digitalWrite(BRed,LOW);
  digitalWrite(FRed,LOW);
  delay(50);
}  

This is the cop noise
 for(int x=440;x<1000;x++)
  {
    tone(buzzer,x);
    delay(3);
  }
delay(20);
 for(int x=1000;x>=500;x--)
 {
  tone(buzzer,x);
  delay(5);
 }

 noTone(7);
  
}
