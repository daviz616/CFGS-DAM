#include <stdio.h>
int main() {
    int numero = 10;
    int trampa = 30;

    int * const prt = &numero;
    //El valor apuntado es constante

    printf("Valor: %d\n", *ptr);
    //*ptr = 20; // Esto daría error porque 
    numero = 20; //Cambiar el valor directamente 
    printf("Nuevo valor: %d\n", *ptr);

    
    const int LIMITE = 100;  // Definir una constante

    printf("El valor de LIMITE es: %d\n", LIMITE);

    // LIMITE = 200;  // Esto daría un error porque LIMITE es constante

    return 0;
}
