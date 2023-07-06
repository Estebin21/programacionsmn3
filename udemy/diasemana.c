#include <stdio.h>
#include <stdlib.h>
int main()
{
    int dia;
    printf("Introduce el dia(1-7)\n");
    scanf("%d",&dia);
    switch(dia){
        case(1):
        printf("lunes");
        break;
        case(2):
        printf("martes");
        break;
        case(3):
        printf("miercoles");
        break;
        case(4):
        printf("jueves");
        break;
        case(5):
        printf("viernes");
        break;
        case(6):
        printf("sabado");
        break;
        case(7):
        printf("domingo");
        break;
        default:
        printf("Error, no valido");
        break;
    }
    }