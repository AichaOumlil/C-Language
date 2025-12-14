#include <stdio.h>
#include <stdlib.h>

int main()

    int M , i;
    M = 0;
    for (i=1;i<=20;i++){
    M =i + M ;
    printf("La somme des 20 premiers positifs est: %d \n",M);
}
    return 0;

}
