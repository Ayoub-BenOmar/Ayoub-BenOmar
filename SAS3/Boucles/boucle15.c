#include <stdio.h>

int main() {
    int num; 
    int factorial = 1;

    printf("Entrez un nombre entier: "); 
    scanf("%d", &num);

    if (num < 0) {
        printf("La factorielle n'est pas definie pour les nombres negatifs.\n");
    } else {
       
        for (int i = 1; i <= num; i++) { 
            factorial *= i;
        }
        printf("La factorielle de %d est %d\n", num, factorial);
    }

    return 0;
}
