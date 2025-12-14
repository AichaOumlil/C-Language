#include <stdio.h>
#include <stdlib.h>

int main()
{
    int val,i,max,min,pmax,pmin;
    pmax=pmin=0;
    printf("Entrer le nombre 1:");
    scanf("%d",val);
    max=min=val;
    for(i=2;i<=20;i++){
        if(max<val){max=val;pmax=i-1;}
        if(min<val){min=val;pmin=i-1;}
         printf("Entrer le nombre %d:",i);
         scanf("%d",&val);

    }
     printf(" pmax=%d \n, min=%d\n , max=%d\n , pmin=%d\n",pmax,min,max,pmin);
    return 0;
}
