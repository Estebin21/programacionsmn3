#include <stdio.h>
#include <stdlib.h>
int main()
{
    int info[3][4]={{1,120,150,220},{2,230,140,230},{3,100,120,200}};
    int sumatempbaja=0,sumatempmedia=0,sumatempalta=0;
    for(int i=0;i<3;i++){
        for (int j=0;j<4;j++){
            if (j==1){
            sumatempbaja=sumatempbaja+info[i][j];
          }
          if(j==2){
            sumatempmedia=sumatempmedia+info[i][j];
          }
          if(j==3){
            sumatempalta=sumatempalta+info[i][j];
          }
        }
    }
    float promtempbaja=sumatempbaja/3;
    float promtempmedia=sumatempmedia/3;
    float promtempalta=sumatempalta/3;
    printf("Promedio\n Temporada baja:%.2f\nTemporada media:%.2f\nTemporada alta:%2.f",promtempbaja,promtempmedia,promtempalta);
    }