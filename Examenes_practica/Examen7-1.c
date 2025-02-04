#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

// Función para contar vocales en una palabra
int contar_vocales(char *palabra) {
    int contador = 0;
    char c;
    
    for (int i = 0; palabra[i] != '\0'; i++) {
        c = /*tolower*/(palabra[i]); // Convertir a minúscula para comparar fácilmente
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            contador++;
        }
    }
    
    return contador;
}

int main() {
    int n;

    // Solicitar tamaño de la palabra
    printf("Ingrese el tamaño de la palabra: ");
    scanf("%d", &n);

    // Reservar memoria dinámicamente para la palabra (+1 para '\0')
    char *palabra = (char *)malloc((n + 1) * sizeof(char));
    if (palabra == NULL) {
        printf("Error al asignar memoria\n");
        return 1;
    }

    // Pedir la palabra
    printf("Ingrese la palabra: ");
    scanf("%s", palabra);

    // Contar vocales
    int num_vocales = contar_vocales(palabra);

    // Mostrar el resultado
    printf("La palabra '%s' tiene %d vocales.\n", palabra, num_vocales);

    // Liberar la memoria
    free(palabra);

    return 0;
}
