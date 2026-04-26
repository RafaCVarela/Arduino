#include <Servo.h>
 
Servo meuServo;  // Cria um objeto servo para controlar o servo motor
 
void setup() {
  meuServo.attach(9);  // Conecta o servo ao pino 9
}
 
void loop() {
  meuServo.write(90);  // Define o servo para a posição de 90 graus
  delay(1000);         // Espera 1 segundo
  meuServo.write(0);   // Define o servo para a posição de 0 graus
  delay(1000);         // Espera 1 segundo
}