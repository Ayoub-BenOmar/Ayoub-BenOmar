#include <stdio.h> 

int main() {
    int num; 
    int somme = 0; 
    int compteur = 0;

    printf("Entrez une serie de nombres positifs terminez par 0 : \n");

    while (1) { 
        scanf("%d", &num); 
        if (num == 0) { 
            break; 
        }
        somme += num; 
        compteur++; 
    }
    if (compteur > 0) {
        float moyenne = (float)somme / compteur;
        printf("La moyenne est : %.2f\n", moyenne);
    } else {
        printf("Aucun nombre ajoutee.\n");
    }

    return 0; 
}