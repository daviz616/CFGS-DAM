#include<stdio.h>
#include<stdlib.h>

/*
 * Autor: David Castejón García 5D DAM
 * Fecha: 
 * Título:
*/
 

 int main (){
	
	 int resultado = 1;
	 int num;

	printf("Introduce un número: ");
	scanf("%d", &num);

	 for(int i = num; i>1; i--){
	resultado = resultado * i;
	 }
	 printf("%d! = %d\n",num,resultado);

	 return 0;
}
