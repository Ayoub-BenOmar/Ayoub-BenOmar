#include <stdio.h>

int main(){

   char alpha;

   printf("Entrer un alphabet :");
   scanf("%c", &alpha);

   if (alpha >= 65 && alpha <= 90)
   {
    printf("Ce alphabet est majuscule");
   }
   else{
    printf("Ce alphabet est miniscule");
   }
    return 0;
}