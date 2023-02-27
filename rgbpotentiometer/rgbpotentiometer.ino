const int potentiometerPin1 = A0;
const int potentiometerPin2 = A1;
const int potentiometerPin3 = A2;

const int R = 3;
const int G = 5;
const int B = 6;
int reading1;
int reading2;
int reading3;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(potentiometerPin1, INPUT);
  pinMode(potentiometerPin2, INPUT);
  pinMode(potentiometerPin3, INPUT);
  pinMode(R, OUTPUT);
  pinMode(G, OUTPUT);
  pinMode(B, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  //2 ways
  // value old max value new max
  // map 
  reading1 = map(analogRead(potentiometerPin1),0,1023,0,255);
  reading2 = map(analogRead(potentiometerPin2),0,1023,0,255);
  reading3 = map(analogRead(potentiometerPin3),0,1023,0,255);
  // reading1 = (255./1023.)*analogRead(potentiometerPin1);
  // reading2 = (255./1023.)*analogRead(potentiometerPin2);
  // reading3 = (255./1023.)*analogRead(potentiometerPin3);
  analogWrite(R, reading1);
  analogWrite(G, reading2);
  analogWrite(B, reading3);
 
  
  Serial.println(reading1);
  Serial.println(reading2);
  Serial.println(reading3);
  delay(1000);

}
