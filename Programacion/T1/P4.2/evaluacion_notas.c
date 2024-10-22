#include<stdio.h>
#include<stdlib.h>

/*
 * Autor: David Castejón García 5D DAM
 * Fecha: 4/10/24 
 * Título: Práctica 4.2 ejercicio 2
*/
 

 int main (){
	int num;
	printf("Introduce la calificación: ");
	scanf("%d", &num);
	
	printf("Resultado: %s\n", (num>= 5) ? "Aprobado" :"Suspendido");
	
	if (num>10){
	  printf("Calificación demasiado alta");
	}
	  return 0;
}
