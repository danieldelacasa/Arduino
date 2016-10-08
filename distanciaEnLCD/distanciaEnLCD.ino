#include <LiquidCrystal.h>
#include <String.h>
//http://elcajondeardu.blogspot.com.es/2013/12/tutorial-conectando-una-pantalla-lcd.html
//http://elcajondeardu.blogspot.com.es/2014/03/tutorial-sensor-ultrasonidos-hc-sr04.html
LiquidCrystal lcd(7, 8, 9, 10, 11 , 12);
String distancia;
long tiempo;
void setup(){
  //Serial.begin(9600);
  lcd.begin(16, 2);
  lcd.setCursor(0,1);
  pinMode(26, OUTPUT); /*activación del pin 9 como salida: para el pulso ultrasónico*/
  pinMode(24, INPUT); /*activación del pin 8 como entrada: tiempo del rebote del ultrasonido*/
}

void loop(){
  digitalWrite(26,LOW); /* Por cuestión de estabilización del sensor*/
  delayMicroseconds(5);
  digitalWrite(26, HIGH); /* envío del pulso ultrasónico*/
  delayMicroseconds(10);
  tiempo=pulseIn(24, HIGH); /* Función para medir la longitud del pulso entrante. Mide el tiempo que transcurrido entre el envío
  del pulso ultrasónico y cuando el sensor recibe el rebote, es decir: desde que el pin 12 empieza a recibir el rebote, HIGH, hasta que
  deja de hacerlo, LOW, la longitud del pulso entrante*/
  distancia= int(0.017*tiempo); /*fórmula para calcular la distancia obteniendo un valor entero*/
  /*Monitorización en centímetros por el monitor serial*/
//  Serial.println("Distancia ");
//  Serial.println(distancia);
//  Serial.println(" cm");
  delay(1000);
  lcd.clear();
  lcd.print("Distancia: "+distancia+" cm");
}
