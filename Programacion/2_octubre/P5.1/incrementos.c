#include<stdio.h>
#include<stdlib.h>

/*
 * Autor: David Castejón García 5D DAM
 * Fecha: 
 * Título:
*/
 

 int main (){

	 int i = 0;

	 i = i + 1;
	 printf("%d\n", i); //1

	 i += 1; // incrementa en 1
	printf("%d\n", i); //2
	
	i += 2;
	printf("%d\n", i), //3
	
	i +=3; 
	printf("%d\n", i); // 4
	
	i += 4;
	printf("%d\n", i); // 5
	
	i ++; // i += 1; i = i + 1;Son 3 formas equivalentes de incremento.

       printf("%d\n", i); // 1
	i --; // i-=1 ; i = i -1;
	printf("%d\n", i); // 0
	

	//Nivel avanzado
	
	printf("Nivel avanzado: \n");
	printf("%d\n " ,i++); //0 porque incrementa después de leer el valor.
	printf("%d\n", i); // 1
	printf("%d\n", ++i);//2 porque el primero incrementa y el segundo devulve el valor.
	
	// Analógicamente ocurre con i--; --i;

	 return 0;
}
