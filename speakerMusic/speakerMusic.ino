//this is a very  annoying beeping sound with a speaker
int speaker = 9;
int loudness = 240;

void setup() {
  // put your setup code here, to run once:
pinMode(speaker, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(speaker, 20);
  delay(1000);
  analogWrite(speaker,0);
  delay(1000);
}
