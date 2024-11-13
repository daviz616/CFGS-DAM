#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//EJEMPLO PASO POR VALOR(LA FUNCIÓN DEVUELVE UN 10 PORQUE EN EL MAIN ASIGNAMOS EL VALOR Y NO LA VARIABLE COMPLETA
void incrementar(int n){
	printf("Valor recibido: %d\n",n);
	n++;
	printf("Valor incrrementado en la función: %d\n", n);

int main(){
	int valor = 10;
	incrementar(valor);
	printf("Valor en el main: %d\n", valor);
	return 0;
}
