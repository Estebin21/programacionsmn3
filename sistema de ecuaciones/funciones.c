#include <stdio.h>
#include "funciones.h"

float calcularDeterminante(float matrix[3][3]) {
    float det;

    det = matrix[0][0] * (matrix[1][1] * matrix[2][2] - matrix[1][2] * matrix[2][1]) -
          matrix[0][1] * (matrix[1][0] * matrix[2][2] - matrix[1][2] * matrix[2][0]) +
          matrix[0][2] * (matrix[1][0] * matrix[2][1] - matrix[1][1] * matrix[2][0]);

    return det;
}

void resolverSistema(float matrix[3][3], float vector[3]) {
    float det = calcularDeterminante(matrix);

    if (det == 0) {
        printf("El sistema no tiene solución única.\n");
        return;
    }

    float matrix_x[3][3], matrix_y[3][3], matrix_z[3][3];
    float det_x, det_y, det_z;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (j == 0) {
                matrix_x[i][j] = vector[i];
            } else {
                matrix_x[i][j] = matrix[i][j];
            }

            if (j == 1) {
                matrix_y[i][j] = vector[i];
            } else {
                matrix_y[i][j] = matrix[i][j];
            }

            if (j == 2) {
                matrix_z[i][j] = vector[i];
            } else {
                matrix_z[i][j] = matrix[i][j];
            }
        }
    }

    det_x = calcularDeterminante(matrix_x);
    det_y = calcularDeterminante(matrix_y);
    det_z = calcularDeterminante(matrix_z);

    float x, y, z;
    x = det_x / det;
    y = det_y / det;
    z = det_z / det;

    printf("Solución:\n");
    printf("x = %f\n", x);
    printf("y = %f\n", y);
    printf("z = %f\n", z);
}
