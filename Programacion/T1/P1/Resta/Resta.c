#include <stdio.h>
#include <stdlib.h>

int main (){
	int numero1 = 6;
	int numero2 = 4;
	int resta,multiplicacion;
	float division;
	
	resta = numero1 - numero2;
	multiplicacion = numero1*numero2;
	division = numero1/numero2;

	printf("Resta=%d\n",resta);
	printf("Multiplicacion=%d\n" ,multiplicacion);
	printf("Division=%.3f\n" ,division);
	return EXIT_SUCCESS;
}
