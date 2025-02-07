#include <stdio.h>
#include <stdlib.h>

int main() {
    int x = 2, y = 3, z = 4; // Dimensiones de la matriz
    int ***matriz;

    // Reservamos memoria para las matrices
    matriz = (int ***)malloc(x * sizeof(int **));
    for (int i = 0; i < x; i++) {
        matriz[i] = (int **)malloc(y * sizeof(int *));
        for (int j = 0; j < y; j++) {
            matriz[i][j] = (int *)malloc(z * sizeof(int));
        }
    }

    // Llenamos la matriz con valores secuenciales
    int valor = 1;
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            for (int k = 0; k < z; k++) {
                matriz[i][j][k] = valor++;
            }
        }
    }

    // Mostramos la matriz
    for (int i = 0; i < x; i++) {
        printf("Matriz %d:\n", i + 1);
        for (int j = 0; j < y; j++) {
            for (int k = 0; k < z; k++) {
                printf("%d\t", matriz[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }

    // Liberamos la memoria asignada
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            free(matriz[i][j]);
        }
        free(matriz[i]);
    }
    free(matriz);

    return 0;
}
