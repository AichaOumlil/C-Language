#include <stdio.h>
#include <stdlib.h>

int main()
{
    int s,n,i;
    s=0;
    for(i=0;i<=8;i++){
    printf("\nVeuillez entrer un nombre positif %d:",i);
    scanf("%d",&n);
     if(n<0)
        break;
    s=s+n;
    }


    printf("La somme est : %.0d",s);
    return 0;
}
