 #include <LiquidCrystal.h>
//http://elcajondeardu.blogspot.com.es/2013/12/tutorial-conectando-una-pantalla-lcd.html
LiquidCrystal lcd(7, 8, 9, 10, 11 , 12);

void setup() { 
  lcd.begin(16, 2);
  lcd.setCursor(0,1);
  lcd.write("Hola Ke Ase?");
}

void loop() { }
