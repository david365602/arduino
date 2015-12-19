//this program will turn on the led when the room light is dim
int led = 10;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(led,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  int sensorValue=analogRead(A0);
  Serial.println(sensorValue);
  delay(100);
  if (sensorValue > 900)
  {digitalWrite(led, HIGH);}
  else 
  {digitalWrite(led, LOW);}
  
}
