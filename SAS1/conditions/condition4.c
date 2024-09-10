#include <stdio.h>
#include <math.h>

int main(){

    float a;
    float b;
    float c;
    float d;
    float x1;
    float x2;
    float x3;

    printf("Enter nombre 1 :");
    scanf("%f", &a);
    printf("Enter nombre 2 :");
    scanf("%f", &b);
    printf("Enter nombre 3 :");
    scanf("%f", &c);

    d = pow( b, 2) - 4 * a * c;
    printf("Delta est %.2f\n", d);

    if (d > 0)
    {
       x1 = (-b + sqrt(d)) / (2.0 * a);
       x2 = (-b - sqrt(d)) / (2.0 * a);
       printf("Les 2 solutions possible est %.2f et %.2f", x1, x2);
    }
    else if (d == 0)
    {
        x3 = -b / (2 * a);
        printf("la solution possible est %.2f", x3);
    }
    else{
        printf("Aucun solution");
    }
    
    return 0;
}