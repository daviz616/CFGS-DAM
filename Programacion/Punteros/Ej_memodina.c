#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
 * Autor: David Castejón García 5D DAM
 * Fecha: 
 * Título:
*/
 

 int main (){
 	int tam;
 	printf("Introduce el número del array: ");
 	scanf("%d",&tam);

 	int * arr = (int *)malloc(sizeof(int) * tam);
 	//SIEMPRE 	
 	 if (arr == NULL) {
        printf("Error: no se pudo asignar memoria.\n");
        return 1;//EXIT_FAILURE;
    }
   
	for (int i = 0; i < tam; ++i){
		arr[i] = 2*i;
		printf("arr[%d]: %d\n", i, arr[i]);
	}
 
	int * ampliado = (int*)realloc(arr,(tam*2)*sizeof(int));
	if (arr == NULL){
		free(arr);
		printf("Error de realloc.\n");
        return 1;//EXIT_FAILURE;
	}
	arr = ampliado;

	for (int i = tam, impares =1; i < tam*2; ++i, impares += 2){
		arr[i] = impares;
		printf("duplicado[%d]: %d.\n", i, arr[i]);
	} 

	free(arr);

	 return 0;

}