#include <stdio.h>
#include <stdlib.h>

// Función para intercambiar la primera y última fila de la matriz
void intercambiar_filas(int **matriz, int n) {
    int *temp = matriz[0];  // Guardamos la referencia de la primera fila
    matriz[0] = matriz[n - 1];  
    matriz[n - 1] = temp;  
}

int main() {
    int n;

    // Solicitar tamaño de la matriz
    printf("Ingrese el tamaño de la matriz (n x n): ");
    scanf("%d", &n);

    // Reservar memoria para la matriz (array de punteros)
    int **matriz = (int **)malloc(n * sizeof(int *));
    if (matriz == NULL) {
        printf("Error al asignar memoria\n");
        return 1;
    }

    // Reservar memoria para cada fila
    for (int i = 0; i < n; i++) {
        matriz[i] = (int *)malloc(n * sizeof(int));
        if (matriz[i] == NULL) {
            printf("Error al asignar memoria\n");
            return 1;
        }
    }

    // Llenar la matriz con valores ingresados por el usuario
    printf("Ingrese los valores de la matriz:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Mostrar matriz antes del intercambio
    printf("\nMatriz original:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    // Intercambiar la primera y última fila
    intercambiar_filas(matriz, n);

    // Mostrar matriz después del intercambio
    printf("\nMatriz después del intercambio de filas:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    // Liberar memoria
    for (int i = 0; i < n; i++) {
        free(matriz[i]);  // Liberar cada fila
    }
    free(matriz);  // Liberar el array de punteros

    return 0;
}
