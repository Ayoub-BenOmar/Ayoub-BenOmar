#include <stdio.h> 

int main() {
    int age; 
    int hm; 
    int type;

    printf("Entrez votre age : ");
    scanf("%f", &age); 

    printf("Entrez historique medical (0 pour aucun probleme, 1 pour probleme mineur, 2 pour probleme majeur) : ");
    scanf("%d", &hm); 

    printf("Entrez type de couverture (1 pour de base, 2 pour etendue): ");
    scanf("%d", &type); 

    if ( age < 30 )
    {
          printf(" Plan de base\n");
    }
    else if ( age >= 30 && hm == 0 )
    {
          printf("Plan de base\n");
    }
    else if (age >= 30 && hm >= 1)
    {
          printf("Plan etendu\n");
    }
    else{
          printf("Invalid");
    }

    if (hm == 2)
    {
      printf("Vous avez une couverture supplementaire");
    }
    

     return 0;
}