#include <stdio.h>
#include <string.h>
#include <stdlib.h>


void modificar_elemento(int valor, int * array){

	int entero,n;
	scanf("%d", &n);

    for (int i = 0; i < n; i++){
   		scanf("%d", &entero);
   		scanf("%d", &valor);
       	array[i] = entero;
       	if (i == n){
		array[i] = valor;
		}
    }
}

void modificar_por_referencia(int *valor){


}

int main(){
	int n, entero, valor;
    printf("Introduce la longitud de la cadena: ");
    scanf("%d", &n);

int *array = (int *)malloc(n * sizeof(int)); 
    if (array == NULL) {
        printf("Error al reservar memoria.\n");
        return 1;
    }
	 printf("Introduce esta cantidad de números %d: ",n);
    
    for (int i = 0; i < n; i++){
   		scanf("%d", &entero);
       	array[i] = entero;
    }

  printf("Contenido del array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

modificar_elemento(valor, array);

    free(array);
    return 0;
}

/*
Preguntas; 1:
*/