#include<stdio.h>
#include<string.h>
#include<stdlib.h>



int main(){

	float n = 3.5;
	float *p;
	p = &n;

	printf("Valor de la variable: %f\n", n);
	printf("Dirección de la variable: %p\n", &n);
	printf("Valor apuntado por p: %f\n", *p);

	return 0;
}
