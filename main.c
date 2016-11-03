#include <stdio.h>
#include "getnum.h"
#include "valida.h" // biblioteca con funciones valida 
#include "buttonsAndScissorsBack.h"
#include <stdlib.h>
int main ()
{
	int opcion;
	printf("1.Juego de dos jugadores\n 2.Juego contra computadora \n 3.Recuperar un juego guardado \n 4.Terminar\n ");
	opcion=menu()
    

}
int menu(void)
{
	int a;
	do {
    a=getint("Ingrese opcion\n");
    if (validamenu(a))  //opcion<1 || opcion>4 devuelve 1 o 0
    	printf("Error 1\n");

	}
	while (!validamenu(a))
	return a;
}
int main ()
{
  int opcion;
  opcion=menu();
	switch (opcion)
	{
		case 1:
		break;
		case 2:
		break;
		case 3:
		break;{
		}
		case 4:
	
			
	}
}
