#include <stdio.h>
#include <stdlib.h>

int main()
{
float n[318],s,m;
int i;
for (i=0;i<5;i++){
    printf("Donner la note de l'etudiant num%d:",i+1);
    scanf("%f",&n[i]);
}
 s=0;
 for (i=0;i<5;i++){
    s=s+n[i];
    }
m=s/5;
printf("La moyenne est:%.2f",m);
return 0;
}
