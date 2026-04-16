#include <stdio.h>
int findfactorial_type2();
int main()
{
     findfactorial_type2();
    return 0;
}

int findfactorial_type2(){
    int n = 5;       
    int temp = n;
    int fact = 1;

    for (int i = n; i >= 1; i--) {
        
        fact *= i;       
    }
    printf(" %d\n", fact); 
}