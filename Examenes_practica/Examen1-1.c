#include <stdio.h>
#include <stdlib.h>

char capitalizar(char letra_minuscula) {
    letra_minuscula = letra_minuscula + 'Z' - 'z';
    return letra_minuscula;
}

int main() {
    int longitud;
    printf("Introduce la longitud de la palabra: ");
    scanf("%d", &longitud);

    // Reserva de memoria
    char *palabra = (char *)malloc((longitud + 1) * sizeof(char)); // +1 para '\0'
    if (palabra == NULL) {
        printf("Error al reservar memoria.\n");
        return 1;
    }

    printf("Introduce una palabra de longitud %d: ", longitud);
    scanf("%s", palabra);

    // Capitalizar caracteres
    for (int i = 0; i < longitud; i++) {
        palabra[i] = capitalizar(palabra[i]);
    }

    printf("Palabra capitalizada: %s\n", palabra);

    free(palabra);
    return 0;
}

