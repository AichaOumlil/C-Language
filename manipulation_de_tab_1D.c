#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define NB 5

void swap (int *a ,int *b ) ;
int aff_1D_tab(int const *const pt , int const nb ) ;
int saisir_1D_tab (int *pt , int nb ) ;
int max_1D_indice (int *pt , int nb ) ;
int min_1D_indice (int *pt , int nb ) ;
int estTrie_1D (int *pt , int nb ) ;
int Trie_Croissant (int *pt , int nb ) ;
int Trie_Decroissant (int *pt , int nb ) ;
int saisr_2D_tab (int *pt , int const nb , int Vmax ) ;
int saisr_3D_tab (int *pt , int nb , int Vmin , int Vmax ) ;

int main () {
    int T[NB] ;
    int imin ;
    int etat = 0 ;
    aff_1D_tab (T , NB) ;
    system ("pause") ;
    system ("cls") ;
    saisir_1D_tab (T , NB) ;
    //saisir_3D_tab (T , NB) ;
    aff_1D_tab (T , NB) ;
    system ("pause") ;
    system ("cls") ;
    
    etat = estTrie_1D (T , NB ) ;
    switch (etat) {
        case 2 : printf ("Tableau constant ") ;
        break ;
        case 1 : printf ("Tableau croissant ") ;
        break ;
        case 0 : printf ("Tableau non trie ") ;
        break ;
        case -1 : printf ("Tableau decroissant ") ;
        break ;
    }
    printf ("\n\n = = = Trie croissant = = = \n\n") ;
    Trie_Croissant (T , NB) ;
    aff_1D_tab (T , NB) ;
    printf ("\n\n = = = Trie decroissant = = = \n\n") ;
    Trie_Decroissant (T , NB) ;
    aff_1D_tab (T , NB) ;
    printf ("Le maximum de ce tableau est : %d \n" , T[ max_1D_indice (T , NB)]) ;
    imin = min_1D_indice (T , NB) ;
    printf ("L'indice du min = %d , sa valeur est : %d \n" , imin , T[imin]) ;
    return 0 ;
}

void swap (int *a , int *b ){
    int tmp = *a ;
    *a = *b ;
    *b = tmp ;
}

int aff_1D_tab(int const *const pt , int const nb ) {
    int i ;
    printf ("\n\n | ") ;
    for (i=0 ; i<nb ; i++) 
    printf ("%2d" , pt[i] ) ;
    printf (" | \n\n") ;
    return 0 ;
}

int saisir_1D_tab (int *pt , int nb ) {
    int i ;
    for (i=0 ; i<nb ; i++) {
    printf ("\n Entrer la valeur de pt[%d] : " , i ) ;
    scanf ("%d" , &pt[i]) ;
    }
return 0 ;
}

int max_1D_indice (int *pt , int nb ) {
    int i , imax = 0 ;
    for (i=1 ; i<nb ; i++) 
    if (pt[i] > pt[imax] )
    imax = i ;
    return imax ;
}

int min_1D_indice (int *pt , int nb ) {
    int i , imin = 0 ;
    for (i=1 ; i<nb ; i++) 
    if (pt[i] < pt[imin] )
    imin = i ;
    return imin ;
}

int estTrie_1D (int *pt , int nb ) {
    int i = 0 ;
    if ( nb == 1 ) 
    return 2 ;
    while (i<nb-1 && pt [i] == pt [i+1])
    i++ ;
    if ( i == nb-1 ) 
    return 2 ;
    if ( pt [i] < pt [i+1] ) {
    while ( i<nb-1 && pt[i] <= pt[i+1] )
    i++ ;
    if ( i == nb-1 ) 
    return 1 ;
    }
    else
    return 0 ;
    while ( i<nb-1 && pt[i] >= pt[i+1] )
    i++ ;
    if ( i == nb-1 )
    return -1 ;
    else 
    return 0 ;
}

int Trie_Croissant (int *pt , int nb ) {
    int i , imax ;
    for (i=0 ; i<nb ; i++) {
    imax = max_1D_indice ( pt , nb-i ) ;
    swap ( &pt[imax] , &pt[nb-i-1] ) ;
    }
    return 0 ;
}

int Trie_Decroissant (int *pt , int nb ) {
    int i , tmp ;
    Trie_Croissant ( pt , nb ) ;
    for (i=0 ; i<nb/2 ; i++) {
    tmp = pt[i] ; 
    pt[i] = pt[nb-i-1] ;
    pt[nb-i-1] = tmp ;
}
return 0 ;
}

int saisir_2D_tab (int *pt , int const nb , int Vmax ) {
    int i ;
    srand ( time (NULL) ) ;
    for (i=0 ; i<nb ; i++) 
    pt[i] = rand () % ( Vmax + 1 ) ;
    return 0 ;
}

int saisir_3D_tab (int *pt , int nb , int Vmin , int Vmax ) {
    int i ;
    //srand ( time (NULL) ) ;
    for (i=0 ; i<nb ; i++) 
    pt[i] = Vmin + rand() % ( Vmax - Vmin +1 ) ;
    return 0 ;
}