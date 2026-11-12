/*Cristian Ariel López Santiago
ejercicio nuenavas funciones
El siguiente programa muestra la declaración y uso de variables locales en la función de
suma
*/

#include <stdio.h>
void sumar();
int main()
{
  sumar(); // llamado de la función suma
  return 0;
}
void sumar() // función suma
{
  int z,x=5, y=10;
  z=x+y;
  printf(“%i”,z);
}
