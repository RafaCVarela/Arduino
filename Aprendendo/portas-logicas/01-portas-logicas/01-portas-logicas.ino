/*

	Estudo de portas lógicas por programação
  
  Feito por: Rafael Costa Varela

*/


const int interruptor01 = 9;
const int interruptor02 = 10;
const int interruptor03 = 11;

const int LED = 12;

int portaAND (int entrada01, int entrada02, int entrada03);
int portaOR (int entrada01, int entrada02, int entrada03);

void setup()
{
  // Setup para o LED
  pinMode(LED, OUTPUT);
  
  // Setup para os interruptores
  pinMode(interruptor01, INPUT_PULLUP);
  pinMode(interruptor02, INPUT_PULLUP);
  pinMode(interruptor03, INPUT_PULLUP);
}

int portaAND (int entrada01, int entrada02, int entrada03)
{
  return (entrada01 && entrada02 && entrada03) ? 1 : 0;
}

int portaOR (int entrada01, int entrada02, int entrada03)
{
  return (entrada01 || entrada02 || entrada03) ? 1 : 0;
}

void loop()
{
  // Declaração dos estados dos interruptores
  int estado01 = digitalRead(interruptor01);
  int estado02 = digitalRead(interruptor02);
  int estado03 = digitalRead(interruptor03);
  
  // Estados das portas lógicas AND e OR
  int estadoAND_01 = portaAND(!estado01, estado02, estado03);
  int estadoAND_02 = portaAND(estado01, !estado02, estado03);
  int estadoAND_03 = portaAND(estado01, estado02, !estado03);
  int estadoOR = portaOR(estadoAND_01, estadoAND_02, estadoAND_03);
  
  (estadoOR) ? digitalWrite(LED, HIGH) : digitalWrite(LED, LOW);
  	
}
