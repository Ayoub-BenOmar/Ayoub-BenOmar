#include <stdio.h> 

int main() {
    int num; 
    printf("Entrez un nombre : "); 
    scanf("%d", &num); 

    printf("Les facteurs de %d sont: ", num); 

    for (int i = 1; i <= num; i++) { 
        if (num % i == 0) { 
            printf("%d\n", i); 
        }
    }
    return 0; 
}
