#include <stdio.h>
#include <stdlib.h>

char capitalizar(char letra_minuscula) {
    letra_minuscula = letra_minuscula + 'Z' - 'z';
    return letra_minuscula;
}

int main() {
    int longitud;//A. Pedir un entero que determinará el tamaño de la palabra.
    printf("Introduce la longitud de la palabra: ");
    scanf("%d", &longitud);

    //B. Reservar dinámicamente espacio para una palabra de esa longitud.
    char *palabra = (char *)malloc((longitud + 1) * sizeof(char)); // +1 para '\0'
    if (palabra == NULL) {
        printf("Error al reservar memoria.\n");
        return 1;
    }
//C. Leer por pantalla una palabra de esa longitud. 
    printf("Introduce una palabra de longitud %d: ", longitud);
    scanf("%s", palabra);

    //Llamar a la función capitalizar para cada uno de los caracteres.
    for (int i = 0; i < longitud; i++) {
        palabra[i] = capitalizar(palabra[i]);
    }
    //E. Imprimir la palabra. 
    printf("Palabra capitalizada: %s\n", palabra);

    free(palabra);
    return 0;
}
/*Pregunta 1 (1p.): ¿Los cambios que realiza la función capitalizar son 
persistentes al terminar la función?
La función capitalizar modifica el valor de la letra que le pasa como 
argumento, pero debido a que C pasa los argumentos por valor (y no por 
referencia), no se modifica la palabra en memoria en el main directamente.
Si se quisiera que los cambios fueran persistentes, se deben pasar las 
direcciones de memoria de los caracteres a la función. En este caso, 
deberíamos cambiar la firma de la función para que reciba un puntero,
 y así poder modificar el contenido directamente en la memoria.
 char capitalizar (char *letra_minuscula) {
    *letra_minuscula = *letra_minuscula + 'Z' - 'z'; 
    // Modificamos el valor apuntado.
    printf("%c", *letra_minuscula);
}
Con esto, en el main, llamaríamos a la función con la dirección de 
la letra de la siguiente forma:

capitalizar(&palabra[i]);
*/

/*Pregunta 2 (1p.): ¿Qué ocurre si se introduce una palabra de más 
longitud de la reservada?
Si se introduce una palabra más larga de la que se ha reservado, 
el programa accederá a memoria no asignada. Esto puede causar un 
comportamiento indefinido, como sobreescribir otras variables o 
corromper datos. En este caso, no se imprimiría la palabra correctamente.
En resumen:
Si se reserva memoria para una palabra de longitud 5 y se intenta 
introducir "murciélago" (de 12 caracteres), el programa sobreescribirá 
memoria fuera de los límites del array reservado, lo que probablemente 
cause un error o corrupción de datos.*/