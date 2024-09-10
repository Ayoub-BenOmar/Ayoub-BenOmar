#include <stdio.h>

int main(){

float x;

  printf("Donner votre moyenne :");
  scanf("%f", &x);

if (x <= 10)
{
    printf("recale");
}
else if (x >= 10 && x < 12)
{
    printf("passable");
}
else if (x >= 12 && x < 14)
{
   printf(" assez bien");
}
else if (x >= 14 && x < 16)
{
   printf("bien");
}
else if (x >= 16 )
{
   printf("tres bien");
}

    return 0;
}