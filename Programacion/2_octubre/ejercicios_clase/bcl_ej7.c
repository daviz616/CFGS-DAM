#include<stdio.h>
#include<stdlib.h>

/*
 * Autor: David Castejón García 5D DAM
 * Fecha: 
 * Título:
*/
 

 int main (){
	
	int n;

	printf("Introduce el tamaño de cuadrado: ");
	scanf("%d", &n);

	 for(int i = 0; i<n; i++){
	 for(int j = 0; j<n; j++){
		 printf("* ");
		}
	 printf("\n");

	 }
	 return 0;
}
