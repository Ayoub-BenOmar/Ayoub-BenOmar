#include <stdio.h>

int main(){

    int num;
    int remp;
    int nouv;

        printf("Entrer le nombre des elements de tableau : ");
        scanf("%d", &num);

    int tableau[num];

    for (int i = 0; i < num; i++){
        printf("Entrer les elements de tableau : ");
        scanf("%d", &tableau[i]);
       }

        printf("Entrer la valeur a remplacer : ");
        scanf("%d", &remp);
        printf("Entrer la nouvelle valeur : ");
        scanf("%d", &nouv);

    for (int i = 0; i < num; i++)
    {
       if(tableau[i] == remp){
        tableau[i] = nouv;
       }
    }
    
        printf("Mise a jour :\n");
    for (size_t i = 0; i < num; i++)
    {
        printf("%d\n", tableau[i]);
    }

       return 0;
}