#include <stdio.h>
void checkarmstrong_type3(int *);
int main()
{  int n;
    printf("Enter the number : ");
    scanf("%d" , &n);
    checkarmstrong_type3(&n);
    return 0;
}

void checkarmstrong_type3(int *n)
{      
    int original = *n;   
    int temp = *n;
    int digits = 0;

    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    temp = *n;   
    int sum = 0;
    while (temp > 0) {
        int digit = temp % 10;
        int power = 1;
        for (int i = 0; i < digits; i++) {
            power *= digit;   
        }
        sum += power;
        temp /= 10;
    }
    if (sum == original) {
        printf("It is  an Armstrong number\n", original);
    } else {
        printf("It is not an Armstrong number\n", original);
    }
}