/*Cristian Ariel López Santiago
ejercicio1 nuenavas funciones

*/
#include <stdio.h>
#include <string.h>
// Prototipo o firma de las funciones del programa
void imprimir(char[]);
// Definición o implementación de la función main
int main ()
{
  char nombre[] = "Facultad de Ingeniería"; //arreglo de longitud no inicializada si no que la da la palabra que la da
  imprimir(nombre);//impresion con la impresion 
  return 0;
}
// Implementación de las funciones del programa
void imprimir(char s[]) //arreglo de caracteres s
{
  int tam;
  for ( tam=strlen(s)-1 ; tam>=0 ; tam--) //strlen cuenta y da la longitud del arreglo, esta sacando la informacion del arreglo de forma al reves del ultimo al principio
      printf("%c", s[tam]);
    printf("\n");
}
