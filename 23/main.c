#include<stdio.h>
void maximum (int *x, int *y, int *m);
int main()
{
    int a, b, max;
    printf("Entrer un nombre a :");
    scanf(" %d ", &a );
    printf("Entrer un nombre :");
    scanf(" %d ", &b );
    maximum( &a, &b, &max);

    printf("Le maximum est %d",max);
    return 0;
}
void maximum (int *x, int *y, int *m)
{
    if (*x > *y)
        *m = *x ;
    else
        *m = *y ;
}
