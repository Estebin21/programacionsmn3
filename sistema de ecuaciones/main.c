#include <stdio.h>
#include "funciones.h"

int main() {
    float matriz[3][3];
    float vector[3];

    printf("Ingrese los elementos de la matriz 3x3:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("ingresa un termino:\n");
            scanf("%f", &matriz[i][j]);
        }
    }

    printf("Ingrese los elementos del vector de términos independientes:\n");
    for (int i = 0; i < 3; i++) {
        printf("ingresa un termino del vector:\n");
        scanf("%f", &vector[i]);
    }

    resolverSistema(matriz, vector);

    return 0;
}
