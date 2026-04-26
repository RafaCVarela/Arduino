/*

	Projeto que liga um LED quando
  dois botões são precionados.

  Simulação de circuito digital que
  possui duas variáveis, duas entradas e
  só acende a LED quando ambos são 1 (Verdade).
    
  Feito por: Rafael Varela

*/


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