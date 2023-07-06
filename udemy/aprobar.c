#include <stdio.h>
#include <stdlib.h>

int main()
	{
	int n, contador_aprobados=0,contador_suspensos=0;
	float nota;
	
	printf("Introduce el número de alumnos\n");
	scanf("%d",&n);
	
 for (int i=1;i<=n;i++){
    printf("Introduce la nota del alumno %d\n",i);
    scanf("%f",&nota);
 
    
 if (nota >= 5){
 contador_aprobados++;
 }
 else{
 contador_suspensos++;
 }
    }   
 printf ("El numero de alumnos aprobados es: %d y el de alumnos suspensos es : %d\n",contador_aprobados,contador_suspensos);
}