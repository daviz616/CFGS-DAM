#include <stdio.h>
#include <stdlib.h>

int main(){
   	
	float num1, num2;
	printf("Introduce el primer número decimal: ");
	scanf("%f", &num1);
	printf("Introduce el segundo número decimal: ");
	scanf("%f", &num2);

	float resultado_suma,resultado_resta,resultado_multiplicacion,resultado_division;
	resultado_suma = num1 + num2;
	resultado_resta = num1 - num2;
	resultado_multiplicacion = num1 * num2;
	resultado_division = num1 / num2;

	printf("suma=%f\n", resultado_suma);
	printf("resta=%f\n", resultado_resta);
	printf("multiplicacion=%f\n", resultado_multiplicacion);
	printf("division=%f\n", resultado_division);

	return 0;
}

