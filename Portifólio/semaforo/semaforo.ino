#define tempo 1000

int LED_P5 = 5;
int LED_P6 = 6;
int LED_P7 = 7;

void setup() {
  
  pinMode(LED_P5, OUTPUT);
  pinMode(LED_P6, OUTPUT);
  pinMode(LED_P7, OUTPUT);

}

void loop() {
  
  digitalWrite(LED_P7, LOW);
  digitalWrite(LED_P5, HIGH);
  delay(tempo);

  digitalWrite(LED_P5, LOW);
  digitalWrite(LED_P6, HIGH);
  delay(tempo);

  digitalWrite(LED_P6, LOW);
  digitalWrite(LED_P7, HIGH);
  delay(tempo);

}
