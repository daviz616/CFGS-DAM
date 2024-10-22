#include<stdio.h>
#include<stdlib.h>

/*
 * Autor: David Castejón García 5D DAM
 * Fecha: 
 * Título:
*/
 

 int main (){
		
	char str1[4] = "hola";
	printf("%s\n", str1);
	printf("%c\n", str1[3]); //Imprime el cuarto caracter porque s eempieza a contar desde el 0. str1[0] = 'h'
	str1[2] = '\0';// La cadena acaba en el \0 cualquier memoria reservada
	// ho\0a
	str1[4] = '$';
	printf("%s\n", str1);
	 return 0;
}
