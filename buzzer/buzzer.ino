const int buzzerPin = 11;
const int ldrPin = A0;
const int led1 = 4;
const int led2 = 2;
const int led3 = 3;
int voltageReading;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(buzzerPin, OUTPUT);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(ldrPin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  // pin frequency time 
  
  voltageReading = analogRead(ldrPin);
   Serial.println(voltageReading);
  

    if(voltageReading > 50){
  
       tone(buzzerPin, 500,500);
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, HIGH);  

    }else if (voltageReading  < 50){
     noTone(buzzerPin);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW); 
    
    }
 

    delay(1);
  
}
