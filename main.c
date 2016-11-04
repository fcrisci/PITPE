#include <stdio.h>
#include "buttonsAndScissorsBack.h" // incluimos adentro el "getint.h"
#include "valida.h> //opcionalmente separamos una biblioteca aparte del backend que se llama valida
#include <stdlib.h>
int main ()
{
    int opcion;
    printf (" 1.Juego de dos jugadores\n 2.Juego contra computadora \n 3.Recuperar un juego \n 4.Terminar \n");
    do {
        opcion=getint("Elija opción \n");
        if (validaopcion(opcion))  // validaopcion devuelve 1 o 0
            printf("Error ingrese opción de rango 1 al 4 \n"); // Nota:cambiar el printf por una funcion con defines de errores
    }
    while ( validaopcion(opcion));
    switch(opcion) // adentro se va a trabajar las funciones principales
    {
        case 1:{
             printf("Juego de dos jugadores");
            break;
        }
        case 2:
            break;
        case 3: break;

        case 4: return 0; // por ahora devolvemos 0 modificar luego


    }

  

}

