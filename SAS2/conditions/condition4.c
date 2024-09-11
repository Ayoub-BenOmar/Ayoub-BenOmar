#include <stdio.h> 

int main() {
    int s; 
    int a; 
    int r; 
    float e; 

    printf("Entrez le score de performance (0 a 100) : ");
    scanf("%d", &s); 

    printf("Entrez l'anciennete (en annees) : ");
    scanf("%d", &a); 

    printf("Entrez le nombre de recompenses (0, 1 ou 2) : ");
    scanf("%d", &r); 

    if (s >= 90 && a >= 5){
        printf("Excellente");
    } 
    else if (s >= 75 && a >= 3){
        printf("Bonne");
    } 
    else if (s >= 50 && a < 3){
        printf("Satisfaisante");
    } 
    else if (s < 50){
        printf("Insuffisante");
    }
    else{
        printf("Invalid");
    }

    return 0; 
    }