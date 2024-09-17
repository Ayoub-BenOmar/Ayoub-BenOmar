#include <stdio.h> 

int main() {
    int num; 
    printf("Entrez un nombre n: "); 
    scanf("%d", &num); 
   
    for (int i = 2; i <= num; i++){
        int numP = 1; 
        
        for (int j = 2; j * j <= i; j++){
            
            if (i % j == 0){
                numP = 0; 
                break; 
            }
        }
        if (numP) {
            printf("%d\n", i); 
        }
    }
    
    return 0;
}
