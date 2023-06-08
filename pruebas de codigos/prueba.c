#include <stdio.h>
#include <math.h>

float pa, at, h, b, d, gx, gy, x1, x2, x3, z1, y2, y3;

int main(int argc, char *argv[]){

printf("Ingrese la primera coordenada en X:\n");
scanf("%f",&x1);

printf("Ingrese la primera coordenada en Y:\n");
scanf("%f",&z1);

printf("Ingrese la segunda coordenada en X:\n");
scanf("%f",&x2);

printf("Ingrese la segunda coordenada en Y:\n");
scanf("%f",&y2);

printf("Ingrese la tercera coordenada en X:\n");
scanf("%f",&x3);

printf("Ingrese la tercera coordenada en Y:\n");
scanf("%f",&y3);


if (x1==x3 && z1==y2)
{
    gx= x1+x1+x3/3;
    gy= z1+y2+y3/3;

    d= sqrt((pow(x1-x2,2)) + (pow(z1+y2,2)));

    h= sqrt((pow(gx-x1,2)) + (pow(gy-gy,2)));

    b= sqrt((pow(x3-x1,2)) + (pow(y3+z1,2)));

    at= b*h/2;

    printf("La distancia del triangulo es: %.2f \n",d);
    printf("La base del triangulo es: %.2f \n",b);
    printf("La altura del triangulo es: %.2f \n",h);
    printf("El area total del triangulo es: %.2f \n",at);

}else
{
    printf("No es un triangulo rectangulo");
}

}

