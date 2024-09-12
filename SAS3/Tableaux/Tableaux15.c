#include <stdio.h>

int main(){

    int num;
    int num2;

        printf("Entrer le nombre des elements de tableau 1 : ");
        scanf("%d", &num);
        int tableau[num];
    for (int i = 0; i < num; i++){
        printf("Entrer les elements de tableau 1 : ");
        scanf("%d", &tableau[i]);
       }


        printf("Entrer le nombre des elements de tableau 2 : ");
        scanf("%d", &num2);
        int tableau2[num2];
    for (int i = 0; i < num2; i++){
        printf("Entrer les elements de tableau 2 : ");
        scanf("%d", &tableau2[i]);
       }
       
        int somme = num + num2;
        int tableauM[somme];

    for (int i = 0; i < num; i++)
    {
        tableauM[i] = tableau[i];
    }
    for (int i = 0; i < num2; i++)
    {
        tableauM[num + i] = tableau2[i];
    }
    
    printf("Tableaux fusionne : \n");
    for (int i = 0; i < somme ; i++)
    {
        printf("%d\n", tableauM[i]);
    }
    
       return 0;
}