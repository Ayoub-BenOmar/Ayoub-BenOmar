#include <stdio.h>

int main() {
    
    const char *jours[] = {"Lundi", "Mardi", "Mercredi", "Jeudi", "Vendredi", "Samedi", "Dimanche"};
    int choix; 

   
    printf("Veuillez choisir un jour de la semaine :\n");
    for (int i = 0; i < 7; i++) {
        printf("%d: %s\n", i, jours[i]);
    }

    scanf("%d", &choix); 

    if (choix < 0 || choix > 6) {
        printf("Choix invalide.\n");
    } else {
        
        printf("Vous avez choisi: %s\n", jours[choix]);

        printf("Les jours suivants sont:\n");
        for (int i = 1; i <= 6; i++) {
            int joursuiv = (choix + i) % 7;
            printf("%s\n", jours[joursuiv]);
        }
    }

    return 0;
}