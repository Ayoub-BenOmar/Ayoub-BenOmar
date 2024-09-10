#include <stdio.h>

int main(){

   char alpha;

        printf("Entrer un caractere :");
        scanf("%c", &alpha);

        switch (alpha)
        {
        case 'a':
           printf("Ce caractere est une voyelle ");
            break;
        case 'e':
           printf("Ce caractere est une voyelle ");
            break;
        case 'i':
           printf("Ce caractere est une voyelle ");
            break;
        case 'o':
           printf("Ce caractere est une voyelle ");
            break;
        case 'u':
           printf("Ce caractere est une voyelle ");
            break;
        case 'y':
           printf("Ce caractere est une voyelle ");
            break;
        
        default:
           printf("Ce caractere est pas une voyelle");
            break;
        }
    return 0;
}