#include <stdio.h>
#include <stdlib.h>

int main()
{
    float montantlu, remise,montantnet;
    do
    {
        printf("La remise\n");
        printf("Veuillez entrer le montant:");
        scanf("%f",&montantlu);
    }
    while (montantlu<=0);
    if (montantlu<=5000&&montantlu>=2000){
        remise=0.01;
}
else if ( montantlu>5000)
{
    remise=0.02;
}
montantnet = montantlu*(1-remise);
printf("Le montant net est :%f",montantnet);
return 0;
}
