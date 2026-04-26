int LED_P4 = 4;
int LED_P13 = 13;

void setup() {
 
  pinMode(LED_P4, OUTPUT);
  pinMode(LED_P13, OUTPUT);

}

void loop() {
  
  digitalWrite(LED_P4, HIGH);
  delay(1000);
  digitalWrite(LED_P4, LOW);
  delay(1000);

  digitalWrite(LED_P13, HIGH);
  delay(1000);
  digitalWrite(LED_P13, LOW);
  delay(1000);

}
