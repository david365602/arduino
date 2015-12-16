//this code will blink two leds at different intervals

//declare the pin/led
int led = 9;
int led2 = 8;
void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
  pinMode(led2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  //this will turn on the led
  digitalWrite(led,HIGH);
  delay(500);

  //this will turn off the led with no delay
  digitalWrite(led,LOW);

  //this will turn on the second led
  digitalWrite(led2,HIGH);
  delay(500);

  //this will turn off the led with no delay
  digitalWrite(led2, LOW);
}
