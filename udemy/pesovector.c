#include <stdio.h>
#include <stdlib.h>
int main()
{
    float suma=0;
    float pesos[5];
for(int i=0;i<5;i++){
printf ("Introduce un peso para alamacenarlo\n");
scanf("%f",&pesos[i]);
suma=suma+pesos[i];
}
float promedio=suma/5;
int cont_mayor_igual=0;
int cont_menor=0;

for(int i=0;i<5;i++){
    if(pesos[i]>=promedio){
    cont_mayor_igual++;
}
    else{
    cont_menor++;
    }
}
printf ("El promedio de pesos es %.2f\n",promedio);
printf("Numero pesos mayores o iguales que el promedio %d,Numero menores que el promedio es %d",cont_mayor_igual,cont_menor);
}