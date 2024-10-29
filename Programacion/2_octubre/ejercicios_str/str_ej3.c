#include<stdio.h>
#include<stdlib.h>

/*
 * Autor: David Castejón García 5D DAM
 * Fecha: 
 * Título:
*/
 

 int main (){
	char str1[8] = "Iguales";
	char str2[8] = "Iguales";

	if (str1 == str2){
		priintf("Son iguales\n");
	} else { printf("Son distintas\n");
	}

	//Solución 2;
	if (str1 < str2){
		printf("str1 es menor\n");
	} else { 
		printf("str2 es menor\n");
	}
	// Comparar caracter a caracter 
	for (int i=0; i<0; i++){
		if (str1[i] == str2[i]){
			printf("%c", str1[1]);
		}
	}
	return 0;
}
