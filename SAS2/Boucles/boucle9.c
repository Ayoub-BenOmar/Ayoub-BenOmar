#include <stdio.h>

int main(){

  int num;

  printf("Entrer un nombre : ");
  scanf("%d", &num);
  int conteur = 0;

  while (num > 0)
  {
    num /= 10;
    conteur++;
  }
  printf("Nombre de chiffres : %d", conteur);

    return 0;
}