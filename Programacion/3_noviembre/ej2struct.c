#include <stdio.h>
#include<string.h>
#include <stdlib.h>

typedef struct {
	char marca[10];
	char modelo[10];
	int anio;
	long kilometraje;
}Vehiculo;

int main() {

    Vehiculo miVehiculo;

    //strcpy(destino, origen);
    //strcpy(destino, origen, n); Copia hasta 'n' caracteres de 'origen'

    strcpy(miVehiculo.marca, "Toyota");
    strcpy(miVehiculo.modelo, "Corolla");
    (miVehiculo.anio = 2021);
    (miVehiculo.kilometraje = 15000);

    printf("Marca: %s\n", miVehiculo.marca);
    printf("Modelo: %s\n", miVehiculo.modelo);
    printf("Año: %d\n", miVehiculo.anio);
    printf("Kilometraje: %ld km\n", miVehiculo.kilometraje);

    return 0;
}
