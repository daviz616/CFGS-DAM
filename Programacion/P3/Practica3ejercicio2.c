#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

/*   Autor: David Castejón García
 *   Fecha:
 *   Título:
 *
 *
 *   He usado la funcion toupper, sacada del pdf que esta arriba del todo en el notion, las últimas hojas del pdf tienn una tabla con esa información.
*/



	char capitalizar(char minus){
		char mayuscula = toupper(minus);
		printf("La letra %c se ven en mayúscula así: %c\n", minus, mayuscula);
		return mayuscula;
}
	int main (){
		char letra_minuscula;
		printf("Escribe una letra en minúscula: ");
		scanf(" %c", &letra_minuscula);
		capitalizar(letra_minuscula);
		
		return 0;
}

