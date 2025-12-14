#include <stdio.h>
#include <stdlib.h>
#include <time.h>

float *alloc_1D(int const ) ;
int saisir_1D(float * , int const nb ) ;
int Aff_1D(const float *const , const int ) ;
int free_1D(float * ) ;

int main () {
int nb ;
float *T ;
do {
    printf("Donner une valeur de nb (20-200) :") ;
    scanf ("%d",&nb ) ;
} while (nb<20 || nb >200) ;
T= alloc_1D(nb);
if (T==NULL) {
    printf("Erreur Allocation.") ;
    exit(33) ;
}
Aff_1D (T,nb) ;
saisir_1D (T,nb) ;
Aff_1D (T,nb) ;
free_1D (T) ;
    return 0 ;
}
float *alloc_1D(int const nb ) {
    float *Res ;
    Res = (float *) malloc (nb *sizeof(float)) ;
    if (Res==NULL) {
        printf("Erreur") ;
        exit (33) ;
    }
    return (Res) ;

}
int saisir_1D(float *T , int const nb ) {
    // -10.14 et 23.2
    // -1014 et 2320/100
    int i ;
    srand(time(NULL)) ;
    for (i=0 ; i<nb ; i++ )
    T[i] = (float)(rand()%(2320-1014+1)+1014) /100.0 ;
    return (0) ;
}

int Aff_1D(const float *const T , const int nb ) {
    int i ;
    for (i=0 , printf("\n\n|") ; i<nb ; i++ )
    printf ("%5.2f", T[i]) ;
    printf ("|\n\n") ;
    return 0 ;
}

int free_1D(float *p ) {
    free (p) ;
    return 0 ;
}