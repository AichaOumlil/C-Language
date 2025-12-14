#include <stdio.h>
#include <stdlib.h>



int main()
{
  float r,s;
  const float Pi=3.14;
  printf("\tVeuillez entrer le rayon r :");
  scanf("%f",&r);
  s=r*r*Pi;
  printf("L'aire du cercle est:%f",s);
  return 0;
}
