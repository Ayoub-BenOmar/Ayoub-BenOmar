#include <stdio.h> 

int main() {
    
    float a1;
    float a2;
    float b1;
    float b2;
    float x;
    float y;
    
    printf("Entrez les coordonnees de point A (a1, a2) : ");
    scanf("%f %f", &a1, &b2); 

    printf("Entrez les coordonnees de point B (b1, b2) : ");
    scanf("%f %f", &b1, &b2); 

    
    printf("Entrez les coordonnees de point a tester (x, y) : ");
    scanf("%f %f", &x, &y); 
    
    float A = (b2 - a2) / (b1 - a1); 
    
    float B = (y - a2) / (x - a1); 

   
    if (A == B) {

        if ((x >= a1 && x <= b1) || (x >= b1 && x <= a1)) { 
            printf("Le point est sur le segment\n"); 
        } else {
            printf("Le point n'est pas sur le segment\n"); 
        }
    } else {
        printf("Le point n'est pas sur le segment\n"); 
    }

    return 0; 
}