#include <stdio.h>

int main(){

       int num;
       int i;

       printf("Entrer nombre d'elements d'un tableau : ");
       scanf("%d", &num);

       int tableaux[num];
    
          for (int i = 0; i < num; i++) { 
                printf("Entrer l'elements de tableaux %d : ", i+1);
                scanf("%d", &tableaux[i]);
                }

          int max = tableaux[0];

          for (int i = 0; i < num; i++)
          {
            if (tableaux[i] > max)
            {
               max = tableaux[i];
            }
          }
          printf("le nombre le plus grand dans ce tableau est : %d", max);

       return 0;
    }
