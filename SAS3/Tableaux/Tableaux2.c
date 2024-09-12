#include <stdio.h>

int main(){

       int num;

       printf("Entrer nombre d'elements d'un tableau : ");
       scanf("%d", &num);

       int tableaux[num];
    
          for (int i = 0; i < num; i++) { 
                printf("Entrer l'element de tableaux %d : ", i+1);
                scanf("%d", &tableaux[i]);
          }
                printf("L'element de tableaux est : \n");
          for (int i = 0; i < num; i++) {
                printf("==>%d\n", tableaux[i]);
          }
       return 0;
    }
