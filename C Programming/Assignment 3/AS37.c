#include <stdio.h>

int main() {
    int n = 5;       
    int temp = n;
    int fact = 1;

    for (int i = n; i >= 1; i--) {
        
        fact *= i;       
    }
    printf(" %d\n", fact);  
    return 0;
}