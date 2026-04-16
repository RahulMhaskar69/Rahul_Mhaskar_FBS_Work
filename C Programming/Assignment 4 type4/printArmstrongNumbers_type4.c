#include<stdio.h>
int printArmstrongNumbers_type4(int);
int main()
{ int n ;
    printf("Enter the limit: ");
    scanf("%d", &n);
    printArmstrongNumbers_type4(n);
    return 0;
}
int printArmstrongNumbers_type4( int n)
{
    int original = n;   
    int temp = n;
    int digits = 0;
  
    printf("Armstrong numbers between 1 and %d are:\n", n);
    for (int i = 1; i < n; i++) {
        int temp = i;
        int digits = 0;
        while (temp > 0) {
            digits++;
            temp /= 10;
        }
        temp = i;
        int sum = 0;
        while (temp > 0) {
            int digit = temp % 10;
            int power = 1;
            for (int j = 0; j < digits; j++) {
                power *= digit;   
            }
            sum += power;
            temp /= 10;
        }
        if (sum == i) {
            printf("%d ", i);
        }
    }
}