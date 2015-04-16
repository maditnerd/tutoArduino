//SDA --> A4
//SCL --> A5

#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

//Parametrage de la puce qui gere lecran LCD
LiquidCrystal_I2C lcd(0x27, 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE);  // Set the LCD I2C address

void setup() 
{
  Serial.begin(9600); 
  lcd.begin(16,2);   

//Ceci fait clignoter le lcd
  for(int i = 0; i< 3; i++)
  {
    lcd.backlight(); //Active la lumiere
    delay(250);
    lcd.noBacklight(); //Eteint la lumiere
    delay(250);
  }
  lcd.backlight();

  lcd.setCursor(0,0); //Caractere 0 Ligne 0
  lcd.print("Salut, le monde!");
  delay(1000);
  lcd.setCursor(0,1); //Caracter 0 Ligne 1
  lcd.print("Hello World!");
  delay(8000);  
}

void loop()   
{
 
}


