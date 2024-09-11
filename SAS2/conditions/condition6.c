#include <stdio.h> 

int main() {
    float c; 
    int t; 
    int k;
    float f;

    printf("Entrez consommation d'electricite (en kWh) : ");
    scanf("%f", &c); 

    printf("Entrez type d'utilisateur (1 pour residentiel, 2 pour commercial)) : ");
    scanf("%d", &t); 

    printf("Entrez type de contrat (0 pour standard, 1 pour reduit) : ");
    scanf("%d", &k); 

    if (t == 1){
       if (k == 0){
        f = c * 0.20;
       }
       else if (k == 1){
        f = c * 0.15;
       }
       else {
        printf("Invalid");
       }
    } 
    else if (t == 2){
        if (k == 0)
       {
        f = c * 0.30;
       }
       else if (k == 1){
        f = c * 0.25;
       }
       else{
        printf("Invalide");
       }
    }
    else {
        printf("Invalide");
    }


    if (c > 500){
        f = f + (f * 0.1);
    }

        printf("La facture d'electricite : %.2f", f);
    
    return 0;
}