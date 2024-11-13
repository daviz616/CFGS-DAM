#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//EJEMPLO PASO POR REFERENCIA

void incrementar(int *n){
	printf("Valor recibido: %d\n", *n);
	//(*n)++
	*n = (*n) + 1;//En este caso no haría falta el parentesis peero puede venir vien para indicar que en caso de necesitar varias operaciones, el orden jerarquico habría que aclararlo.

	printf("Valor incrrementado en la función: %d\n", *n);

int main(){
	int valor = 10;
	incrementar(&valor);//El cambio de memoria es para siempre
	printf("Valor en el main: %d\n", valor);
	return 0;
}
