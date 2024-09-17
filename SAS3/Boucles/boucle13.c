#include <stdio.h>

int main()
{

    int num;
    int mult;
    int somme = 0;

    printf("Entrer un nombre : ");
    scanf("%d", &num);

    for (int i = 1; i <= 10; i++)
    {
        mult = num * i;
        somme += mult;

        printf("==> %d\n", mult);
    }
    printf("la somme est : %d", somme);

    return 0;
}