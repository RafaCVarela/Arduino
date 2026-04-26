#include <Servo.h>

Servo SMOTOR_P2;
Servo SMOTOR_P3;
Servo SMOTOR_P4;
Servo SMOTOR_P5;

int POT_PA0 = A0;
int POT_PA1 = A1;
int POT_PA2 = A2;
int POT_PA3 = A3;

int LED_P6 = 6;
int LED_P7 = 7;
int LED_P8 = 8;
int LED_P9 = 9;

int val0;
int val1;
int val2;
int val3;

int pos0;
int pos1;
int pos2;
int pos3;


void setup()
{
  SMOTOR_P2.attach(2);
  SMOTOR_P3.attach(3);
  SMOTOR_P4.attach(4);
  SMOTOR_P5.attach(5);
  
  SMOTOR_P2.write(0);
  SMOTOR_P3.write(0);
  SMOTOR_P4.write(0);
  SMOTOR_P5.write(0);
  
  pinMode(POT_PA0, INPUT);
  pinMode(POT_PA1, INPUT);
  pinMode(POT_PA2, INPUT);
  pinMode(POT_PA3, INPUT);  
  
  pinMode(LED_P6, OUTPUT);
  pinMode(LED_P7, OUTPUT);
  pinMode(LED_P8, OUTPUT);
  pinMode(LED_P9, OUTPUT);
}

void loop()
{
  boolean A = analogRead(POT_PA0);
  boolean B = analogRead(POT_PA1);
  boolean C = analogRead(POT_PA2);
  boolean D = analogRead(POT_PA3);
  
  
  val0 = analogRead(POT_PA0);
  pos0 = map(val0, 0, 1023, 0, 180);
  
  val1 = analogRead(POT_PA1);
  pos1 = map(val1, 0, 1023, 0, 180);
  
  val2 = analogRead(POT_PA2);

  pos2 = map(val2, 0, 1023, 0, 180);
  
  val3 = analogRead(POT_PA3);
  pos3 = map(val3, 0, 1023, 0, 180);
  
  SMOTOR_P2.write(pos0);    
  SMOTOR_P3.write(pos1);
  SMOTOR_P4.write(pos2);
  SMOTOR_P5.write(pos3);
  
  
  if(A){
      
  digitalWrite(LED_P6, HIGH);
  
  }
  if(B){
    
    digitalWrite(LED_P7, HIGH);
    
  }
  if(C){
    
    digitalWrite(LED_P8, HIGH);
    
  }
  if(D){
    
    digitalWrite(LED_P9, HIGH);
    
  }
  
  digitalWrite(LED_P6, LOW);
  digitalWrite(LED_P7, LOW);
  digitalWrite(LED_P8, LOW);
  digitalWrite(LED_P9, LOW);
}