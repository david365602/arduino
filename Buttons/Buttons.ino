const int led = 9;
const int inputPin = 2;
void setup() {
  // put your setup code here, to run once:
  pinMode(led,OUTPUT);

  pinMode(inputPin, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  int val = digitalRead(inputPin);
  if (val == HIGH)
  {digitalWrite(led, HIGH);}
  else
  {digitalWrite(led, LOW);}
  
  

}
