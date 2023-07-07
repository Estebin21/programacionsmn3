#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main()
{
    struct cilindro{
        float diametro;
        float carrera;
     };
    struct motor{
        int identificador;
        struct cilindro cilindro1;
        int num_cilindro;
        float cilindrada
     };
    struct motor motor1;
    printf("Introduce el identificador\n");
    scanf("%d",&motor1.identificador);
    printf("Introducir el diametro del cilindro(mm):\n");
    scanf("%f",&motor1.cilindro1.diametro);
    printf("Introducir la carrera del cilindro(mm):\n");
    scanf("%f",&motor1.cilindro1.carrera);
    printf("Introducir numero de cilindro:\n");
    scanf("%d",&motor1.num_cilindro);
     
     motor1.cilindrada=(motor1.num_cilindro*(motor1.cilindro1.carrera/10)*M_PI*pow((motor1.cilindro1.diametro/10),2))/4;
     printf("Identificado:%d\n",motor1.identificador);
     printf("diametro(mm):%.2f\n",motor1.cilindro1.diametro);
     printf("carrera(mm):%.2f\n",motor1.cilindro1.carrera);
     printf("Numero de cilindro:%d\n",motor1.num_cilindro);
     printf("cilindrada:%.2f\n",motor1.cilindrada);
}
