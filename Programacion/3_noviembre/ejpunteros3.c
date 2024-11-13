#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){

int arr[5] = {10, 20, 30, 40, 50}; // Equivalente a int *arr = {..
	int *p;
	p = arr + 5; //Sumamos 5 por com esta definido el bucle for(int i = 5;
	//p = &arr[5];


	for (int i = 5; i > 0; i--) {
	printf("Elemento %d: %d (en la dirección %p)\n", i, *(p - i));

	}
return 0;
}
