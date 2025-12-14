#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,s,i;
        do {printf("Veuillez entrer un nbr entre supirieur a 1:\n");
        scanf("%d",&n);
    } while (n<=1);
    s=0;
        for(i=1;i<=n;i++){
    s=i+s;}
        printf("la somme et%d:",s);


    return 0;
}

