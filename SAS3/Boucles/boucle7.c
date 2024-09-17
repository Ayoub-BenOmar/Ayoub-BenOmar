#include <stdio.h>

int main()
{

    int num;
    int a = 0;
    int b = 1;
    int c;

    printf("Entrer un nombre : ");
    scanf("%d", &num);

    for (int i = 0; i < num; i++)
    {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }

    return 0;
}