int c=0,d=0,f=0,x1,x2,x3,x4;
void setup()
{
   Serial.begin(9600);
   Serial.write(0);
}
void writel(int s)
{
   Serial.write(s);
}

void rea()
{
  if (analogRead(A4)>550)
  {
    Serial.write(4);
    delay(10);
    Serial.write(0);
    }
    if (analogRead(A5)>550)
  {
    Serial.write(5);
    delay(10);
    Serial.write(0);
    }
}

void loop() {
   x1= analogRead(A0);
   x2= analogRead(A1);
   x3= analogRead(A2);
   x4= analogRead(A3);
   rea();
  if (x1>300)
  {
    while (true)
    {
      rea();
      x2= analogRead(A1);
      x3= analogRead(A2);
      x4= analogRead(A3);
      if (x2>300)
      {
       writel(1);
       delay(100);
       Serial.write(0);
       break;
      }
      if (x3>300)
      {
      writel(1);
      delay(100);
      Serial.write(0);
      break;
      }
      if (x4>300)
      {
      writel(1);
      delay(100);
      Serial.write(0);
      break;
      }
    }
  }
  if (x2>300)
  {
    while (true)
    {
      rea();
      x1= analogRead(A0);
      x3= analogRead(A2);
      x4= analogRead(A3);
      if (x1>300)
      {
      Serial.write(1);
      delay(100);
      Serial.write(0);
      break;
      }
      if (x3>300)
      {
      Serial.write(1);
      delay(100);
      Serial.write(0);
      break;
      }
      if (x4>300)
      {
      Serial.write(1);
      delay(100);
      Serial.write(0);
      break;
      }
    }
  }
  if (x3>300)
  {
    while (true)
    {
      rea();
      x1= analogRead(A0);
      x2= analogRead(A1);
      x4= analogRead(A3);
      if (x1>300)
      {
      Serial.write(1);
      delay(100);
      Serial.write(0);
      break;
      }
      if (x2>300)
      {
      Serial.write(1);
      delay(100);
      Serial.write(0);
      break;
      }
      if (x4>300)
      {
      Serial.write(1);
      delay(100);
      Serial.write(0);
      break;
      }
    }
  }
  if (x4>300)
  {
    while (true)
    {
      rea();
      x1= analogRead(A0);
      x2= analogRead(A1);
      x3= analogRead(A2);
      if (x1>300)
      {
      Serial.write(1);
      delay(100);
      Serial.write(0);
      break;
      }
      if (x2>300)
      {
      Serial.write(1);
      delay(100);
      Serial.write(0);
      break;
      }
      if (x3>300)
      {
      Serial.write(1);
      delay(100);
      Serial.write(0);
      break;
      }
    }
  }
  delay(10);
}
