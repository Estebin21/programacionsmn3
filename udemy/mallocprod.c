#include <stdio.h>
#include <stdlib.h>


struct producto{
int codigo;
char descripcion[50];
float precio;
};
int main(){
    struct producto *prod;
    prod=malloc(sizeof(struct producto));
    printf("ingrese el codigo\n");
    scanf("%d",&prod->codigo);
    printf("ingrese descripcion\n");
    scanf("%s",prod->descripcion);
    printf("ingrese precio\n");
    scanf("%f",&prod->precio);
    printf("Codigo del articulo:%d\n",prod->codigo);
    printf("descripciono:%s\n",prod->descripcion);
    printf("precio:%.2f\n",prod->precio);
   free(prod);
   prod=NULL;
}
