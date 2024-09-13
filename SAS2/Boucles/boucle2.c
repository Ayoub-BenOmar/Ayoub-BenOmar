#include <stdio.h>

int main (){

    int num;
    int fact ;
    printf("Entrer un nombre : ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        fact = fact * i; 
        printf("==> %d\n", fact);
    }
    
    return 0;
}