#include <stdio.h>
#include <math.h>

float calcularDistancia(float x1, float y1, float x2, float y2) {
    float distancia = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
    return distancia;
}

float calcularPerimetro(float lado1, float lado2, float lado3) {
    float perimetro = lado1 + lado2 + lado3;
    return perimetro;
}

float calcularArea(float lado1, float lado2, float lado3) {
    float semiperimetro = (lado1 + lado2 + lado3) / 2;
    float area = sqrt(semiperimetro * (semiperimetro - lado1) * (semiperimetro - lado2) * (semiperimetro - lado3));
    return area;
}

int main() {

    float puntos[3][2] = {{0, 0}, {0, 3}, {3, 0}};

    float lado1 = calcularDistancia(puntos[0][0], puntos[0][1], puntos[1][0], puntos[1][1]);
    float lado2 = calcularDistancia(puntos[1][0], puntos[1][1], puntos[2][0], puntos[2][1]);
    float lado3 = calcularDistancia(puntos[2][0], puntos[2][1], puntos[0][0], puntos[0][1]);

    float perimetro = calcularPerimetro(lado1, lado2, lado3);

    float area = calcularArea(lado1, lado2, lado3);

    printf("Perímetro del triángulo: %.2f\n", perimetro);
    printf("Área del triángulo: %.2f\n", area);

    return 0;
}