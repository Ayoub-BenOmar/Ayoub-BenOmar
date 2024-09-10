#include <stdio.h>
#include<string.h>
int main(){

char nom[30];
char prenom[30];
int age;
char sex[30];
char email[50];

    printf("Enter votre nom :\n");
     scanf("%s", nom);
    getchar();

    printf("Enter votre prenom :\n");
    fgets(prenom, 30, stdin);
    prenom[strlen(prenom)-1] = '\0';

    printf("Enter votre sexe :\n");
    scanf("%s", sex);
    getchar();

    printf("Enter votre adresse email :\n");
    scanf("%s", email);

    printf("Enter votre age :\n");
    scanf("%d", &age);

 printf("Nom : %s\n", nom);
 printf("Prenom : %s\n", prenom);
 printf("Age : %d\n", age);
 printf("Sexe : %s\n", sex);
 printf("Adresse email : %s\n", email);


return 0;
}