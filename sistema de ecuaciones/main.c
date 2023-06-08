#include <stdio.h>
#include "funciones.h"

int main() {
    float matrix[3][3];
    float vector[3];

    printf("Ingrese los elementos de la matriz 3x3:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%f", &matrix[i][j]);
        }
    }

    printf("Ingrese los elementos del vector de términos independientes:\n");
    for (int i = 0; i < 3; i++) {
        scanf("%f", &vector[i]);
    }

    resolverSistema(matrix, vector);

    return 0;
}
