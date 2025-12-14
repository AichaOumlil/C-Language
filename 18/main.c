#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    ddddd:
    printf("Veuillez entrer un nombre entre 1 et 5:");
    scanf("%d",&n);
    if (n<1 || n>5 )
    goto ddddd;
    printf("Bravo c est la bonne reponse");
    return 0;
}
