#include<stdio.h>
#include<stdlib.h>

/*
 * Autor: David Castejón García 5D DAM
 * Fecha: 
 * Título:
*/
 
int busqueda_binaria(int * array, int a_buscar, int ini, int fin){
	
	int mitad = (ini + fin)/2;
	if(array[mitad] == a_buscar){
		return 1;
	}else if (a_buscar < array[mitad]){
		return  busqueda_binaria(array, a_buscar, ini, mitad);
	}else{
		return  busqueda_binaria (array, a_buscar, mitad, fin);
	}
}

 int main (){
 	int array [10] = {-5, 1, 9, 10, 11, 12, 17, 120, 150, 1500};
 	int a_buscar = 120;
 	int encontrado = busqueda_binaria(array, 10, a_buscar);

	 return 0;
 	}

