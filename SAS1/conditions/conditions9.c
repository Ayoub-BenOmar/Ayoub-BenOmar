#include <stdio.h>

int main(){

   char x;

   printf("Entrer un caractere :");
   scanf("%c", &x);


   if (x >= 'a' && x <= 'z')
   {
    printf("Ce caractere est une alphabet et miniscule ");
   }
   else if (x >= 'A' && x <= 'Z')
   {
    printf("Ce caractere est une alphabet et majuscule ");
   }
   else
   {
    printf("Ce caractere n'est pas une alphabet");
   }
    return 0;
}