//this code will blink the led on pin 9

//declare the pin/led
int led = 9;
void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  //this will turn on the led
  digitalWrite(led,HIGH);
  delay(1000);

  //this will turn off the led
  digitalWrite(led,LOW);
  delay(1000);
}
