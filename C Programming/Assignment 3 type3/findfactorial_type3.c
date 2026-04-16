#include <stdio.h>
void findfactorial_type3(int);
int main() {
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    findfactorial_type3(n);
    return 0;
}

void findfactorial_type3(int n) 
{  
    long long int fact = 1;

    for (int i = n; i >= 1; i--) {
        
        fact *= i;       
    }
    printf(" %d\n", fact); 
}