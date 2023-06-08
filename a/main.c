#include <stdio.h>
#include "funciones/funciones.h"

int main (int argc, char *argv[]) {
    float x1 = ingresarCoordenadaX();
    float y1 = ingresarCoordenadaY();
    float x2 = ingresarCoordenadaX();
    float y2 = ingresarCoordenadaY();
    float x3 = ingresarCoordenadaX();
    float y3 = ingresarCoordenadaY();

    float a = calcularDistancia(x1,y1,x2,y2);
    float b = calcularDistancia(x1,y1,x3,y3);
    float c = calcularDistancia(x2,y2,x3,y3);

    float area = areaTrianguloInterno(a,b,c);

    printf("El área del triángulo interno es: %f",area);

    return 0;
}