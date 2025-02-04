#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Ingrese el tamaño del array: ");
    scanf("%d", &n);

    // Reservar memoria
    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Error al asignar memoria\n");
        return 1;
    }

    // Leer valores
    printf("Ingrese %d valores enteros:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Liberar memoria
    free(arr);

    return 0;
}
