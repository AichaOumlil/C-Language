#include <stdio.h>
#include <stdlib.h>


float Newt_rec ( float a , float r ) ;

float New_ite ( const float a , float eps ) ;

int main () {}

float Newt_rec ( float a , float r ) {
    if ( a == 0 )
    return 0 ;
    if ( fabs( a - r * r ) <= 0.001 )
    return r ; 
    else 
    return ( Newt_rec (  a , 0.5 * ( r + a / r ) ) ) ;
}

float New_ite ( const float a , float eps ) {
    float r0 = 1 , r1 ;
    if ( a == 0 )
    return 0 ;
    
    do {
        r1 = 0.5 * ( r0 + a / r0 ) ;
        printf ("\n a = %8.4f | r0 = %8.4f | r1 * r1 = %8.4f " , a , r0 , r1*r1 ) ;
        r0 = r1 ;
    } while ()
}