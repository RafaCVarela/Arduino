int PinTrigger = 2;
int PinEcho = 3;
int LED_Verd = 10;
float TempoEcho = 0;
const float VSom_mpors = 340;
const float VSom_mporms = 0.000340;

void DispararPulso();
float CalcularDistancia(float tempo);

void setup() {
  pinMode(PinTrigger, OUTPUT);
  digitalWrite(PinTrigger, LOW);
  pinMode(PinEcho, INPUT);

  pinMode(LED_Verd, OUTPUT);
  digitalWrite(LED_Verd, LOW);

  Serial.begin(9600);
  delay(100);
}

void loop() {

  digitalWrite(LED_Verd, HIGH);
  DispararPulso();


  TempoEcho = pulseIn(PinEcho, HIGH);
  Serial.println("Distancia em metros: ");
  Serial.println(CalcularDistancia(TempoEcho));
  Serial.println("Distancia em centimetros: ");
  Serial.println(CalcularDistancia(TempoEcho)*100);

  digitalWrite(LED_Verd, LOW);
  delay(2000);

}

void DispararPulso(){
  digitalWrite(PinTrigger, HIGH);
  delayMicroseconds(10);
  digitalWrite(PinTrigger, LOW);

}

float CalcularDistancia(float tempo){
  return (tempo*VSom_mporms)/2;
}