#include <stdio.h>
#include <stdlib.h>

int main()
{
    float mat,ph,fr,ang,hist,moy;
    const int cmat=5,cph=5,cfr=4,cang=2,chist=2;
    do {
        printf("Veuillez entrer la note de MATH");
        scanf("%f", &mat);
    } while(mat<0||mat>20);
     do {
        printf("Veuillez entrer la note de PHYSIQUE");
        scanf("%f", &ph);
    } while(ph<0||ph>20);
     do {
        printf("Veuillez entrer la note de FRANCAIS");
        scanf("%f", &fr);
    } while(fr<0||fr>20);
     do {
        printf("Veuillez entrer la note de ANGLAIS");
        scanf("%f", &ang);
    } while(ang<0||ang>20);
     do {
        printf("Veuillez entrer la note de HISTOIRE-GEOGRAPHIQUE");
        scanf("%f", &hist);
    } while(hist<0||hist>20);
    moy=(cmat*mat+cph*ph+cfr*fr+cang*ang+chist*hist)/(cmat+cph+cfr+cang+chist);
    printf("La moyenne des notes est%f:",moy);
    return 0;
}
