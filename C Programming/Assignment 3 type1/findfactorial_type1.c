#include <stdio.h>
void findfactorial_type1();
int main() {
    findfactorial_type1();
    return 0;
}

void findfactorial_type1() {
    int n = 5;       
    int temp = n;
    int fact = 1;

    for (int i = n; i >= 1; i--) {
        
        fact *= i;       
    }
    printf(" %d\n", fact); 
}