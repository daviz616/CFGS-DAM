#include <stdio.h>
#include <stdlib.h>

void imprimir_array(int *array, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main() {
    int tam1, tam2, opcion;

    printf("Introduce el tamaño del primer array: ");
    scanf("%d", &tam1);
    int *array1 = (int *)malloc(tam1 * sizeof(int));
    for (int i = 0; i < tam1; i++) {
        array1[i] = (i + 1) * 2; // Múltiplos de 2
    }

    printf("Introduce el tamaño del segundo array: ");
    scanf("%d", &tam2);
    int *array2 = (int *)malloc(tam2 * sizeof(int));
    for (int i = 0; i < tam2; i++) {
        array2[i] = (i + 1) * 3; // Múltiplos de 3
    }

    printf("¿Deseas (1) sumar coordenada a coordenada o (2) concatenar? ");
    scanf("%d", &opcion);

    if (opcion == 1) {
        int min_tam = tam1 < tam2 ? tam1 : tam2;
        int *suma_array = (int *)malloc(min_tam * sizeof(int));
        for (int i = 0; i < min_tam; i++) {
            suma_array[i] = array1[i] + array2[i];
        }
        imprimir_array(suma_array, min_tam);
        free(suma_array);
    } else if (opcion == 2) {
        int total_tam = tam1 + tam2;
        int *concat_array = (int *)malloc(total_tam * sizeof(int));
        for (int i = 0; i < tam1; i++) {
            concat_array[i] = array1[i];
        }
        for (int i = 0; i < tam2; i++) {
            concat_array[tam1 + i] = array2[i];
        }
        imprimir_array(concat_array, total_tam);
        free(concat_array);
    }

    free(array1);
    free(array2);

    return 0;
}
