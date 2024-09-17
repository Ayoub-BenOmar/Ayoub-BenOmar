#include <stdio.h>

int mult(int num1, int num2)
{
    return num1 * num2;
}

int main()
{
    int nombre1, nombre2;
    printf("Entrez le premier nombre: ");
    scanf("%d", &nombre1);
    printf("Entrez le deuxieme nombre: ");
    scanf("%d", &nombre2);

    printf("Le resultat est: %d\n", mult(nombre1, nombre2));
    return 0;
}
