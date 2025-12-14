#include <stdio.h>
#include <stdlib.h>


int PGCD_rec (const int a , const int b ) ;

int PGCD_itera ( int a ,  int b ) ;

void saisir_1 ( int *a ) ;      //3ndha une 2ème écriture

 int saisir_2 (int a ) ;

void afficher ( int a  , int b , int c ) ;

int main () {
    int x , y , solution_rec , solution_itera  ;

     saisir_1 ( &x ) ;
     y = saisir_2 ( y  ) ;

     solution_rec = PGCD_rec (x , y ) ;
     //solution_itera = PGCD_itera ( x , y  ) ;
    
     afficher (  x , y , solution_rec ) ;
     //afficher (  x , y , solution_itera ) ;
    return 0 ;
}

int PGCD_rec (const int a , const int b ) {
    if ( b == 0 )
    return a ;
    else 
    return PGCD_rec ( b ,a % b ) ;
}

int PGCD_itera ( int a ,  int b ) {
    int tmp ;
    if ( b == 0 ) 
    return a ;
    do {
        tmp = a % b ;
        a = b ;
        b = tmp ;
    } while ( b != 0 ) ;
    return a ;
}

void saisir_1 ( int *a ) {
    printf ("Veuillez entrer un nombre :") ;
    scanf ("%d" , a ) ;
}

int saisir_2 (int a ){
    printf ("Veuillez entrer un nombre :") ;
    scanf ("%d" , &a ) ;
     return ( a ) ;
}

void afficher ( int a , int b , int c) {
    printf ("Le PGCD de %d et %d = %d " , a , b , c) ; 
}

