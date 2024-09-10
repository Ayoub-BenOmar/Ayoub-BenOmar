#include <stdio.h>

int main(){

    int num;
     
        printf("Entrer un nombre :");
        scanf("%d", &num);

        if (num % 2 == 0 ){
            printf("Ce nombre est pair");
        }
        else{
            printf("Ce nombre est impair");
        }

    return 0;
}