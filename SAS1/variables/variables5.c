#include <stdio.h>

int main(){

double c;

    printf("Enter la temperature en Celsius : ");
    scanf("%lf", &c);
    
    if (c<0){
        printf("Etat de l'eau a cette temperature Solide");
    }

    else if (c>=0 && c<100){
        printf("Etat de l'eau a cette temperature est Liquide");
    }

    else {
        printf("Etat de l'eau a cette temperature est Gaz");
    }


    return 0;
}