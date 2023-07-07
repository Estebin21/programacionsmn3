#include <stdio.h>
#include <stdlib.h>
int main()
	{
	int suma=0,contador=0,numero=-1;
	
	while (numero != 0){
	printf ("Introduce un numero\n");
	scanf("%d",&numero);
	contador++;
	suma+=numero;
    }
float promedio = suma/contador;
printf ("La suma de todos los numeros es %d y el promedio es %.2f",suma,promedio);
    }