#include <stdio.h>

int main(){

double kmh;
double ms;

    printf("Enter la vitesse en kilomètres par heure :");
    scanf("%lf", &kmh);
    
    ms = kmh * 0.27778;

    printf("La vitesse en metres par seconde est :%.2lf", ms);


    return 0;
}