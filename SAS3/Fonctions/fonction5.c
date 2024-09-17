#include <stdio.h>

int factorielle(int num){

    if (num == 0){
        return 1;
    }
    else{
        return num * factorielle(num - 1);
    }
}

int main(){
    int nombre;
    printf("Entrez un entier positif: ");
    scanf("%d", &nombre);

    if (nombre < 0){
        printf("Veuillez entrer un entier positif.\n");
    }
    else{
        printf("La factorielle de %d est %d\n", nombre, factorielle(nombre));
    }

    return 0;
}
