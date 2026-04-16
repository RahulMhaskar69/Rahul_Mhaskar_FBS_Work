#include <stdio.h>
void checkstrongno_type3(int *);
int main() {
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    checkstrongno_type3(&n);
    return 0;
}
 void checkstrongno_type3(int *n)
 {
    int sum = 0;       
    int temp = *n;
    int factorial (int d){
        int f = 1;
    for (int i = 1; i <= d ; i++) {
        
        f *= i;       
    } 
    return f;
}
     while (temp > 0) {
        int digit = temp % 10;
        sum += factorial(digit);
        temp /= 10;
    }
    if( sum == *n)
    {
        printf(" it is a strong number\n");
    }
    else
    {
        printf(" it is not a strong number\n");     

    }
}