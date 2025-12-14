#include <stdio.h>
#include <stdlib.h>

int main()
{
   int t[10] , min  ;
   int *p ;
   p = t ;
   for (p =t ; p < t+10 ; p++){
    printf("t[%d] = ", p - t + 1);
    scanf("%d" , p);}

    min = *t ;
       for (p =t+1 ; p < t+10 ; p++){
    if (min > *p){
           min = *p ;
   }
       }
   printf(" Le minimum est : %d ", min);
    return 0;
}

