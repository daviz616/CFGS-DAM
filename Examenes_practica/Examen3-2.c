#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Ingrese el tamaño del array: ");
    scanf("%d", &n);

    // Reservar memoria
    double *arr = (double *)malloc(n * sizeof(double));
    if (arr == NULL) {
        printf("Error al asignar memoria\n");
        return 1;
    }

    // Llenar el array con la fórmula valor[i] = 1 / (i+1)
    for (int i = 0; i < n; i++) {
        arr[i] = 1.0 / (i + 1);
    }

    // Imprimir el array
    printf("Valores generados:\n");
    for (int i = 0; i < n; i++) {
        printf("%.5f ", arr[i]);
    }
    printf("\n");

    // Liberar memoria
    free(arr);

    return 0;
}
