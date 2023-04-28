/*
  Fundacion Kinal
  Centro Educativo Tecnico Laborla Kinal
  Electronica
  Grado: Quinto
  Seccion: A
  Curso: Taller de eleectronica digital y reparacion de computadoras I
  Nombre: Juan Manuel Sebastian Ixen Coy
  Carne: 2019519
  Fecha: 27/04
*/
#include <LiquidCrystal.h>

#define RS 6
#define E 7
#define D4 5
#define D5 4
#define D6 3
#define D7 2

LiquidCrystal LCD_Jixen(6, 7, 5, 4, 3, 2);

void setup()
{ 
  
 LCD_Jixen.begin(16,2);
 LCD_Jixen.setCursor(0,0);
 LCD_Jixen.print("Juan Manuel");
 LCD_Jixen.setCursor(0,1);
 LCD_Jixen.print("2019519");


}
void loop()
{

}
