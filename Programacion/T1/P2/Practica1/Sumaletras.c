#include<stdio.h>
#include<stdlib.h>

/*   Autor: David Castejón García
 *   Fecha: 25/9/24
 *   Título:P02.2.2
*/



int main() {
	
	char a = 'a';
	int num1 = 1;
	int num2 = 2;
	int num28 = 28;
        
	int resultado_entero_1 = a + num1;
	char resultado_ASCII_1 = a + num1;

	printf("Resultado en decimal_1\n");
	printf("%i\n", resultado_entero_1);
	printf("Resultado en ASCII_1_\n");
	printf("%c\n", resultado_ASCII_1);
	
	
	int resultado_entero_2 = a + num2;
	char resultado_ASCII_2 = a + num2;
	
	printf("Resultado en decimal_2\n");
	printf("%i\n", resultado_entero_2);
	printf("Resultado en ASCII_2\n");
	printf("%c\n", resultado_ASCII_2);


	int resultado_entero_3 = a + num28;
	char resultado_ASCII_3 = a + num28;

	printf("Resultado en decimal_3\n");
	printf("%i\n", resultado_entero_3);
	printf("Resultado en ASCII_3\n");
	printf("%c\n", resultado_ASCII_3);

	return 0;
}

