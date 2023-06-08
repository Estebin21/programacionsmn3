#include <stdio.h>
#include <math.h>
#include "funciones.h"

int ingreseComponente(char coordenada, int index) {
    int componente;
    printf("Ingrese la componente %c del punto %d: ", coordenada, index + 1);
    scanf("%d", &componente);
    return componente;
}

float calcularVolumen(int cono[][3]) {
    float PI=3.14;
    float radio = cono[0][0];
    float altura = cono[1][0];
    float volumen = (1.0 / 3.0) *PI * pow(radio, 2) * altura;
    return volumen;
}

void imprimirVolumenArea(float volumen1, float volumen2, int cono1[][3], int cono2[][3]) {
    printf("El volumen del cono 1 es: %.2f\n", volumen1);
    printf("El volumen del cono 2 es: %.2f\n", volumen2);

}
