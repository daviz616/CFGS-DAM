#include<stdio.h>
#include<stdlib.h>


/*
 * Autor: David Castejón García 5D DAM
 * Fecha: 
 * Título:eJERCICIO 4.1.3
*/
 

 int main (){
	float num;

	printf("Inroduce el monto total de la compra:\n");
	scanf("%f", &num);

	char c;
	printf("Introduce tu rol:\n"); 
	scanf(" %c", &c);
	if (c == 'e'){
	
	float descuento_estudiante;
	descuento_estudiante = num - (num * 0.15);
	printf("Monto estudiante=%f\n", descuento_estudiante);
	
	}
	
	if (c == 'p'){
	float descuento_profesor;
	descuento_profesor = num - (num * 0.10);
	printf("Monto profesor=%f\n", descuento_profesor);
	}
	
	if (c == 'o'){
	printf("Monto otro=%f\n", num);
	}
	return 0;
}
