#include<stdio.h>
#include<stdlib.h>
#include<time.h>      //les combinaisoans des pointeurs
#define NB 5



void swap (int*a,int*b);
int Aff_1D_Tab (int const *const pt,const int nb);   //momkin t7rg data ibdl ladresse oybdl le contenu
int saisir_1D_Tab (int *pt, int const nb);
int saisir_2D(int*pt, int const nb, int Vmax);
int max_1D_indice(int*pt,int nb);
int min_1D_indice(int*pt,int nb);
int est_trie_1D(int*pt,int nb);
int Aff_1D_Tab(int const *const pt,const int nb);



int main()
{
    int  T[NB];
    int min,imin;
    Aff_1D_Tab(T,NB);
    saisir_1D_Tab(T,NB);
    Aff_1D_Tab(T,NB);
    printf("Le maximum de ce tableau est:%d", T[max_1D_indice(T,NB)]);
    imin = min_1D_indice(T,NB);
    printf("L'indice du min=%d, sa valeur est:%d",imin,T[imin]);
    return 0;
}

void swap(int*a,int*b)
{
    int tmp;
    *a=tmp;
    tmp=*b;
    *b=*a;
}

int Aff_1D_Tab(int const *const pt,const int nb)
{
    int i;
    printf("\n\n |");
    for (i=0; i<nb; i++)
        printf("%2d",pt[i]);
    printf("| \n\n");
    return 0;
}

int saisir_1D_Tab(int*pt, int const nb)
{
    int i;
    for (i=0; i<nb; i++)
    {
        printf("\nDonner la valeur pt [%d]:",i);
        scanf("%d",&pt[i]);
    }
    return 0;
}



int max_1D_indice(int*pt,int nb)
{
    int i,imax=0;
    for(i=1; i<nb; i++)
    {
        if (pt[i]>pt[imax])
            imax=i;
    }
    return (imax);
}

int min_1D_indice(int*pt,int nb)
{
    int i,imin=0;
    for(i=1; i<nb; i++)
    {
        if (pt[i]<pt[imin])
            imin=i;
    }
    return (imin);
}

int est_trie_1D(int*pt,int nb)
{
    int i=0;

    if (nb==1) return 2;
    while (i<nb-1&&pt[i]==pt[i+1])
        i++;
    if(i==nb-1) return 2;
    if (pt[i]<pt[i+1])
    {
        while (i<nb-1&&pt[i]<=pt[i+1])
            i++;
        if(i==nb-1) return 1;
        else return 0;
    }
    else
    {
        while(i<nb-1&&pt[i]>=pt[i+1])
            i++;
        if(i==nb-1) return (-1);
        else return 0;
    }
}


