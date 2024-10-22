#include<stdio.h>
#include<stdlib.h>

/*
 * Autor: David Castejón García 5D DAM
 * Fecha: 4/10/24
 * Título: Práctica 4.2 ejercicio 1
 */


int main (){
	int num1;
	int num2;
	char operador;
	operador = '+', '-', '*', '/';

	printf("Introduce el primer número: ");
	scanf("%d", &num1);
	printf("Introduce el segundo número: ");
	scanf("%d", &num2);
	printf("Introduce el operador (+, -, *, /): ");
	scanf(" %c", &operador);

	switch (operador){
		case '+':
			int resultado_suma;
			resultado_suma = num1 + num2;	
			printf("Resultado=%d\n", resultado_suma);
			break;
		case '-':
			int resultado_resta;
			resultado_resta = num1 - num2;
			printf("Resultado=%d\n", resultado_resta);
			break;
		case '*':
			int resultado_multi;
			resultado_multi = num1 * num2;
			printf("Resultado=%d\n", resultado_multi);
			break;
		case '/':
			int resultado_div;
			resultado_div = num1 / num2;
			printf("Resultado=%d\n", resultado_div);
	}

	if (operador !='+' && operador !='-' && operador !='*' && operador !='/'){
		printf("Operador no válido \n");
	}

	return 0;
}

