#include<stdio.h>
#include<stdlib.h>

int main() {
	int num1, num2;
	printf("Introduce el primer número: ");
	scanf("%d", &num1);
	printf("Introduce el segundo número: ");
	scanf("%d", &num2);
	
	
	float resultado_suma, resultado_resta, resultado_multiplicacion, resultado_division;
//Si lees esto quiero aclarar que en mi ordenador de casa no me detectaba los decimales al computar por lo que en vez de usar el clásico:
//float resultado_suma;
//float resultado_resta;
//float resultado_multiplicacion;
//float resultado_dvision;
//He optado por usar el comando float en cada número, investigando un poco he logrado informarme de esta posibilidad más exahustiva en c.
	resultado_suma =(float)num1 + (float)num2;
	resultado_resta = (float)num1 - (float)num2;
	resultado_multiplicacion = (float)num1 * (float)num2;
	resultado_division = (float)num1 / (float)num2;
	
	printf("suma=%f\n", resultado_suma);
	printf("resta=%f\n", resultado_resta);
	printf("multiplicacion=%f\n", resultado_multiplicacion);
	printf("division=%f\n", resultado_division);
	
	return 0;
}


