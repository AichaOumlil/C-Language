#include <stdio.h>
#include <stdlib.h>

int main()
{
   int T[6] ,s ;
   int *P ;
   P = T ;
   for ( P = T ; P < T +6 ; P ++ ){
    printf(" Entrer T[%d] = ", P - T + 1 );
    scanf("%d" , P );
   }
   s = 0 ;
    for ( P = T ; P < T +6 ; P ++ ){
            s = s + *P ;
    }

    printf("La somme des nombres est %d:",s);

    return 0;
}
