#include <stdio.h>
int RechercheDichotomique(int tableaux[], int num, int taille)
{
    int inf = 0;
    int sup = taille -1;
    while (inf <= sup)
    {
        int moyenne = inf + (sup - inf) / 2;
        if (tableaux[moyenne] == num)
        {
            return moyenne;
        }
        else if (tableaux[moyenne])
        {
            inf = moyenne + 1;
        }
        else
        {
            sup = moyenne - 1;
        }
    }

    return -1;
}

int main()
{
    int tableaux[] = {1, 3, 5, 7, 9, 11};
    int taille = sizeof(tableaux) / sizeof(tableaux[0]);
    int num;

    printf("Entrez un nombre a rechercher: ");
    scanf("%d", &num);

    int resultat = RechercheDichotomique(tableaux, num, taille);

    if (resultat != -1)
    {
        printf("Nombre trouve a l'indice: %d\n", resultat);
    }
    else
    {
        printf("Nombre non trouve.\n");
    }

    return 0;
}