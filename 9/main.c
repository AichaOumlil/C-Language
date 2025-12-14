#include <stdio.h>
#include <stdlib.h>

int main()
{
    int M,i ,m;
    printf("Veuillez entrer la valeur d un nbr:\n");
    scanf("%d",&M);
    while (M<0||M>10){
    printf("Veuillez entrer la valeur d un nbr:\n");
    scanf("%d",&M);}
    for (i=1,i<=10,i++){
       m=i*M;
    printf("Le tableau de multiplication de %d est: %d \n",M,m);}
    return 0;
}
