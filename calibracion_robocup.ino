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
  s0=analogRead(3);
  Serial.println(s0);
  Serial.println("  ");
  delay(500);
}


