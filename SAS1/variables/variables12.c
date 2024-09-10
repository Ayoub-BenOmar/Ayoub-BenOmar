#include <stdio.h>

int main(){

int x;

   printf("Entrer un nombre de 4 chiffres :");
   scanf("%d", &x);
   
   printf("%d", x%10);
   x /= 10;
   printf("%d", x%10);
   x /= 10;
   printf("%d", x%10);
   x /= 10;
   printf("%d", x%10);
   
   return 0;
}