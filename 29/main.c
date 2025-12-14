#include <stdio.h>
#include <stdlib.h>
#define NB 10
int main()
{
    char C1[NB] ;
    char C2[NB] ;
    int i ;
    printf("Veuillez entrer une chaine :");
    gets ( C1 ) ;
    for ( i = 0 ; C1 [i] != '\0' ; i++ )
        C1 [i] = C1 [i] ;
    C2 [i] = '\0' ;
    printf("\n La premiere chaine est : %s", C1 ) ;
    printf("\n La deuxieme chaine est : %s", C2 ) ;
    printf("\n Le nombre total de caractere copier est %d : ", i +1  ) ;


    return 0;
}
