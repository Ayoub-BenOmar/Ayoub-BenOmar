#include <stdio.h> 

int main() {
    float sb; 
    int nh; 
    int type;
    float tauxH;
    float salaireSupH;
    float salaireH;
    float primeTot;

    printf("Entrez salaire de base (en euros) : ");
    scanf("%f", &sb); 

    printf("Entrez nombre d'heures supplementaires : ");
    scanf("%d", &nh); 

    printf("Entrez type de poste (1 pour junior, 2 pour senior): ");
    scanf("%d", &type); 

    //on suppose l'utilisateur travail 160 h/mois
    tauxH = sb / 160;
    salaireH = 1.5 * tauxH;
    salaireSupH = nh * salaireH;

    if (type == 1)
    {
          sb *= 0.2;
          printf(" Prime pour poste senior : %.2f\n", sb);
          primeTot = sb + salaireSupH;
          printf(" Prime Total pour poste senior : %.2f\n", primeTot);
    }
    else if (type == 2)
    {
          sb *= 0.1;
          printf(" Prime pour poste junior : %.2f\n", sb);
          primeTot = sb + salaireSupH;
          printf(" Prime Total pour poste junior : %.2f\n", primeTot);
    }
    else {
        printf("Invalid");
    }

     return 0;
}