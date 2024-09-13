#include <stdio.h>

int main(){

    int num;
    int result;
    printf("Donner un nombre : ");
    scanf("%d", &num);

    while (num > 0)
    {
        result = num % 10;
        printf("%d", result);
        num /= 10;
    }
    
    return 0;
}