#include <stdio.h>
#include <stdlib.h>


void multiplica_vector(int *vector,int nElen,int numero);
int main()
{
int vector[10]={1,2,3,4,5,6,7,8,9,10};
multiplica_vector(&vector[0],10,3);
for (int i=0; i<10;i++){
printf("%d ", vector[i]);
}
}
void multiplica_vector(int *vector, int nElen, int numero){
    for (int i=0; i<nElen;i++){
    *(vector+i)=*(vector+i)*numero;
    }
}
