#include <stdio.h>
#include <stdlib.h>

int main (){
	float  numero1 = 1.25;
	float  numero2 = 2.2;
	float  multiplicacion;
	float  division;
	
	multiplicacion = numero1*numero2;
	division = numero1/numero2;

	printf("Multiplicacion=%.3f\n" ,multiplicacion);
		printf("Division=%f\n" ,division);
		return EXIT_SUCCESS;
}



