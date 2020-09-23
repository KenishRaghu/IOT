int buttonpin=2;
int ledpin=13;
int buttonstate=0;
void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT);
  pinMode(2,INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  buttonstate=digitalRead(buttonpin);
  if(buttonpstate==HIGH)
  {digitalWrite(13,HIGH);}
  else
  {digitalWrite(13,LOW);}

}
