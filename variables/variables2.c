#include <stdio.h>

int main(){

  double c;
  double k;

      printf("Entrer la temperature en Celsius : ");
      scanf("%lf", &c);

      k = c + 273.15;

      printf("La temperature en Kelvin :%.2lf", k);


    return 0;
}
