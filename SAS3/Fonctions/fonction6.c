#include <stdio.h>

int fibonacci(int num) {
  
    if (num <= 0){
        return 0; 
    }
    else if (num == 1){
        return 1;
    }
    int a = 0; 
    int b = 1; 
    int c; 

    for (int i = 2; i <= num; i++){
        c = a + b;
        a = b;
        b = c; 
    }
    return c;
}

int main() {
    int n; 
    printf("Entrez un entier pour obtenir le n-ieme terme de Fibonacci: ");
    scanf("%d", &n); 
    printf("Le %d-ieme terme de Fibonacci est: %d\n", n, fibonacci(n));
    return 0; 
}