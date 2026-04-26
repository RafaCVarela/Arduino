#include <Servo.h>

Servo SMOTOR_P3;

int pos;

void setup() {
  
  SMOTOR_P3.attach(3);
  SMOTOR_P3.write(0);

}
void loop() {
  
  for(pos = 0; pos < 90; pos++){

    SMOTOR_P3.write(pos);
    delay(15);

  }
  for(pos = 90; pos >= 0; pos--){

    SMOTOR_P3.write(pos);
    delay(15);

  }

}
