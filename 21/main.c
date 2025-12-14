#include <stdio.h>
#include <stdlib.h>           //Manipulation de tab d'une seul dimension
#define NB 5                //parcour du reste de code et de substituer NB par 20


int aff_1D_tab(int const *const pt, const int nb);
void swap(int *a,int *b);
int saisir_1D_tab (int *pt, int const nb);
int max_1D_indice (int const*const pt, int nb);
int min_1D_indice (int *pt, int nb);
int estTrie1D (int *pt, int nb);
int Trie_decroissant (int *pt, int nb);
int Trie_croissant (int *pt, int nb);

// Declaration de la fonction swap manquante
void swap(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int aff_1D_tab(int const *const pt, const int nb)
{
    int i;
    printf("\n\n | ");
    for (i=0 ; i<nb ; i++)
        printf("%2d ",pt[i]);
    printf(" | \n\n");
    return 0;
}

int saisir_1D_tab (int *pt, int const nb)
{
    int i;
    for (i=0; i<nb; i++)
    {
        printf("Entrez la valeur de pt[%d]: ",i);
        scanf("%d", &pt[i]);
    }
    return 0;
}

int max_1D_indice (int const*const pt, int nb)
{
    int i, imax=0;
    for(i=1; i<nb; i++)
    {
        if(pt[i]>pt[imax])
            imax = i;
    }
    return imax;
}

int min_1D_indice (int *pt, int nb)
{
    int i, imin=0;
    for(i=1; i<nb; i++)
    {
        if(pt[i]<pt[imin])
            imin = i;
    }
    return imin;
}
int estTrie1D (int *pt, int nb)
{
    int i=0;
    int croissant=1;
    int decroissant=1;

    if (nb == 1)
        return 2;
    for (i=0; i<nb -1; i++)
    {
        if (pt[i]<pt[i+1])
            decroissant=0;
        else if(pt[i]<pt[i+1])
            croissant=0;
    }
    if (croissant && decroissant)
        return 2;
    else if (croissant)
        return 1 ;
    else if (decroissant)
        return -1;
    else
        return 0;
}

int Trie_croissant (int *pt, int nb)
{
    int i, imax ;
    for (i=0; i<nb-1; i++)
    {
        imax = max_1D_indice(pt,nb-i);
        swap(&pt [imax],&pt[nb-i-1]);

    }
    return 0;
}

int Trie_decroissant(int *pt, int nb)
{
    int i,tmp;
    Trie_croissant(pt,nb);
    for (i=0; i<nb/2; i++)
    {
        tmp = pt[i];
        pt[i] = pt[nb-1-i];
        pt[nb-1-i] = tmp ;

    }
    return 0;
}

int main()
{
    int T[NB];
    int imin;
    saisir_1D_tab(T,NB);
    aff_1D_tab(T,NB);


    printf("\n=== TRI CROISSANT ===\n");
    Trie_croissant(T, NB);
    aff_1D_tab(T, NB);

    printf("\n=== TRI DECROISSANT ===\n");
    Trie_decroissant(T, NB);
    aff_1D_tab(T, NB);

    printf("Le maximum de ce tableau est: %d \n", T[max_1D_indice(T,NB)]);
    imin = min_1D_indice(T,NB);
    printf("L'indice de min = %d, sa valeur est : %d \n\n",imin,T[imin]);


    return 0;
}

