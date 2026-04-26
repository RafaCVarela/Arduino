/*

	Projeto de ligar uma LED qualquer,
  a partir do sinal de um botão.

  Simula um circuito digital com
  uma variável que liga a LED quando
  o sinal é 1 (Verdade).

  Feito por: Rafael Varela

*/

const int LED_P4 = 4;
const int BOTAO = 12;
int valorBotao;

void setup()
{
  pinMode(LED_P4, OUTPUT);
  pinMode(BOTAO, INPUT);
}

void loop()
{
  valorBotao = digitalRead(BOTAO);
  digitalWrite(LED_P4, valorBotao);  
}