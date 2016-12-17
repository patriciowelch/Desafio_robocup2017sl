int s0;
int s1;
int s2;
int s3;
int s4;
int s5;

void setup()
{
  Serial.begin(115200);
}

void loop()
{
  s0=analogRead(0);
  s1=analogRead(1);
  s2=analogRead(2);
  s3=analogRead(3);
  s4=analogRead(4);
  s5=analogRead(5);
  Serial.println(s0);
  Serial.println(s1);
  Serial.println(s2);
  Serial.println(s3);
  Serial.println(s4);
  Serial.println(s5);
  Serial.println("  ");
  delay(500);
}


