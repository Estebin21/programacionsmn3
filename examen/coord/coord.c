#include <stdio.h>
#include "coord.h"

float coordenadas(float x1, float x2, float x3, 
                 float y, float y2, float y3)
{
    

printf("Ingrese la primera coordenada en X:\n");
scanf("%f",&x1);

printf("Ingrese la primera coordenada en Y:\n");
scanf("%f",&y);

printf("Ingrese la segunda coordenada en X:\n");
scanf("%f",&x2);

printf("Ingrese la segunda coordenada en Y:\n");
scanf("%f",&y2);

printf("Ingrese la tercera coordenada en X:\n");
scanf("%f",&x3);

printf("Ingrese la tercera coordenada en Y:\n");
scanf("%f",&y3); 
return x1, x2, x3, y, y2, y3;
}
