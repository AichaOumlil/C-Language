#include <stdio.h>
#include <stdlib.h>
float min,max;

void signe(float a,float b ){
    if (a*b>0 ||a*b<0);
    printf("%f et %f sont de meme signe",a,b);
    }
    void min_(float x,float y){
    if(x<y)
    min =x;
    else
    min= y;
    printf("Le minimum est%f:",min);
    return 3;
    }
void max_(float w,float v ){
    if(w<v)
    max=v;
    else max=w;
    printf("Le maximum est%f:",max);
    return 1;
}
int main()
{
    int A,B ;
    printf("\nVeuillez entrer A et B:");
    scanf("%d%d",&A,&B);
    signe(A,B);
    min_(A,B);
    max_(A,B);


    return 0;
}
