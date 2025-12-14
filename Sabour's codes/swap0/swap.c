#include <stdio.h>
#include <stdlib.h>

void swap0 (int , int ) ;
void swap (int* , int* ) ;
int saisir_minmax (int Min , int Max) ;

int main () {
    int val , min , max ;
    printf ("\n Donner la valeur de min , max :") ;
scanf ("%d%d" , &min ,&max ) ;
if (min > max ) {
    swap0 ( min , max ) ;
    //swap ( &min , &max ) ;
}
val = saisir_minmax (min , max ) ;
printf("La valeur de val = %d " , val) ;

    return 0 ;
} 

void swap0 (int x , int y ) {
    int tmp ;
    printf ("\n swap0 : x =%d , y=%d", x , y) ;
    tmp = x ;
    x = y ;
    y = tmp ;
    printf ("\n Apres swap0 : x = %d , y = %d " , x , y) ;
}

void swap (int*px , int*py ) {
    int tmp ;
    printf ("\n swap : *px =%d , *py=%d", *px , *py) ;
 tmp = *px ;
    *px = *py ;
    *py = tmp ;
    printf ("\n Apres swap0 : *px = %d , *py = %d " , *px , *py) ;
}

int saisir_minmax (int x , int y ) {
    int val  ;
do {
    printf("\n Donner la valeur de val (entre %d et %d ) :" , x  , y) ;
    scanf ("%d" ,&val) ;
} while (val < x || val >y ) ;
return val ;
}