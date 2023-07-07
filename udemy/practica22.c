#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main()
{
    struct hora_entrada{
    int hora;
    int minuto;
    };
    struct entrada{
        struct hora_entrada hora1;
        int asistentes;
        float precio;
    };
    struct entrada e1;
    char continuar='s';
    while(continuar=='s'){
       printf("Introduce la hora de entrada\n");
       scanf("%d",&e1.hora1.hora);
       printf("Introduce la minuto de entrada\n");
       scanf("%d",&e1.hora1.minuto);
       printf("Introduce numero asistentes\n");
       scanf("%d",&e1.asistentes);
       int total=0;
       for ( int i = 0; i< e1.asistentes; i++){
        int edad;
       printf("Introduce edad del asistente %d\n",(i+1));
       scanf("%d",&edad);
       if(edad<6){
          total=total+0;
       }
       else if(edad>=6 && edad<=15){
        total=total+5;
       }
        else if((edad>=16&&edad<=26)||edad>65){
        total=total+8;
       }
        else {
        total=total+10;
       }
    }
    if(e1.asistentes>=5){
        e1.precio=total-total*0.1;
    }
        else{
            e1.precio=total;
        }
        printf("Hora de estrada grupo %d\n",e1.hora1.hora);
        printf("minuto de estrada del grupo%d\n",e1.hora1.minuto);
        printf("Precio de las entradas del grupo%.2f\n",e1.precio);
        printf("¿Quiere continuar?(s/n)\n");
        scanf("%c",&continuar);
        while(continuar=='\n'){
            scanf("%c",&continuar);
        }
    }
    printf("Hasta la proxima\n");
    }
