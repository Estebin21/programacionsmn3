#include <stdio.h>
#include <string.h>
#include "funciones.h"

// Funcion para ingresar los datos de una mascota
void ingresarMascota(int *id, char *nombre, char *raza, int *edad, int *tipo, char *dueno) {
    printf("Ingrese el ID de la mascota: ");
    scanf("%d", id);

    printf("Ingrese el tipo de mascota (1 para perro, 2 para gato): ");
    scanf("%d", tipo);

    printf("Ingrese el nombre de la mascota: ");
    scanf("%s", nombre);

    printf("Ingrese la raza de la mascota: ");
    scanf("%s", raza);

    printf("Ingrese la edad de la mascota (en meses): ");
    scanf("%d", edad);

    printf("Ingrese el nombre y apellido del dueno: ");
    scanf(" %[^\n]s", dueno);
}

// Funcion para ingresar los datos de un servicio
void ingresarServicio(int *idServicio, char *descripcion, float *costo) {
    do {
        printf("Ingrese el ID del servicio (1 para corte de pelo, 2 para desparasitacion): ");
        scanf("%d", idServicio);
    } while (*idServicio != 1 && *idServicio != 2);

    printf("Ingrese la descripcion del servicio (maximo 100 caracteres): ");
    scanf(" %[^\n]s", descripcion);

    switch (*idServicio) {
        case 1:
            *costo = 15.0;
            break;
        case 2:
            *costo = 35.0;
            break;
    }
}

// Funcion para imprimir la factura
void imprimirFactura(int id, char *nombre, char *raza, int edad, char *dueno, int *idsServicios, char descripciones[][MAX_DESCRIPCION], float *costos, int numServicios) {
    printf("********** FACTURA **********\n");
    printf("Datos de la mascota:\n");
    printf("ID: %d\n", id);
    printf("Nombre: %s\n", nombre);
    printf("Raza: %s\n", raza);
    printf("Edad: %d meses\n", edad);
    printf("Dueno: %s\n", dueno);
    printf("Servicios:\n");

    for (int i = 0; i < numServicios; i++) {
        printf("- Servicio %d:\n", i + 1);
        printf("  Descripcion: %s\n", descripciones[i]);
        printf("  Total del servicio: %.2f\n", costos[i]);
        printf("\n");
    }

    float total = 0.0;
    for (int i = 0; i < numServicios; i++) {
        total += costos[i];
    }

    printf("Total final: %.2f\n", total);
    printf("****************************\n");
}
