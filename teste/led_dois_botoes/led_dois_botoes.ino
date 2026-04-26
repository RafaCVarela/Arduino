int LED_P2 = 2;
int BOTAO_P3 = 3;
int BOTAO_P4 = 4;

void setup()
{
  pinMode(LED_P2, OUTPUT);
  pinMode(BOTAO_P3, INPUT);
  pinMode(BOTAO_P4, INPUT);
}

void loop()
{
  boolean A = digitalRead(BOTAO_P3);
  boolean B = digitalRead(BOTAO_P4);
  
  if(!A&&!B){
  	
    digitalWrite(LED_P2, HIGH);
  
  }
  else{
  	
    digitalWrite(LED_P2, LOW);
  
  }
  
}