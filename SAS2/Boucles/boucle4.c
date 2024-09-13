#include <stdio.h>

int main(){
 
 int num;
 int impair;

  printf("Entrer un nombre : ");
  scanf("%d", &num);

  for (int i = 0; i < num; i++)
  {
    impair = 2 * i + 1;
    printf("%d\n", impair);
  }
  
    return 0;
}