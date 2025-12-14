#include <stdio.h>
#include <stdlib.h>
#define NB 5 

float moy (float *T , int nb) ;
float som (float *T , int nb) ;
int supmoy (float *T, int nb) ;

int main () {
float T[NB] ;
int i  ;
for (i=0 ; i<NB ; i++) {
    printf ("T [%d]=" , i) ;
    scanf("%f" , &T[i]) ;
}
printf("La moyenne de la classe est : %2f\n" , moy (T,NB)) ;
printf ("Les notes superieures a la moyenne sont : %d \n" ,supmoy(T,NB)) ;
    return 0 ;
}

float moy(float *T , int nb) {
    return (som (T ,nb )/nb) ;
}

float som (float *T , int nb) {
    float sm = 0 ;
    int i ;
    for (i=0 ; i<nb ; i++)
    sm += T[i] ;
    return sm ;
}

int supmoy (float *T, int nb) {
    float my = moy (T, nb) ;
    int i , sup =0 ;
    for (i=0 ; i<nb ; i++)
    if (T[i]>=my)
    sup += 1 ;
    return sup ;
}