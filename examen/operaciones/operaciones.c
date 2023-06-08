#include<stdio.h>
#include <math.h>
#include"operaciones.h"

float triangulorectangulo(float x1, float x2, float x3,
                          float y, float y2, float y3,
                          float gx, float gy, float d,
                          float h, float b, float at)
{
    if (x1==x3 && y==y2)
{
    gx= x1+x1+x3/3;
    gy= y+y2+y3/3;

    d= sqrt((pow(x1-x2,2)) + (pow(y+y2,2)));

    h= sqrt((pow(gx-x1,2)) + (pow(gy-gy,2)));

    b= sqrt((pow(x3-x1,2)) + (pow(y3+y,2)));

    at= b*h/2;


}
return x1, x2, x3, y, y2, y3 ,gx, gy, d, h, b, at;
}