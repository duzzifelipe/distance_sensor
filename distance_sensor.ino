#include <Ultrasonic.h>

#define pin_trigger 4
#define pin_echo 5

Ultrasonic ultrasonic(pin_trigger, pin_echo);

void setup(){
  Serial.begin(9600);
  Serial.println("Lendo dados do sensor...");
}

void loop(){
  float cmMsec;
  long microsec = ultrasonic.timing();
  cmMsec = ultrasonic.convert(microsec, Ultrasonic::CM);
  
  //Exibe informacoes no serial monitor
  Serial.print("Distancia em cm: ");
  Serial.println(cmMsec);
  delay(200);
}

