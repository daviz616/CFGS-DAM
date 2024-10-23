#include<stdio.h>
#include<stdlib.h>

/*
 * Autor: David Castejón García 5D DAM
 * Fecha: 
 * Título:
*/
 

 int main (){
	
	 int suma = 0;
	 int n;

	printf("Introduce un número: ");
	scanf("%d", &n);

	 for(int i = 0; i<=n; i++){
	suma += i;
	 }
	 printf("La suma de todos los números es: %d\n", suma);

	 return 0;
}
