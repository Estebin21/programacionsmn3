#include <stdio.h>
#include "funciones.h"
#include <math.h>

float ingresarCoordenadaX(){
    float x1;
    printf("\nIngrese una coordenada en x");
    scanf("%f", &x1);
    
    return x1;
}

float ingresarCoordenadaY(){
    float y1;
    printf("\nIngrese una coordenada en y");
    scanf("%f", &y1);
    return y1;
}



float calcularDistancia(float x1, float y1, float x2, float y2){
    float a;

    a=sqrt(pow((x1-x2),2)+pow((y1-y2),2));
return a;
}




float areaTrianguloInterno( float a, float b, float c){
    float h1, h2, n , n1, m, m1, area;
    
    
    h1=(b*c)/a;
    n1=pow(h1,2)/c;
    n=pow(b,2)/a;
    m=pow(c,2)/a;
    m1=pow(a,2)/c;
    h2=sqrt(pow((h1),2)-pow((n1),2));
    area=(n1*h2)/2; 
    if (pow(a,2)==pow(b,2)+pow(c,2)){

        return area;
    }else
    {
        printf("El triangulo no es rectangulo\n");
        
    }
    
}

