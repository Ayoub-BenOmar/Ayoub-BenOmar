#include <stdio.h>

int main(){

float x;
 printf("Entrer un nombre : ");
 scanf("%f", &x);

 if (x > 0)
 {
    printf("Ce nombre est positif");
 }
 else if (x == 0)
 {
   printf("Ce nombre est nul");
 }
 else{
    printf("Ce nombre est negatif ");
 }
    return 0;
}