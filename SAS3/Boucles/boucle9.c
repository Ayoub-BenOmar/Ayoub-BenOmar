#include <stdio.h>

int main()
{
    int base;
    int exposant;
    int resultat = 1;

    printf("Entrez la base (positive) : ");
    scanf("%d", &base);

    printf("Entrez l'exposant (non negatif) : ");
    scanf("%d", &exposant);

    if (base < 0 || exposant < 0)
    {
        printf("La base et l'exposant doit etre positive.\n");
        return 1;
    }

    while (exposant > 0)
    {
        resultat *= base;
        exposant--; // Décrémente l'exposant
    }

    printf("Resultat : %d", resultat);
    return 0;
}