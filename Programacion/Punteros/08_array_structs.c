#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
*
*	Autor: David Castejón García
*/

#define MAX_NOMBRE 20
#define MAX_ESTUDIANTES 20
//#define MAX_BUFFER 1000

typedef struct{
	char nombre[MAX_NOMBRE];
	int edad;
	float nota;
} Estudiante;

/** Esta función así da un warning porque la variable retval se crea aquí
 * y solo existe en el ámbito de la función.
 *
 * Las soluciones serían:
 * 	devolver valor como argumento (como hacen todas las funciones de string.h
 *	definir dinámicamente la variable (incómodo porque luego habrá que liberarla)*/
 

/*
char * toString(Estudiante estu){
	char retval[MAX_BUFFER];
	snprintf(retval,MAX_BUFFER*sizeof(char),"Estudiante %s tiene %d años y ha sacado un %f",estu.nombre,estu.edad,estu.nota);
	return retval;
}
*/

//Estudiante inicializar(char * nombre, int edad, float nota){
	//Estudiante estudiante_nuevo; //= malloc; //memoria dinámica, es válida pero no sabemos usarla todavía. Se libera con el free
	//Inicializo el estudiante. e.edad = edad; e... 

	//return estudiante_nuevo;
//}

//Crea una función que cree una cadena de texto con la información del estudiante (Puedes empezar creando una función que imprima por pantalla la info de un estudiante).
void inicializar(Estudiante * estudiante_a_rellenar, char * nombre, int edad, float nota){
	//estudiante_a_rellenar.edad = edad; Esto no compila porque estudiante_a_rellenar es un puntero y no un estudiante. Hbría que hacer (*estudiante_a_rellenar).edad, es decir, acceder al contenido del puntero para poder así acceder al campo "edad" del Estudiante.
	//En lugar de hacer esto, lo que C permite es utilizar el operador "->".
	//estudiante_a_relllenar.nota = nota;
	//estudiante_a_rellenar.nombre = nombre; No funciona porque no se completa la dirección de memoria como debería
	strcpy(estudiante_a_rellenar->nombre,nombre);
	estudiante_a_rellenar->nota = nota;
	estudiante_a_rellenar->edad = edad;
}

void cumpleanios(Estudiante * cumpleanero){

}

int main() {
	Estudiante listado[MAX_ESTUDIANTES];//Aqui se reserva la memoria para los estudiantes. 500 bytes.
	int num_estudiantes;
	char nombre[MAX_NOMBRE];
	float nota;
	int edad;
	//char buffer[MAX_BUFFER];
	
	printf("%p\n", listado);
	printf("Sizeof listado: %lu\n", sizeof(listado));//560 porque...
	printf("Sizeof estudiante: %lu\n",sizeof(Estudiante));// porque ...

	printf("¿Cuántos estudiantes desea inicializar? ");
	scanf("%d",&num_estudiantes);
	for (int i = 0; i<num_estudiantes; i++){
		printf("Inicializando estudiante %d:\n",i);
		
		printf("\tIntroduzca el nombre: ");
		scanf("%s",nombre);
		printf("\tIntroduzca la edad: ");
		scanf("%d",&edad);
		printf("\tIntroduzca la nota: ");
		scanf("%f",&nota);
		//también se puede haciendo: inicializar(listado+i, nombre, edad, nota);
		inicializar(&listado[i],nombre,edad,nota);//no hace falta hacer un bucle lo único que necesitas es inicializarla con la sintaxis correcta de punteros
	}
	
	//for (int i = 0; i<num; i++){
   	//	printf("%s\n\n",toString(listado[i])); 
	//}
	printf("Edad antigua de %s: %d\n", listado[0].nombre, listado->edad);
	cumpleanios(&listado[0]);
	printf("Edad nueva: %d\n",listado[0].edad);// también es válido: ,(*listado).edad);listado->edad	

    return 0;
}
