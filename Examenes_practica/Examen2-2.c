#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Introduce el tamaño del array: ");
    scanf("%d", &n);

    double *array = (double *)malloc(n * sizeof(double));
    for (int i = 0; i < n; i++) {
        array[i] = 1.0 / (i + 1);
    }

    printf("Contenido del array:\n");
    for (int i = 0; i < n; i++) {
        printf("%.2f ", array[i]);
    }
    printf("\n");

    free(array);
    return 0;
}
