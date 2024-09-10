#include <stdio.h>

int main(){

   int x;
   int y;
   int s1;
   int s2;

        printf("Entrer nombre 1 :");
        scanf("%d", &x);
        printf("Entrer nombre 2 :");
        scanf("%d", &y);

        if (x == y)
        {
            s1 = x + y;
            printf("La solution est est :%d", s1);
        }
        else {
            s2 = (x + y) * 3;
            printf("La solution est :%d", s2);
        }

        return 0;
}