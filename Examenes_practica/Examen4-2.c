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
    printf("Valores antes de la expansión:\n");
    for (int i = 0; i < n; i++) {
        printf("%.5f ", arr[i]);
    }
    printf("\n");

    // Expandir el array al doble de su tamaño
    double *temp = (double *)realloc(arr, 2 * n * sizeof(double));
    if (temp == NULL) {
        printf("Error al expandir memoria\n");
        free(arr);
        return 1;
    }
    arr = temp;//Solo si realloc es exitoso se asigna arr al puntero temp

    // Llenar los nuevos valores
    for (int i = n; i < 2 * n; i++) {
        arr[i] = 1.0 / (i + 1);
    }

    // Imprimir el array expandido
    printf("Valores después de la expansión:\n");
    for (int i = 0; i < 2 * n; i++) {
        printf("%.5f ", arr[i]);
    }
    printf("\n");

    // Liberar memoria
    free(arr);

    return 0;
}

