#include <stdio.h>
#include <string.h>
/*
 * Autor: David Castejón García 5D DAM
 * Fecha: 
 * Título:
*/
 

 int main (){

 	int * arr = (int *)malloc(sizeof(int) * 3);

 	//SIEMPRE 	
 	 if (arr == NULL) {
        printf("Error: no se pudo asignar memoria.\n");
        return 1;//EXIT_FAILURE;
    }
    //Inicialización
    /*
    arr[0] = 1;
    arr[1] + 2;
    arr[2] + 2;
	*/

	for (int i = 0; i < 3; ++i){
		arr[i] = 2*i+1;
	}


/* Ampliar array a 5 con realloc */

int * arr_ampliado = (int*)realloc(arr,5*sizeof(int));
	if (arr == NULL){
		free(arr);//No libera la memoria antigua;
		/* SE LIBERA AQUÍ LA MEMORIA ANTIGUA PORQUE SI LA LIBERAMOS 
		ANTES NO COGERÍA EL ARGUMENTO DE LO QUE TENEMOS DENTRO 
		DE LA MEMORIA O MEJOR DICHO EL ARGUMENTO A COGER SERÍA NADA 
		PORQUE ESTARÍA LIBERADA*/
		printf("Error: no se pudo asignar memoria.\n");
        return 1;//EXIT_FAILURE;
	}

	arr[3] = 7;
	arr[4] = 9;

	for (int i = 0; i < 5; ++i){
		printf("arr_ampliado[%d]: %d.\n", i, arr_ampliado[i]);
	}
	free(arr_ampliado);

	//Para evitar confusiones entre arr y arr_ampliado es recomendable :
	// arr = arr_ampliado;
	//Si no lo pones como en este caso es una MALA PRÁCTICA.

	 return 0;
}
