#include<stdio.h>
#include<stdlib.h>

/*
 * Autor: David Castejón García 5D DAM
 * Fecha: 
 * Título:
*/
 

 int main (){

	int n, cociente, resto=0;
	printf("Introduce un número entero positivo: ");
	scanf("%d", &n);
	
	do{
		cociente = n / 10;
		resto = resto * 10 + (n % 10);
		n = cociente;
	} while (cociente != 0);

	 printf("%d\n", resto);

	 return 0;
}
