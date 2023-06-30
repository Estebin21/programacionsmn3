#include <stdio.h>
#include <string.h> // Agregar esta línea para incluir la biblioteca string.h
#include "funciones.h"

int main() {
    int opcion;
    int id, edad, tipo;
    char nombre[50];
    char raza[50];
    char dueno[100];
    int idsServicios[10];
    char descripciones[10][MAX_DESCRIPCION];
    float costos[10];
    int numServicios = 0;

    do {
        printf("****** MENU ******\n");
        printf("1. Ingresar mascota\n");
        printf("2. Ingresar servicio\n");
        printf("3. Imprimir factura\n");
        printf("4. Salir\n");
        printf("Ingrese una opcion: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                ingresarMascota(&id, nombre, raza, &edad, &tipo, dueno);
                break;
            case 2:
                if (numServicios < 10) {
                    int idServicio;
                    float costo;
                    char descripcion[MAX_DESCRIPCION];

                    ingresarServicio(&idServicio, descripcion, &costo);

                    idsServicios[numServicios] = idServicio;
                    strcpy(descripciones[numServicios], descripcion);
                    costos[numServicios] = costo;
                    numServicios++;
                } else {
                    printf("No se pueden ingresar mas servicios.\n");
                }
                break;
            case 3:
                imprimirFactura(id, nombre, raza, edad, dueno, idsServicios, descripciones, costos, numServicios);
                break;
            case 4:
                printf("Saliendo del programa...\n");
                break;
            default:
                printf("Opcion invalida. Intente nuevamente.\n");
        }

        printf("\n");
    } while (opcion != 4);

    return 0;
}
