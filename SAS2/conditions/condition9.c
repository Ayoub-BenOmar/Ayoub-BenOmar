#include <stdio.h> 

int main() {
    int sb; 
    int nh; 
    int type;
    float tauxH;
    float salaireSup;
    float salaireTot;


    printf("Entrez salaire de base (en euros) : ");
    scanf("%f", &sb); 

    printf("Entrez nombre d'heures supplementaires : ");
    scanf("%d", &nh); 

    printf("Entrez type de poste (1 pour junior, 2 pour senior): ");
    scanf("%d", &type); 

    //on suppose l'utilisateur travail 160 h/mois
    tauxH = sb / 160;
    salaireSup = 1.5 * nh;


    if ( type == 1 )
    {
          sb *= 0.20;
          salaireTot = sb + 0
          printf(" Prime pour poste senior : %d\n", sb);
    }
    else if (  sb == 2)
    {
          sb *= 0.10;
          printf(" Prime pour poste junior : %d\n", sb);
    }
    else {
        printf("Invalid");
    }

     return 0;
}