#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,i,s;
    do{
    printf("Veuillez entrer un nombre: ");
    scanf("%d",&x);} while (x<0);
    s=0;
    for (i=0;i<=x;i++)
    {
        s+=i;
    }
    for (i=1;i<x;++i)
    printf("%d+",i);
    printf("%d=%d",x,s);
    return 0;
}
