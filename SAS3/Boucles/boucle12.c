#include <stdio.h>

int main()
{
    int num;
    int temp;

    printf("Entrer le nombre d'elements du tableau : ");
    scanf("%d", &num);

    int tableaux[num];

    
    for (int i = 0; i < num; i++)
    {
        printf("Entrer l'element du tableau %d : ", i + 1);
        scanf("%d", &tableaux[i]);
    }

    for (int i = 0; i < num - 1; i++)
    {
        for (int j = 0; j < num - i - 1; j++)
        {
            if (tableaux[j] > tableaux[j + 1])
            {
                temp = tableaux[j];
                tableaux[j] = tableaux[j + 1];
                tableaux[j + 1] = temp;
            }
        }
    }

    printf("Tableau trie : ");
    for (int i = 0; i < num; i++)
    {
        printf("%d ", tableaux[i]);
    }

    return 0;
}
