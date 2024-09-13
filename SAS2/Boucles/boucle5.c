#include <stdio.h>

int main(){

   int base;
   int exposant;
   int resultat = 1;

   printf("Entrer la base : ");
   scanf("%d", &base);

   printf("Entrer l'exposant : ");
   scanf("%d", &exposant);

   for (int i = 0; i < exposant; i++)
   {
    resultat = resultat * base;
   }
   
   printf("La puissance du %d a %d est : %d", base, exposant, resultat);
    return 0;
}