#include<stdio.h>
#include<stdlib.h>

/*
 * Autor: David Castejón García 5D DAM
 * Fecha: 
 * Título:
*/
 

 int main (){

	double r;
	
	//srand(10);
	
	srand(time(NULL));//Cada segundo
	srand(getpid());//Identificador del proceso

	for (int i = 0; i<4; i++){
		//srand(10), esto provocaria que se calculara siempre el mismo aleatorio
		r=(rand() % 5)+1;
	//rand()%5 genera aleatorio entre 0 y 4 incluidos,
	//al sumar 1 consigo números aleatorios entre 1-5.
	//Hacer módulo 8 da números aleatorios entre 0-7
	printf("%d\n", r);
	}
	/*Construir una función que calcule un número
	*aleatorio entre dos valores dados como argumento
	*/
	 return 0;
}
