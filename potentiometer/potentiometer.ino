// NOTES FOR PROGRAMMER BY DANERIS AND FRIENDS 
// COLOR WIRE IDENTIFIERS:
// BLACK = GND
// RED = 5V
// GREEN = DIGITAL PIN
// USE PWM PIN WHEN USING POTENTIOMETER (GREEN WIRE)




int pot;
int led;
void setup() {
  // put your setup code here, to run once:
  pinMode(A0, INPUT);
  pinMode(5, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  pot = analogRead(A0);
  led = map(pot, 0, 1023, 0, 255);

  analogWrite(5, led);

 

}
