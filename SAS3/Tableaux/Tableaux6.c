#include <stdio.h>

int main(){

       int num;
       int fact;
       int res;

       printf("Entrer nombre d'elements d'un tableau : ");
       scanf("%d", &num);

       int tableaux[num];
       
            for (int i = 0; i < num; i++) { 
                printf("Entrer l'elements de tableaux %d : ", i+1);
                scanf("%d", &tableaux[i]);
            }
                printf("Entrer facteur de multiplication : ");
                scanf("%d", &fact);

          for (int i = 0; i < num; i++)
          {
                res = tableaux[i] * fact;
                printf("%d\n", res); 
          }

       return 0;
    }