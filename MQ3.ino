/*
Monitor MQ3 sensing

HARDWARE:
Arduino UNO
QM3 smoke detector

*/

int ethanol_sensor = A0;
int sensorValue;

void setup() {
  Serial.begin(9600);
}

void loop() {
  sensorValue = analogRead(ethanol_sensor);
  Serial.print("MQ3 Sensor Value: ");
  Serial.println(sensorValue);
  delay(1000);
}
