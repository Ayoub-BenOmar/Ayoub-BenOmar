#include <stdio.h>

int main(){

double k;
double y;

    printf("Enter la distance en kilometres :");
    scanf("%lf", &k);
    
    y = k * 1093.61;

    printf("La distance en Yards est :%.2lf", y);


    return 0;
}