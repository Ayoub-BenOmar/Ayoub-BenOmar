#include <stdio.h>

int main(){

    int num;

        printf("Entrer le nombre des elements de tableau : ");
        scanf("%d", &num);
    int tableau[num];
    int tableau2[num];

    for (int i = 0; i < num; i++){
        printf("Entrer les elements de tableau : ");
        scanf("%d", &tableau[i]);
       }

    for (int i = 0; i < num; i++){
        tableau2[i] = tableau[i];
       }
    printf("Originale :\n");
    for (int i = 0; i < num; i++){
        printf("%d ", tableau[i]);
       }
    printf("\nCopie :\n");
    for (int i = 0; i < num; i++){
       
        printf("%d ", tableau2[i]);
       }

      return 0;
    }