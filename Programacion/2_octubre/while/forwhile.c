#include<stdio.h>
#include<stdlib.h>

/*
 * Autor: David Castejón García 5D DAM
 * Fecha: 
 * Título:
*/
 

 int main (){
	
	 int i = 0;

	 for(i = 0; i<5; i = i + 1){
		printf("%d,", i);
		}
	 printf("Terminado el for\n");

	 //Traduciendo a while

	 i = 0;
	 while(i<5){
		 printf("%d,", i);//El interior del for
	i = i + 1;//Código entre vueltas
	}
	 printf("Terminado el while\n");

	 return 0;
}
