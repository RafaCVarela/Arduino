const int latchPin = 4;
const int clockPin = 5;
const int dataPin = 6;

void setup() {
  pinMode(latchPin, OUTPUT);
  pinMode(clockPin, OUTPUT);
  pinMode(dataPin, OUTPUT);  
}
void loop() {
  // Exemplo: acender o primeiro LED
  int dataToSend = 1; // Representação binária do bit para o primeiro LED (00000001)

  digitalWrite(latchPin, LOW);
  shiftOut(dataPin, clockPin, MSBFIRST, dataToSend); // Envia o dado
  digitalWrite(latchPin, HIGH);

  delay(10000);

  // Exemplo: acender todos os LEDs
  dataToSend = 255; // Representação binária do bit para todos os LEDs (11111111)

  digitalWrite(latchPin, LOW);
  shiftOut(dataPin, clockPin, MSBFIRST, dataToSend);
  digitalWrite(latchPin, HIGH);

  delay(10000);
}