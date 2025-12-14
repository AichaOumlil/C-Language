#include <stdio.h>
#include<stdlib.h>

int main () {
    int i , j , y , x ;

    do {
        printf ("\nVeuillez entrer un nombre impair (entre 3 et 19 ) : ") ;
        scanf ("%d" , &x ) ;

        if ( x % 2 == 0 ) 
        printf ("\n Le nombre saisi est pair .  ") ;

        if ( x < 3 || x > 19  )
        printf("\nLe nombre n'est pas dans l'intervalle .") ; 

        printf ("\n") ;

    } while ( x < 3 || x > 19  || x % 2 == 0) ;

    for ( i = 1 ; i <= x ; i += 2 ) {
        for ( y = 0 ; y < ( x - i ) / 2 ; y ++ ) {
          printf (" ") ;
        }
        for ( j = 0 ; j < i ; j++ ) {
            printf ("*") ;
        }
        printf ("\n") ;
    }
    for ( i = x-2 ; i >= 1  ; i -= 2 ) {
        for ( y = 0  ; y < ( x - i ) / 2 ; y ++ ) {
          printf (" ") ;
        }
        for ( j = 0 ; j < i ; j++ ) {
            printf ("*") ;
        }
        printf ("\n") ;
    }
    return 0 ;
}