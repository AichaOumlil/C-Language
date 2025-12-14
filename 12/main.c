#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,m;
    printf("Veuillez entrer un nombre:");
    scanf("%d",&n);
    for (i=1;i<=10;i++){
        m=i*n;
        printf("%d*%d=%d\n",n,i,m);
    }
    return 0;
}
