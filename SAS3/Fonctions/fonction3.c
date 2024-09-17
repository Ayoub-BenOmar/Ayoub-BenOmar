#include <stdio.h> 

int maximum(int num1, int num2) {
 
    if (num1 > num2) {
        return num1; 
    } else {
        return num2; 
    }
}

int main() {
    int nombre1, nombre2; 
    
    printf("Entrez le premier nombre: ");
    scanf("%d", &nombre1); 
    printf("Entrez le deuxieme nombre: ");
    scanf("%d", &nombre2); 

    
    printf("Le maximum entre %d et %d est %d\n", nombre1, nombre2, maximum(nombre1, nombre2));
    return 0; 
}
