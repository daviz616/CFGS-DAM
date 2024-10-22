#include<stdio.h>
#include<stdlib.h>

/*
 * Autor: David Castejón García 5D DAM
 * Fecha: 
 * Título:
*/
 

 int main (){

	 int condicion;
	 char c;
	 
	 printf("Ingresa un número entero\n");
	 scanf("%d", &condicion);
	
	 c = (condicion % 2) ? 'I' : 'P';
	 
	 printf("%c\n",c);

	 return 0;
}
