#include <stdio.h>
#include <stdlib.h>
#define NB 5
int supmoy(float *T, int nb ) ;
float moy (float *T, int nb ) ;
float som (float *T, int nb ) ;

int main()
{
    float T [ NB] ;
    int  i ;
    for (i = 0 ; i < NB ; i++)    //tmrin fih 100 walakin ana ktbt 5 bach tji sahala
    {
        printf(" T [%d] = ",i +1 );
        scanf ("%f", &T[i]) ;
    }
    printf("La moyenne de la classe  est : %.2f \n", moy( T,NB ));
    printf("Les notes superieurs a la moyenne sont : %.2d \n", supmoy( T,NB ));

    return 0;
}

float moy(float*T, int nb )
{
    return (som (T, nb ) / nb) ;
}


float som (float *T, int nb )
{
    float sm  = 0 ;
    int i ;
    for (i = 0 ; i < nb ; i++)
        sm += T[i] ;
    return (sm) ;
}

int supmoy(float*T, int nb )
{
    float my = moy ( T, nb ) ;
    int i, sup =0 ;
    for ( i = 0 ; i < nb ; i++ )
        if ( T [ i ] >= my )
            sup += 1 ;
    return ( sup ) ;
}
