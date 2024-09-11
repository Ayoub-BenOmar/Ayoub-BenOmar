#include <stdio.h> 

int main() {
    int ja; 
    int ju; 
    int se;
    int jr;

    printf(" Entrer nombre total de jours de conges accordes : ");
    scanf("%d", &ja);

    printf("Entrez nombre de jours de conges utilises : ");
    scanf("%d", &ju); 

    printf("Entrez statut de l'employe (0 pour temps partiel, 1 pour temps plein) : ");
    scanf("%d", &se); 

    if (se == 1){ 
        jr = ja - ju; 
    } 
    else if (se == 0){ 
        jr = (ja / 2) - ju; 
    } 
    else{
        printf("Invalide\n"); 
        return 1; 
    }

    if (ju > ja){ 
        printf("Alerte : les jours utilises depassent les jours accordes\n"); 
    } 
    else{

        printf("Jours de conge restants : %d\n", jr); 
    }

    return 0;
}