int led = 4;
int trigger_pin = 2;
int echo_pin =3;
int time;
int distance;


void setup() {
  // put your setup code here, to run once:
  //LED
  pinMode(led, OUTPUT);
  //ULTRA SONIC SENSOR
  pinMode(trigger_pin, OUTPUT);
  pinMode(echo_pin, INPUT);
  
  //SERIAL MONITOR
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite (trigger_pin, HIGH);
   delayMicroseconds(10);
   digitalWrite (trigger_pin, LOW);
  time = pulseIn(echo_pin, HIGH);
  distance = (time * 0.034) / 2;

  if(distance <= 10){
    Serial.println(distance);
    digitalWrite(led, HIGH);
     Serial.print("distance = ");
    Serial.print(distance);
    Serial.println("cm");
    delay(500);
  }else {
    digitalWrite(led, LOW);
   Serial.print("distance = ");
    Serial.print(distance);
    Serial.println("cm");
    delay(500);
  }
   
  delay(500);
 
}
