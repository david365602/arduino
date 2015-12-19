int potentiometerPin = 0;
int led = 9;
int potentiometerVal = 0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  potentiometerVal = analogRead(potentiometerPin);

  int mappedVal = map(potentiometerVal,0,1023,0,255);
  Serial.print(" - ");
  Serial.println(mappedVal);
  analogWrite(led, mappedVal);
  delay(10);
}
