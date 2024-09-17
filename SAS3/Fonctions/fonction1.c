#include <stdio.h> 


int somme(int num1, int num2) {
    return num1 + num2; 
}

int main() {
    int nombre1, nombre2; 
    printf("Entrez le premier nombre: "); 
    scanf("%d", &nombre1); 
    printf("Entrez le deuxieme nombre: "); 
    scanf("%d", &nombre2); 

    
    printf("La somme est: %d\n",somme(nombre1, nombre2)); 
    return 0;
}
