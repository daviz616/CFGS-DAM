#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Función para invertir una palabra
char *invertir(char *palabra) {
    int len = strlen(palabra);
    
    // Reservamos memoria para la palabra invertida (+1 para el '\0')
    char *invertida = (char *)malloc((len + 1) * sizeof(char));
    if (invertida == NULL) {
        printf("Error al asignar memoria\n");
        return NULL;
    }

    // Llenamos la nueva cadena con la palabra invertida
    for (int i = 0; i < len; i++) {
        invertida[i] = palabra[len - i - 1];
    }
    invertida[len] = '\0';  // Terminador de cadena

    return invertida;  // Retornamos el puntero a la palabra invertida
}

int main() {
    int n;
    
    // Pedir tamaño de la palabra
    printf("Ingrese el tamaño de la palabra: ");
    scanf("%d", &n);
    
    // Reservar memoria para la palabra ingresada (+1 para el '\0')
    char *palabra = (char *)malloc((n + 1) * sizeof(char));
    if (palabra == NULL) {
        printf("Error al asignar memoria\n");
        return 1;
    }

    // Pedir la palabra
    printf("Ingrese la palabra: ");
    scanf("%s", palabra);

    // Llamar a la función invertir
    char *invertida = invertir(palabra);
    if (invertida == NULL) {
        free(palabra);
        return 1;
    }

    // Imprimir la palabra original e invertida
    printf("Palabra original: %s\n", palabra);
    printf("Palabra invertida: %s\n", invertida);

    // Liberar memoria
    free(palabra);
    free(invertida);

    return 0;
}
