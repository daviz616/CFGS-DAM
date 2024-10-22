#include <stdio.h>
#include <stdlib.h>

int main (){
       	int num1, num2;
	printf("Introduce el primer número entero: ");
	scanf("%d", &num1);
	printf("Introduce el segundo número entero: ");
	scanf("%d", &num2);
	
	int resultado_suma = num1 + num2;
	int resultado_resta = num1 - num2;
	int resultado_multiplicacion = num1 * num2;
	int resultado_division = num1 / num2;
	
	printf("suma=%d\n" ,resultado_suma);
	printf("resta=%d\n" ,resultado_resta);
	printf("multiplicacion=%d\n" ,resultado_multiplicacion);
	printf("division=%d\n" ,resultado_division);
	return EXIT_SUCCESS;
}
								       
