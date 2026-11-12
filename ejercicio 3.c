/*Cristian Ariel Lopez >Santiago
ejercico3
El siguiente programa muestra la declaración de la variable global resultado, la cual es
utilizada en ambas funciones.*/

#include <stdio.h>

int resultado; //variable global

void multiplicar(); 

int main()
{
    multiplicar(); //llamado de la función multiplicar
    printf("%i", resultado);
    return 0;
}

void multiplicar() //función multiplicar
{
    resultado = 5 * 4;
}
