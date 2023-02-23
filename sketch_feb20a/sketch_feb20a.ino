int led = 4, button = 5;
int mode = 0, old = 0, current;


void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
  pinMode(button, INPUT);

  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
    int current = digitalRead(button);
    if(current == 0 && old == 1){ //trigger if click once which is ON
      if(mode == 0){
        digitalWrite(led, HIGH);
        Serial.println("currently ON");
        mode = 1;
      }
      else{
        digitalWrite(led, LOW);
        Serial.println("currently OFF");
        mode = 0;
      }
      delay(500);
    }
    old = current;

  // pag di toggle
    // if(digitalRead(button) == 1){     
    //   digitalWrite(led, HIGH);
    //   Serial.println("currently ON");
    // }else{
    //   digitalWrite(led, LOW);
    //    Serial.println("currently OFF");
    // }
    // delay(500);
}
