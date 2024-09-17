#include <stdio.h>

int main(){

   int num;
   int somme;

   printf("Entrer un nombre : ");
   scanf("%d", &num);

   for (int i = 10; i > 0; i--)
   {
    somme = num * i;
    printf("==> %d\n", somme);
   }
   
    return 0;
}