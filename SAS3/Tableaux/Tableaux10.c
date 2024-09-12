#include <stdio.h>

int main(){

    int num;
    int element;

        printf("Entrer le nombre des elements de tableau : ");
        scanf("%d", &num);

    int tableau[num];

    for (int i = 0; i < num; i++){
        printf("Entrer les elements de tableau : ");
        scanf("%d", &tableau[i]);
       }

       printf("Entrer l'element a rechercher : ");
       scanf("%d", &element);

       int presence = 0;

    for (int i = 0; i < num; i++)
    {
        if (tableau[i] == element)
        {
           presence = 1;
        }
    }
        if (presence == 1){
        printf("L'element %d est present dans le tableau.\n", element);
        } 
        else{
        printf("L'element %d ne present pas dans le tableau.\n", element);
        }
        
     return 0;
}