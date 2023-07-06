#include <stdio.h>
#include <stdlib.h>

int main()
{
float base,altura;
	printf("introduzca la base del rectangulo\n");
	scanf("%f",&base);
	printf("introduzca la altura del rectangulo\n");
	scanf("%f",&altura);
	float area=base*altura;
	printf("El area del rectángulo de base %.2f y altura %.2f es:%.2f",base,altura,area);
}