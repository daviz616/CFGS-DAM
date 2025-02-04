#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool es_primo(int num) {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int n;
    printf("Introduce el tamaño del array: ");
    scanf("%d", &n);

    int *array = (int *)malloc(n * sizeof(int));
    int numero = 2, contador = 0;

    while (contador < n) {
        if (es_primo(numero)) {
            array[contador] = numero;
            contador++;
        }
        numero++;
    }

    printf("Array de números primos: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    free(array);
    return 0;
}
