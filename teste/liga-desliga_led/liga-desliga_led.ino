#define turnPin 2 // Pino do botão que liga o sistema
#define LED_P4 4 // Pino do Led


boolean stateTurn = 0; // Estado do pino Liga/Desliga

void setup() {
  
  pinMode(turnPin, INPUT_PULLUP);
  pinMode(LED_P4, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  
  turnOnOff();
  
  if (stateTurn){

    digitalWrite(LED_P4, HIGH);
    delay(15);
    
  }
  else{

    digitalWrite(LED_P4, LOW);

  }

}

// Função que liga e desliga o sistema
void turnOnOff(){

  Serial.print("1- stateTurn:\t");
  Serial.println(stateTurn);

  if (!digitalRead(turnPin)) { // verifica se o botão foi acionado
    
    stateTurn = !stateTurn;
    Serial.print("2- stateTurn:\t");
  	Serial.println(stateTurn);
    while(!digitalRead(turnPin)) {}
    delay(50);
    }

}