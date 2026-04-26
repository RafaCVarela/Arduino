int LED_P4 = 4;

void setup() {
  
  pinMode(LED_P4, OUTPUT);

}

void loop() {
  
  digitalWrite(LED_P4, HIGH);
  delay(1000);
  digitalWrite(LED_P4, LOW);
  delay(1000);

}
