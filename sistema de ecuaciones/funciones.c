#include <stdio.h>
#include "funciones.h"

float calcularDeterminante(float matriz[3][3]) {
    float det;

    det = matriz[0][0] * (matriz[1][1] * matriz[2][2] - matriz[1][2] * matriz[2][1]) -
          matriz[0][1] * (matriz[1][0] * matriz[2][2] - matriz[1][2] * matriz[2][0]) +
          matriz[0][2] * (matriz[1][0] * matriz[2][1] - matriz[1][1] * matriz[2][0]);

    return det;
}

void resolverSistema(float matriz[3][3], float vector[3]) {
    float det = calcularDeterminante(matriz);

    if (det == 0) {
        printf("El sistema no tiene solución única.\n");
        return;
    }

    float matriz_x[3][3], matriz_y[3][3], matriz_z[3][3];
    float det_x, det_y, det_z;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (j == 0) {
                matriz_x[i][j] = vector[i];
            } else {
                matriz_x[i][j] = matriz[i][j];
            }

            if (j == 1) {
                matriz_y[i][j] = vector[i];
            } else {
                matriz_y[i][j] = matriz[i][j];
            }

            if (j == 2) {
                matriz_z[i][j] = vector[i];
            } else {
                matriz_z[i][j] = matriz[i][j];
            }
        }
    }

    det_x = calcularDeterminante(matriz_x);
    det_y = calcularDeterminante(matriz_y);
    det_z = calcularDeterminante(matriz_z);

    float x, y, z;
    x = det_x / det;
    y = det_y / det;
    z = det_z / det;

    printf("Solución:\n");
    printf("x = %f\n", x);
    printf("y = %f\n", y);
    printf("z = %f\n", z);
}
