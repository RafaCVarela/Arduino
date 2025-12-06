/*

	Projeto que faz uma LED qualquer,
    piscar em 1000 milisegundos.
    
    Feito por: Rafael Varela

*/



#define tempo 1000

const int LED_P2 = 2;

void setup()
{
  pinMode(LED_P2, OUTPUT);
}

void loop()
{
  digitalWrite(LED_P2, HIGH);
  delay(tempo);
  digitalWrite(LED_P2, LOW);
  delay(tempo);
}
