#include <stdio.h>

int main(){

    int num;
    int pair;

    printf("Entrer un numbre : ");
    scanf("%d", &num);

    for (int i = 0; i < num; i++)
    {
        pair = i * 2;
        printf("%d\n", pair);
    }
    
    return 0;
}