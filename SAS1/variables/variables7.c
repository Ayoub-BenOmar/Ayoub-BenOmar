#include <stdio.h>

int main(){

float n1;
float n2;
float n3;
float M;

   printf("Entrer Num 1 :");
   scanf("%f", &n1);

   printf("Entrer Num 2 :");
   scanf("%f", &n2);

   printf("Entrer Num 3 :");
   scanf("%f", &n3);
    
   M = (n1 * 2 + n2 * 3 + n3 * 5) / 10;

   printf("Moyenne ponderee est :%.2f", M);

return 0;
}