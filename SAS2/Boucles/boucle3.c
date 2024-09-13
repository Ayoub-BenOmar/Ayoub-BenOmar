#include <stdio.h>

int main(){
 
 int num;
 int somme = 0;
  printf("Entrer un nombre : ");
  scanf("%d", &num);

  for (int i = 1; i < num; i++)
  {
    somme += i;
  }
  printf("La somme est %d", somme);
  
    return 0;
}