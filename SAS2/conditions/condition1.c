#include <stdio.h>

int main(){

  float ra;
  float sc;
  float dp;
       
       printf("Entrer revenu annuel : \n");
       scanf("%f", &ra);

       printf("Entrer Score de credit : \n");
       scanf("%f", &sc);

       printf("Entrer Duree du pret : \n");
       scanf("%f", &dp);

       if (ra >= 30000 && sc >= 700 && dp <= 10 )
       {
        printf("Eligible");
       }
       else if (ra >= 30000 && sc >= 650 && dp <= 15)
       {
        printf("Eligible avec conditions");
       }
       else
       {
        printf("Non eligible");
       }
    return 0;
}