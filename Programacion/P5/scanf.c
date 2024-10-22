#include<stdio.h>
#include<stdlib.h>

/*
 * Autor: David Castejón García 5D DAM
 * Fecha: 
 * Título:
*/
 

 int main (){
	char str1[100];
	char str2[100];
	printf("Intorduce un número:");
	scanf("%s", str1);
	printf("INtroduce un número:");
	scanf("%s", str2);
	printf("%s+%s=%s", str1, str2, str1+str2);
	 return 0;
}
