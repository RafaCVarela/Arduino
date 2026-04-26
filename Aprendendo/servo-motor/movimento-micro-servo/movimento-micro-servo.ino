/*
  Projeto que visa estudar os primeiros
  movimentos a ser executado com o micro
  servo.

  Feito por: Rafael Varela

*/


#include <Servo.h>
 
Servo meuServo;
 
void setup() {
  meuServo.attach(9);
}
 
void loop() {
  meuServo.write(90);  // Posição de 90 graus
  delay(1000);
  meuServo.write(0);   // Posição de 0 graus
  delay(1000);
}