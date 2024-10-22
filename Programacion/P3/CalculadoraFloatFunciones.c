#include <stdio.h>
#include <stdlib.h>

/*       Autor:David Castejón García
 *       Fecha:1/10/24
 *       Título:P´ractica3 Dam
 */


	float suma(float num1, float num2){
		 float resultado_suma = num1 + num2;
		 printf("El resultado de la suma es=%f\n", resultado_suma);
	 	return resultado_suma;
 }
	float resta(float num1, float num2){
        	float resultado_resta = num1 - num2;
        	printf("El resultado de la resta es=%f\n", resultado_resta);
        	return resultado_resta;
}
	float multiplicacion(float num1, float num2){
        	float resultado_multiplicacion = num1 * num2;
        	printf("El resultado de la multiplicación es=%f\n", resultado_multiplicacion);
        	return resultado_multiplicacion;
}
	float division(float num1, float num2){
        	float resultado_division = num1 / num2;
        	printf("El resultado de la división es=%f\n", resultado_division);
        	return resultado_division;
}
	int main (){
        	float n1, n2;
		printf("introduce un entero:\n");
		scanf("%f",&n1);
		printf("introduce un entero:\n");
		scanf("%f",&n2);

	
		suma(n1, n2);
		resta(n1, n2);
		multiplicacion(n1, n2);
		division(n1, n2);

	return 0;
}
