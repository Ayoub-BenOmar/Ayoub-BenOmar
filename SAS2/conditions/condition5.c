#include <stdio.h> 

int main() {
    int b; 
    int d; 
    int n; 

    printf("Entrez Budget (en euros) : ");
    scanf("%d", &b); 

    printf("Entrez Destination (1 pour plage, 2 pour montagne, 3 pour ville) : ");
    scanf("%d", &d); 

    printf("Entrez Nombre de personnes : ");
    scanf("%d", &n); 

    if (b >= 1000){
        printf("Voyage haut de gamme\n");
    } 
    else if (b >= 500 && b >= 1000){
        printf("Voyage moyen\n");
    } 
    else{
        printf("Voyage economique\n");
    } 
    
    if (b >= 1000 && n < 2){
       printf("Destination recommandee : Plage");
    }
    else if (b >= 500 && n <= 2){
        printf("Destination recommandee : Montagne ");
    }
    else{
        printf("Destination recommandee : Ville ");
    }
    
    return 0;
}