#include <stdio.h>
#include <math.h>

int main(){

float r;
const float p = 3.14;
float v;


   printf("Entrer le rayon :");
   scanf("%f", &r);

   v = (4.0 / 3.0) * p * pow(r,3);
   
   printf("le volume d'une sphere est :%.2f", v);

   return 0;
}
       