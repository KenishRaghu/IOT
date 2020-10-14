int LED=13;
const int gas=0;
int gaspin=A0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  float sensorValue=analogRead(gaspin);

  if(sensorValue>=300){
    digitalWrite(LED,HIGH);
    Serial.print(sensorValue);
    Serial.print("-SOMKE DETECTED");
    delay(sensorValue);
    }
    else{
      digitalWrite(LED,LOW);
      Serial.println("sensorValue:");
      Serial.println(sensorValue);
      }
      delay(1000);
}
