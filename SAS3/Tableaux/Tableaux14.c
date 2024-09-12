#include <stdio.h>

int main(){

    int num;
    float somme;
    float moyenne;

        printf("Entrer le nombre des elements de tableau : ");
        scanf("%d", &num);

    float tableau[num];

    for (int i = 0; i < num; i++){
        printf("Entrer les elements de tableau : ");
        scanf("%f", &tableau[i]);
        somme += tableau[i];
    }
    
    for (int i = 0; i < num; i++)
    {
        moyenne = somme / num;
    }    
     printf("Voila la moyenne : %.2f\n", moyenne);
    
        return 0;
    }