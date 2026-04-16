#include <stdio.h>
int strongnumbers_type4( int n);
int main()
{
    int n;
    printf("Enter the limit: ");
    scanf("%d", &n);
    strongnumbers_type4(n);
    return 0;
}
int factorial (int d)
    {    int f = 1;
    for (int i = 1; i <= d ; i++) {
        
        f *= i;       
    } 
    return f;
}

int strongnumbers_type4( int n){
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