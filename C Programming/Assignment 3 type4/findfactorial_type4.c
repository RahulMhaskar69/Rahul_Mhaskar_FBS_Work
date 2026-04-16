#include <stdio.h>
int findfactorial_type4(int);
int main()
{   
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
     findfactorial_type4(n );
    return 0;
}

int findfactorial_type4(int n)
{
      
    int temp = n;
    int fact = 1;

    for (int i = n; i >= 1; i--) {
        
        fact *= i;       
    }
    printf(" %d\n", fact); 
}