#include <stdio.h>
#include <stdlib.h>

int main (){
    int w=9;
    int x=3;
    int y=7;
    int z=-2;
    printf("true && true:%d\n",x<y&&w>z);
    printf("true^true:%d\n",x>=w^z==y);
    printf("true||true:%d\n",y<=x || x!=w);
    printf("true^true:%d\n",w==9^x==3);
    printf("true && true:%d\n",y>z && z<x);
    printf("not not not:%d\n",!!!w!=9);
return 0;
}