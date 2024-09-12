#include <stdio.h>

int main(){

    int num;

        printf("Entrer le nombre des elements de tableau : ");
        scanf("%d", &num);

    int tableau[num];

    for (int i = 0; i < num; i++){
        printf("Entrer les elements de tableau : ");
        scanf("%d", &tableau[i]);
    }
    
    printf("Voila les nombres impaires : \n");
    for (int i = 0; i < num; i++)
    {
        if (tableau[i] % 2 != 0)
        {
            printf("%d\n", tableau[i]);
        }
    }
    
        return 0;
    }