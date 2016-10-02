/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO 
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN takes care 
  of use the correct LED pin whatever is the board used.
  If you want to know what pin the on-board LED is connected to on your Arduino model, check
  the Technical Specs of your board  at https://www.arduino.cc/en/Main/Products
  
  This example code is in the public domain.

  modified 8 May 2014
  by Scott Fitzgerald
  
  modified 2 Sep 2016
  by Arturo Guadalupi
*/


void setup(){
       for (int i =9 ; i<12 ; i++)
            pinMode(i, OUTPUT);
}
void Color(int R, int G, int B){     
        analogWrite(9 , R) ;   // Red    - Rojo
        analogWrite(10, G) ;   // Green - Verde
        analogWrite(11, B) ;   // Blue - Azul
}
// the loop function runs over and over again forever
void loop(){    
//        Color(255 ,0 ,0) ;
//        delay(500); 
//        Color(0,255 ,0) ;
//        delay(500);
//        Color(0 ,0 ,255) ;
//        delay(500);
//        Color(0,0,0);
//        delay(1000);
        Color(random(255), random(255), random(255)) ;
        delay(500);
}
