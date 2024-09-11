#include <stdio.h> 

int main() {
    int age; 
    int ac; 
    int mt;
    float bonus;

    printf("Entrez votre age : ");
    scanf("%d", &age); 

    printf("Entrez annees de cotisation : ");
    scanf("%d", &ac); 

    printf("Entrez montant total epargne (en euros) : ");
    scanf("%d", &mt); 

    if (age >= 65  && ac >= 30  && mt >= 100000){
        printf("Plan complet avec pension elevee\n");
    } 
    else if (age >= 65 && ac >= 20 && mt >= 50000){
        printf("Plan partiel avec pension moyenne\n");
    } 
    else  if ( age < 65){
        printf("Plan epargne non encore disponible\n");
    } 
    else{
        printf("Invalide");
    }

    if (mt > 50000)
    {
        bonus = ( mt - 50000) / 10000 * 5;
        printf("Vous avez un bonus de %.2f%% pour votre epargne", bonus);
    }
    

    return 0; 
    }