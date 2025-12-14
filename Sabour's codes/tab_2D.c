#include <stdio.h>
#include <stdlib.h>              /*Allocation dynamique*/
#include <time.h>

int **alloc_2D (const int nl , const int nc) ;
int free_2D (int **T , int const nl ) ;
int Aff_2D(int  **T , int nl , int nc) ;
int saisir_2D(int **T , int nl , int nc , int Vmin , int Vmax) ;
int rand_2D(int **T, int nl , int nc , int Vmin ,int Vmax ) ;
//int est_symetrique(int **T, int nl, int nc) ;

int main () {
    int nl , nc , **T ;
    do {
        printf("Donnez la valeur de nl :") ;
        scanf("%d" , &nl ) ;
    } while (nl <= 0 ) ; 
    do {
        printf("Donnez la valeur de nc :") ;
        scanf("%d" , &nc ) ;
    } while (nc <= 0 ) ;

T = alloc_2D(nl ,nc) ;
Aff_2D(T , nl , nc) ;
rand_2D(T, nl , nc , -33 , 33 ) ;
Aff_2D(T , nl , nc) ;

//est_symetrique(T , nl , nc) ;

free_2D (T , nl  ) ;
    return 0 ;
}

int **alloc_2D (const int nl , const int nc) {
    int **Res ;
    int i ;            /*Allocation dynamique*/
    Res =(int ** ) malloc(nl*sizeof(int*)) ;
    if(Res==NULL) {
        printf(" \n Erreur Allocation .") ;
        exit(33) ;
    }
    for (i=0 ; i<nl ; i++){
        Res [i]=(int * ) malloc(nc*sizeof(int)) ;
         if(Res[i]==NULL) {
            printf(" \n Erreur Allocation .") ;
        exit(33+i) ;
         }
    }
    return (Res) ;
}

int free_2D (int **T , int const nl ) {
    int i ;
    for (i=0; i<nl ; i++) {
        if (T[i] != NULL)
     free (T[i]) ;  
    }
    free (T) ;
    return 0 ;
}

int Aff_2D(int **T , int nl , int nc) {
    int i , j ;
    for (i=0; i<nl ; i++) {
        printf("\n |") ;
        for (j=0; j<nc ; j++)
        printf("%2d" , T[i][j] ) ;
        printf(" |") ;
    }
return 0 ;
}

int saisir_2D(int **T , int nl , int nc , int Vmin , int Vmax) {
    int i , j ;
    for (i=0; i<nl ; i++) 
        for (j=0; j<nc ; j++) {
            system ("cls") ;
do {
    printf ("\n Donnez T[%d][%d]=" , i, j ) ;
    scanf ("%d" , &T[i][j]) ;
} while ( T[i][j] < Vmin ||  T[i][j] > Vmax ) ;
        }
return 0 ;
}

int rand_2D(int **T, int nl  , int nc , int Vmin ,int Vmax ) {
    int i ;
    srand (time (NULL)) ;
    for (i=0; i<nl*nc ; i++)  
    T [i/nc][i%nc]=Vmin + rand() % ( Vmax - Vmin + 1) ;
    return 0 ;
}

//int est_symetrique(int **T, int nl, int nc) {
  //  int i, j ;
    //if (nl != nc) {
      //  printf("\n La matrice n'est pas carree, donc elle ne peut pas être symetrique ou antisymetrique.") ;
        //return -1 ;
    //}

    //int sym = 1, antisym = 1 ;
    //for (i = 0 ; i < nl ; i++) {
      //  for (j = 0 ; j < nc ; j++) {
        //    if (T[i][j] != T[j][i])
          //      sym = 0 ;
           // if (T[i][j] != -T[j][i])
            //    antisym = 0 ;
        //}
    //}

    //if (sym)
      //  printf("\n La matrice est symetrique.") ;
    //else if (antisym)
      //  printf("\n La matrice est antisymetrique.") ;
    //else
      //  printf("\n La matrice n'est ni symetrique ni antisymetrique.") ;

    //return 0 ;
//}