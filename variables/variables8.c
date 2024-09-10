#include <stdio.h>
#include <math.h>

int main(){

float n1;
float n2;
float n3;
float mg;
float p;

   printf("Entrer Num 1 :");
   scanf("%f", &n1);

   printf("Entrer Num 2 :");
   scanf("%f", &n2);

   printf("Entrer Num 3 :");
   scanf("%f", &n3);
    
   mg = n1 * n2 * n3;
   p = pow(mg, (1.0/3.0));

   printf("La moyenne geometrique est :%.2f", p);

return 0;
}