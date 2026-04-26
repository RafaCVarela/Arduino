/*

	Projeto que indica o valor do potenciometro,
  através de LED's de diferentes cores.

    Feito por: Rafael Varela

*/


const int LED_P3 = 3;
const int LED_P4 = 4;
const int LED_P5 = 5;
int POT_A0 = A0; 
int leituraPot;

void setup()
{
  
  Serial.begin(9600);
  
  pinMode(LED_P3, OUTPUT);
  pinMode(LED_P4, OUTPUT);
  pinMode(LED_P5, OUTPUT);
  pinMode(POT_A0, INPUT);
  
}

void loop()
{
  leituraPot = analogRead(POT_A0);
  
  Serial.println(leituraPot);
  
  if (leituraPot < 341){
  
  	digitalWrite(LED_P3, HIGH);
    digitalWrite(LED_P4, LOW);
    digitalWrite(LED_P5, LOW);
    
  }
  else{
  
    if (leituraPot < 682){
    
    	digitalWrite(LED_P3, HIGH);
      	digitalWrite(LED_P4, HIGH);
      	digitalWrite(LED_P5, LOW);
      
    }
    else{
    
      if (leituraPot < 1024){
      
      	digitalWrite(LED_P3, HIGH);
        digitalWrite(LED_P4, HIGH);
        digitalWrite(LED_P5, HIGH);
      
      }
      
    }
  
  }
   
}