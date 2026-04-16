#include<stdio.h>
void printarmstrongnumbers_type1();
int main()
{
    printarmstrongnumbers_type1();
    return 0;
}
void printarmstrongnumbers_type1()
{
    int n =200;      
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