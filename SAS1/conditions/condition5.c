#include <stdlib.h>
#include <stdio.h>

int main(){
        int y;
        printf("Entrer un nombre d'annee: ");
        scanf("%d", &y);
        getchar();
        printf("\nPour convertir mois: entrer 1");
        printf("\nPour convertir jours: entrer 2");
        printf("\nPour convertir heures: entrer 3");
        printf("\nPour convertir minutes: entrer 4");
        printf("\nPour convertir second: entrer 5");
        int x;
        scanf("%d", &x);
        int mois = y * 12;
        int jours = y * 365;
        int heures = y * 365 * 24;
        int min = y * 365 * 24 * 60;
        int seconds = y * 365 * 24 * 60*60;
        switch(x){
                case 1:
                        printf("%d de annees est %d mois", y ,mois);
                        break;
                case 2:
                        printf("%d de annees est %d jours", y ,jours);
                        break;
                case 3:
                        printf("%d de annees est %d heures", y ,heures);
                        break;
                case 4:
                        printf("%d de annees est %d minutes", y ,min);
                        break;
                case 5:
                        printf("%d de annees est %d seconds", y ,seconds);
                        break;
                default:
                        break;
        }
        return 0;

}