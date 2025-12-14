#include <stdio.h>
#include <stdlib.h>
#define NB 6

int main()
{
    int i , C[NB] ;

    for (i=1; i<=NB ; i++){
    printf("Veuillez entrer des valeurs:");
        scanf("%d ", C[i]);
    }
    for ( i=1 ; i<= NB ; i++){
        C[i] =C[i] * C[i];
    }
    for ( i=1 ; i<=NB ; i++){
       printf("C[%d]",i);
    }

    return 0;
}
