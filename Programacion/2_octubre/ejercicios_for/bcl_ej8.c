#include<stdio.h>
#include<stdlib.h>

/*
 * Autor: David Castejón García 5D DAM
 * Fecha: 
 * Título:
*/
 

 int main (){
	
	int n, contador = 0;

	printf("Introduce un número entero positivo: ");
	scanf("%d", &n);

	 for(int i = 1; i <= n; i++){
	  if (n % i == 0){
		 contador++;
		}
	}
	 printf("El número %d tiene %d divisores.\n", n, contador);
	 return 0;
}
