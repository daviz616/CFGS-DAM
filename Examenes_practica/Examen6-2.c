#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, m;
    printf("Ingrese filas y columnas: ");
    scanf("%d %d", &n, &m);

    int **matriz = (int **)malloc(n * sizeof(int *));
    for (int i = 0; i < n; i++)
        matriz[i] = (int *)malloc(m * sizeof(int));

    int *sumaFilas = (int *)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
        sumaFilas[i] = 0;
        for (int j = 0; j < m; j++) {
            matriz[i][j] = i + j;
            sumaFilas[i] += matriz[i][j];
        }
    }

    printf("Matriz generada:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("Suma por filas:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", sumaFilas[i]);

    free(sumaFilas);
    for (int i = 0; i < n; i++)
        free(matriz[i]);
    free(matriz);

    return 0;
}
