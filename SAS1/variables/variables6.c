#include <stdio.h>

int main(){

float a;
float b;
float plus;
float moins;
float devide;
float x;

   printf("Entrer Num 1 :");
   scanf("%f", &a);

   printf("Entrer Num 2 :");
   scanf("%f", &b);

   plus = a + b;
   moins = a - b;
   x = a * b;
   devide = a / b;


   printf("Num 1 + Num 2 = %.2f \n", plus);
   printf("Num 1 - Num 2 = %.2f \n", moins);
   printf("Num 1 * Num 2 = %.2f \n", x);
   printf("Num 1 / Num 2 = %.2f \n", devide);



    return 0;
}