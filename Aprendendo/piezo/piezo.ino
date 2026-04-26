#define tempo 1000

int PIEZO = A0;


void setup() {
  
  pinMode(PIEZO, OUTPUT);

}

void loop() {
  
  for(int i = 0; i<5; i++){

    tone(PIEZO, 5000);
    delay(tempo);

    noTone(PIEZO);
    delay(tempo);
  }

  delay(tempo);

}
