// C++ code
//
int count = 0;
int entry_sensor = 2;
int exit_sensor = 3;
void setup()
{
  pinMode(entry_sensor, INPUT);
  pinMode(exit_sensor, INPUT);
  Serial.begin(9600);
}

void loop()
{
  if (digitalRead(entry_sensor) == 1)
  {
    delay(1000);
    if (digitalRead(exit_sensor) == 1)
    {
      count++;
      Serial.println("In: " + count);
    }
  }
  delay(1000);
  if (digitalRead(exit_sensor) == 1)
  {
    delay(1000);
    if (digitalRead(entry_sensor) == 1)
    {
      count--;
      Serial.println("In: " + count);
    }
  }
  delay(1000);
}