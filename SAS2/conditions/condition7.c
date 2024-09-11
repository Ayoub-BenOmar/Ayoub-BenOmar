#include <stdio.h> 

int main() {
    float ra; 
    int sf; 
    int d;

    printf("Entrez revenu annuel (en euros) : ");
    scanf("%f", &ra); 

    printf("Entrez statut fiscal (1 pour celibataire, 2 pour marie, 3 pour chef de famille) : ");
    scanf("%d", &sf); 

    printf("Entrez deductions (en euros) : ");
    scanf("%d", &d); 


    if (ra <= 20000)
    {
          printf("La tranche d'imposition : 5%%\n");
    }
    else if (ra > 20000 && ra <= 50000)
    {
          printf("La tranche d'imposition : 10%%\n");
    }
    else{
          printf("La tranche d'imposition : 20%%\n");
    }


    if (sf == 1)
    {
          printf("Deduction de 1 000 euros");
    }
    else if (sf == 2)
    {
          printf("Deduction de 2 000 euros");
    }
    else if (sf == 3){
          printf("Deduction de 3 000 euros");
    }
    else{
          printf("Invalid");
    }

     return 0;
}