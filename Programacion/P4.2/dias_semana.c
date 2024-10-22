#include<stdio.h>
#include<stdlib.h>

/*
 * Autor: David Castejón García 5D DAM
 * Fecha: 
 * Título:
 */

	int main() {
		int numero;
		printf("Introduce un número (1-7): ");
		scanf("%d", &numero);

		switch (numero) {
			case 1:
				printf("Resultado: Lunes\n");
				break;
			case 2:
				printf("Resultado: Martes\n");
				break;
			case 3:
				printf("Resultado: Miércoles\n");
				break;
			case 4:
				printf("Resultado: Jueves\n");
				break;
			case 5:
				printf("Resultado: Viernes\n");
				break;
			case 6:
				printf("Resultado: Sábado\n");
				break;
			case 7:
				printf("Resultado: Domingo\n");
				break;
			default:
				printf("Número inválido\n");
				break;
			}

	return 0;
}


