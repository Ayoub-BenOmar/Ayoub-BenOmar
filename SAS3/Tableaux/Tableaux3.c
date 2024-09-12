#include <stdio.h>

int main(){

       int num;
       int somme = 0;

       printf("Entrer nombre d'elements d'un tableau : ");
       scanf("%d", &num);

       int tableaux[num];
    
          for (int i = 0; i < num; i++) { 
                printf("Entrer l'elements de tableaux %d : ", i+1);
                scanf("%d", &tableaux[i]);
                somme += tableaux[i];
          }

                printf("La somme des elements de tableaux est : %d\n", somme);

       return 0;
    }
