#include <stdio.h> 
int main(){
    int x1;
    int x2;
    int y1;
    int y2;
    int z1;
    int z2; 
    
    printf("Entrez instant 1 (HH:MM:SS) : ");
    scanf("%d:%d:%d", &x1, &y1, &z1);
    
    printf("Entrez instant 2 (HH:MM:SS) : ");
    scanf("%d:%d:%d", &x2, &y2, &z2); 

    
    if (x1 < x2 || (x1 == x2 && y1 < y2) || (x1 == x2 && y1 == y2 && z1 < z2)){
        
        printf("Linstant 1 vient avant Linstant 2\n");

    } 
    else if (x1 > x2 || (x1 == x2 && y1 > y2) || (x1 == x2 && y1 == y2 && z1 > z2)){
        
        printf("Linstant 2 vient avant Linstant 1\n");

    } 
    else{
        
        printf("Le meme.\n");
    }

    return 0; 
}