#include <stdio.h>
#include "funciones.h"

int ingreseCedula() {
    int cedula;
    printf("Ingrese el número de cédula: ");
    scanf("%d", &cedula);
    return cedula;
}

int obtenerPosicionContacto(int cedula[], int cedulaBuscar) {
    int indice = -1;
    for (int i = 0; i < 5; i++) {
        if (cedula[i] == cedulaBuscar) {
            indice = i;
            break;
        }
    }
    return indice;
}

void imprimirContactos(char nombre[][50], int telefonos[][2], int indice) {
    if (indice != -1) {
        printf("Contacto encontrado:\n");
        printf("Nombre: %s\n", nombre[indice]);

        printf("Teléfonos:\n");
        for (int i = 0; i < 10; i++) {
            if (telefonos[i][0] == indice) {
                printf("Teléfono: %d\n", telefonos[i][1]);
            }
        }
    } else {
        printf("Contacto no encontrado.\n");
    }
}

void imprimirDirecciones(char direcciones[][2][50], int indice) {
    if (indice != -1) {
        printf("Direcciones:\n");
        for (int i = 0; i < 10; i++) {
            if (direcciones[i][0][0] - '0' == indice) {
                printf("Dirección: %s\n", direcciones[i][1]);
            }
        }
    } else {
        printf("Contacto no encontrado.\n");
    }
}
