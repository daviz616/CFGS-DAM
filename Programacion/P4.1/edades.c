#include<stdio.h>
#include<stdlib.h>

/*
 * Autor: David Castejón García 5D DAM
 * Fecha: 
 * Título: Práctica 4.1
 */


int main (){

	int num;
	printf("Introduce tu edad:");
	scanf("%d", &num);

	if (num<12){
		printf("Niño");
		}
	if (17>num>12){
		printf("Adolescente");
	}
	if (64>num>17){
		printf("Adulto");
	}
	if (num>65){
		printf("Mayor");
	}
	

	 return 0;
}
