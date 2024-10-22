#include<stdio.h>
#include<stdlib.h>
#include<math.h>

	int calcularRaiz(){
		int valor; 
		double raiz;
		
	//PARTE DE CÁLCULO DE UNA RAÍZ CUADRADA
		printf("Introduzca un número para calcular su raíz");

		scanf("%d", &valor);
		raiz = sqrt (valor);
		printf("La raíz cuadrada de %d es %lf\n", valor, raiz);
}
	int calcularArea(){
		double resultado_area;
		int valor;
		double radio, area;

	//PARTE DE CÁLCULO DEL ÁREA DEL CÍRCULO
		printf("Introduzca el radio del círculo para calcular su área\n");
		scanf("%lf", &radio);
		area = radio * radio * M_PI;
		printf("El área del círculo es %lf\n", area);
}


	
	
	int main(){

		calcularRaiz();
		calcularArea();

		return 0;


}


