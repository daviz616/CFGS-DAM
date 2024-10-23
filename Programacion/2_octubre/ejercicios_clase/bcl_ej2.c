#include<stdio.h>
#include<stdlib.h>

/*
 * Autor: David Castejón García 5D DAM
 * Fecha: 
 * Título:
*/
 

 int main (){
	int i = 0;
	for (int i=0; i<19; i+=2){ //10 veces
		printf("%d,",i);//10 veces
	}
	printf("%d.", i);

	// Total de lílenas ejecutadas 10 + bucle
	// Al salir del bucle i = 20.
	 return 0;
}
