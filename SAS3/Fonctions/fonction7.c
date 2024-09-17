#include <stdio.h> 

char* inverser_chaine(char* chaine) {
    int longueur = 0;
    char* debut = chaine;
    char* fin;

    while (chaine[longueur] != '\0') {
        longueur++;
    }
    fin = chaine + longueur - 1;
    while (debut < fin) { 
        char temp = *debut;
        *debut = *fin;
        *fin = temp;
        debut++;
        fin--;
    }

    return chaine;
}

int main() {
    char chaine[] = "YouCode"; 
    printf("Chaine originale : %s\n", chaine);
    printf("Chaine inversee : %s\n", inverser_chaine(chaine)); 
    return 0;
}

