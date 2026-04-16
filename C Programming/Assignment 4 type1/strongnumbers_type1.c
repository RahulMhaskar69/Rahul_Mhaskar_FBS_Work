#include <stdio.h>
void strongnumbers();
int main()
{
    printf("The strong numbers between 1 and 1000 are: ");
    strongnumbers();
    return 0;
}
int factorial (int d)
    {    int f = 1;
    for (int i = 1; i <= d ; i++) {
        
        f *= i;       
    } 
    return f;
}

void strongnumbers()
{
    int n = 1000;
    for ( int num= 1; num <= n; num++)
   {
    int temp = num;
    int sum = 0;
     
     while (temp > 0) {
        int digit = temp % 10;
        sum += factorial(digit);
        temp /= 10;
    }
   
    if( sum == num)
    {
        printf(" %d", num);
    }
}
} 