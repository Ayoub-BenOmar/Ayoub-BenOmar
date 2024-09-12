#include <stdio.h>

int main(){

       int num;

       printf("Entrer nombre d'elements d'un tableau : ");
       scanf("%d", &num);

       int tableaux[num];
    
          for (int i = 0; i < num; i++) { 
                printf("Entrer l'elements de tableaux %d : ", i+1);
                scanf("%d", &tableaux[i]);
                }

          int min = tableaux[0];

          for (int i = 0; i < num; i++)
          {
            if (tableaux[i] < min)
            {
               min = tableaux[i];
            }
          }
          printf("le nombre le plus petit  dans ce tableau est : %d", min);

       return 0;
    }