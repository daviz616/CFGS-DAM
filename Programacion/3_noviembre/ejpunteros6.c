#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void intercambiar(int *n1,int *n2){
	printf("Valor recibido: 1n%d\n, 2n%d\n", *n1, *n2);
	if (*n1 == 10){
		*n1 == *n2;
	printf("Valor intercambiado:1n%d\n, 2n%d\n", *n1, *n2);

int main(){
	int n1 = 10;
	int n2 = 5;
	intercambiar(&valor);//El cambio de memoria es para siempre
	printf("Valor en el main: %d\n", valor);
	return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void intercambiar(int *n1, int *n2) {
    printf("Valor recibido: n1 = %d, n2 = %d\n", *n1, *n2);
    if (*n1 == 10) {
        int temp = *n1;
        *n1 = *n2;
        *n2 = temp;
    }
    printf("Valor intercambiado: n1 = %d, n2 = %d\n", *n1, *n2);
}

int main() {
    int n1 = 10;
    int n2 = 5;
    printf("Antes del intercambio: n1 = %d, n2 = %d\n", n1, n2);
    intercambiar(&n1, &n2); // Llamada a la función con los argumentos correctos
    printf("Después del intercambio en el main: n1 = %d, n2 = %d\n", n1, n2);
    return 0;
}

