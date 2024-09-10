#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main (){

   srand(time(0));

   int num = (rand() % 7) + 1;

   switch (num)
   {
    case 1:
        printf("Lundi");
    break;
    case 2:
        printf("Mardi");
    break;
    case 3:
        printf("Mercredi");
    break;
    case 4:
        printf("Jeudi");
    break;
    case 5:
        printf("Vendredi");
    break;
    case 6:
        printf("Samedi");
    break;
    case 7:
        printf("Dimanche");
    break;
   
   default:
    break;
   }
    return 0;
}