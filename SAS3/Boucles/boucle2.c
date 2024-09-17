#include <stdio.h>

int estPremier(int num)
{
    if (num <= 1)
        return 0;
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

int main()
{
    int lines;
    printf("Entrez le nombre de lignes pour la pyramide d'etoiles : ");
    scanf("%d", &lines);

    int compteur = 0;
    for (int i = 1; compteur < lines; i++)
    {
        if (estPremier(i))
        {
            for (int j = 0; j < i; j++)
            {
                printf("*");
            }
            printf("\n");
            compteur++;
        }
    }
    return 0;
}
