#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
	double resultado_raiz;
	int valor;
	double radio, area;

	//PARTE DE CÁLCULO DE UNA RAÍZ CUADRADA
	printf ("Introduce un número para calcular su raíz\n");
	
	scanf("%d", &valor);
	resultado_raiz = sqrt(valor);
	printf("La raíz cuadrada de %d es %lf\n", valor, resultado_raiz);
	
	
	printf("Introduzca el radio del círculo para calcular su área\n");
	scanf("%lf", &radio);
	area = radio * radio * M_PI; 
	//M_PI está definido en math.h. Es una característica constante con el valor de pi.
	printf("El área del círculo es %lf\n",area);

	return 0;

}

