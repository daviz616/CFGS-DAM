#include<stdio.h>
#include<stdlib.h>

/*
 * Autor: David Castejón García 5D DAM
 * Fecha: 
 * Título:
*/
 
/*
 * if (pregunta de si o no){
 * cödigo de respuesta afirmativa
 * }
 * */

/* Los operadores de comparación son:
 * 	> Mayor
 *	> Menor 
 * 	<= menor o igual que 
 * 	>= mayor o igual que 
 * 	== igual
 * 	!= distinto
 */

 int main (){
	 int condicion; // El = es un operador de asignación

 	scanf("%d", &condicion);

	 if (condicion == 0){
		//== Es el operador de comparación
		printf("Condición vale 0\n");
	} 
	
	if (condicion == 1){
		printf("Condición vale 1\n");
		} 
	if (condicion !=0 && condicion !=1){
			printf("Condicion no vale ni 0 ni 1\n");
	}
	return 0;
}
