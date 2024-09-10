#include <stdio.h>

int main(){

float x;
float y;
float s;

   printf("Entrer la longueur :");
   scanf("%f", &x);
   
   printf("Entrer la largeur :");
   scanf("%f", &y);

   s = x * y;
   
   printf("la surface de rectangle est :%.2f", s);

   return 0;
}