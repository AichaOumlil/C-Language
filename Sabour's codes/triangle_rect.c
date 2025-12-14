#include <stdio.h>
#include <stdlib.h>

int main () {
    int i , j , x ;
    do {
    printf ("Veuillez entrer un nombre (entre 3 et 19 ): ") ;
    scanf ("%d" , &x ) ;
    } while ( x < 3 || x > 19 ) ;
    for ( i = 1 ; i <= x ; i++ ) {
     for ( j = 1 ; j <= i ; j++ ) {
     printf ("* ") ; }
        printf ("\n") ;
     }
    return 0 ; 
} 