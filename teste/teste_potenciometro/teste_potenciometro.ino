int POT = A0;

int LED_P5 = 5;
int LED_P6 = 6;
int LED_P7 = 7;

int leituraPot;

void setup() {
  
  pinMode(POT, INPUT);

  pinMode(LED_P5, OUTPUT);
  pinMode(LED_P6, OUTPUT);
  pinMode(LED_P7, OUTPUT);

}

void loop() {
  
  leituraPot = analogRead(POT);

  if(leituraPot < 341){

    digitalWrite(LED_P7, HIGH);
    digitalWrite(LED_P6, LOW);
    digitalWrite(LED_P5, LOW);

  }
  else if(leituraPot < 682){
    
    digitalWrite(LED_P7, HIGH);
    digitalWrite(LED_P6, HIGH);
    digitalWrite(LED_P5, LOW);


  }
  else{

    digitalWrite(LED_P7, HIGH);
    digitalWrite(LED_P6, HIGH);
    digitalWrite(LED_P5, HIGH);

  }

}
