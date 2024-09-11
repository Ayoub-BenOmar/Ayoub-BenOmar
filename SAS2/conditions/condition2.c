#include <stdio.h> 

int main() {
    int age; 
    int type; 
    int acc; 
    float pb; 
    float prime; 

    printf("Entrez prime de base : ");
    scanf("%f", &pb);

    printf("Entrez l'age du conducteur : ");
    scanf("%d", &age); 

    printf("Entrez le type de voiture (1 pour sportive, 2 pour utilitaire, 3 pour familiale) : ");
    scanf("%d", &type); 

    printf("Entrez le nombre d'accidents au cours des 5 dernieres annees : ");
    scanf("%d", &acc); 

    if (age < 25){ 
        prime = pb * 1.5; 
    } 
    else if (age >= 25 && age <= 65){
        prime = pb; 
    } 
    else{ 
        prime = pb * 1.2; 
    }


    if (type == 1){ 
        prime = 2; 
    } 
    else if (type == 2){ 
        prime= 1.2; 
    } 
    else if (type == 3){ 
        prime = 1.1; 
    }


    if (acc > 1){ 
        prime= 1.3; 
    }

    printf("La prime d'assurance est : %.2f\n", prime);

    return 0; 
}