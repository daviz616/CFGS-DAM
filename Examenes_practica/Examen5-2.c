#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    // Solicitar el tamaño del array
    printf("Ingrese el tamaño del array: ");
    scanf("%d", &n);

    // Reservar memoria para el array de doubles
    double *arr = (double *)malloc(n * sizeof(double));
    if (arr == NULL) {
        printf("Error al asignar memoria\n");
        return 1;
    }

    // Llenar el array con la fórmula valor[i] = 1 / (i + 1)
    for (int i = 0; i < n; i++) {
        arr[i] = 1.0 / (i + 1);
    }

    // Imprimir los valores del array
    printf("Valores generados:\n");
    for (int i = 0; i < n; i++) {
        printf("%.5f ", arr[i]);
    }
    printf("\n");

    // Liberar la memoria
    free(arr);

    return 0;
}
