#include <stdio.h> 

int main() {
    int num; 
    int somme = 0; 
    int moyenne; 
   
    int tableau[] = {10, 20, 30, 50, 80, 110, 150, 200, 250};

    for (int i = 0; i < 9; i++)
    {
        somme += tableau[i];
    }
    moyenne = somme / 9;
    while (moyenne % 10 == 0)
    {
       moyenne /= 10;
    }
    
    printf("Moyenne est %d", moyenne);
    return 0;
}