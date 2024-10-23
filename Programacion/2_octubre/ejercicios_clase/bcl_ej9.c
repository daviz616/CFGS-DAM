#include<stdio.h>
#include<stdlib.h>

/*
 * Autor: David Castejón García 5D DAM
 * Fecha: 
 * Título:
*/
 

 int main (){
	
	int n;
	int penultimo=0;
	int ultimo = 1;

	for(int i = 1; i <= 10; i++){
	n = ultimo + penultimo ;
	printf("%d,",n);
		penultimo = ultimo;
		ultimo = n;
	 }
	printf("%d",ultimo+penultimo);
	 printf("\n");
	       return 0;
}
