int outputpin=0;
void setup()
{  Serial.begin(9600);
  
}

void loop()
{ int rawvoltage=analogRead(outputpin);
  float millivolts==(rawvoltage/1240.0)*5000;
  float celcius=millivolt/10;
  Serial.print(celcius);
  Serial.print("celcius :");
  Serial.print((celcius*9)/5 + 32);
  Serial.print("in Fahrenheit : ");
  delay(1000);

}
