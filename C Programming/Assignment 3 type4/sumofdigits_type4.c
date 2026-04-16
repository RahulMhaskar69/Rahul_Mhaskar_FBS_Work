#include <stdio.h>
int sumofdigits_type4(int);
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);

    int result = sumofdigits_type4(n);
    printf("Sum = %d\n", result);

    return 0;
}

int sumofdigits_type4(int n)
{
    int sum = 0;
    int lastno = n % 10;
    int firstno = n;
    while (firstno >= 10) {
        firstno /= 10;
    }

    sum = firstno + lastno;

    printf("%d (%d + %d)\n", sum, firstno, lastno);

    return sum;
}