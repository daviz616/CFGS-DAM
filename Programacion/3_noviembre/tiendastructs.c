#include <stdio.h>
#include<string.h>
#include <stdlib.h>

#define MAX_ITEMS 100

typedef struct {
	char nombre[50];
	char dirección[50];
	char teléfono[14];

}Proveedor;

typedef struct {
        char nombre[30];
        char precio[6];
        Proveedor proveedor;

}Articulo;

typedef struct {
        Articulo articulos[MAX_ITEMS];
        int cantidades[MAX_ITEMS];
        int totalArticulos;

}Inventario;



int main() {

	Inventario miInventario; //DECLARACIÓN

	//Esta forma de inicializar el struct solo es válida a la hora de declarar.
	Artículo articulo= {"Nombre", 10,{"Nombre_proveedor", "Dirección_proveedor", "Teléfono_proveedor"}};
       //Aquí miInventario está declarada por ello no podemos inicializarla haciendo: mi Inventario{}.	
	miInventario.artículos[0] = articulo;
	miInventario.cantidades[0] = 10;//INICIALIZACIÓN (La inicialización de una variable con llave solo es válida en la declaración de esa variable; solo pasa con structs y arrays ya que se inicializan con llaves)
	
	printf("Nombre artículo: %s\n", 
		miInventario.articulos[0].nombre;
		);
	printf("Nombre del proveedor: %s\n", 
		miInventario.articulos[0].Proveedor.nombre
		);
	pritnf("Cnatidad: %d\n", 
			miInventario.cantidades[0]
	      );

	strcpy(Proveedor.nombre, "Toyota");
	strcpy(Proveedor.dirección, "Corolla");
	strcpy(Proveedor.teléfono, "Toyota");
	strcpy(Articulo.nombre, "Corolla");
	strcpy(Articulo.precio, "Toyota");
    return 0;
}
