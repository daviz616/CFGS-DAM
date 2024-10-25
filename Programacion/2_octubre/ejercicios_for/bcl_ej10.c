#include<stdio.h>
#include<stdlib.h>

/*
 * Autor: David Castejón García 5D DAM
 * Fecha: 
 * Título:
*/
 

 int main (){
	
	int n;
	
	printf("Introduce un número: ");
	scanf("%d", &n);

	for(int fila = 1; fila <= n; fila++){
	for(int col= 1; col <= fila; col++){
	printf("%d,", col);
	}
	 printf("\n");
	}
	
	//Solución 2
	for(int fila = 1; fila <= n; fila++){
	for(int col= 1; col <= fila; col++){
	printf("%d,", n);
		}
	}
	printf("\n");	
	return 0;
}
