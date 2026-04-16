#include <stdio.h>
char* checkarmstrong_type2();
int main()
{
    printf("%s", checkarmstrong_type2());
    return 0;
}

char* checkarmstrong_type2()
{
    int n = 153;        
    int original = n;   
    int temp = n;
    int digits = 0;

    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    temp = n;   
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
        return "It is  an Armstrong number\n";
    } else {
        return "It is not an Armstrong number\n";
    }
}