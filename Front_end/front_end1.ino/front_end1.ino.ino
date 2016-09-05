Fvoid setup() {
  // put your setup code here, to run once:
pinMode(7,OUTPUT);
Serial.begin(9600);
digitalWrite(7,LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
if(Serial.available())
{
  const int e=Serial.parseInt();
  if(e==1)
  {
    digitalWrite(7,HIGH);
   }
  else
  {
    digitalWrite(7,LOW);;
  }
  }
}

void writeled(int brightness)
{
    analogWrite(7,255 - brightness);
    return;
  }
