#include<stdio.h>
void sumofdigits_type3(int);
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    sumofdigits_type3(n);
    return 0;
}
void sumofdigits_type3(int n )
{
    int sum = 0;
    int lastno = n % 10;
    int firstno = n;
    while (firstno >= 10) {
        firstno /= 10;
    }
    sum = firstno + lastno; 
    printf(" %d ( %d + %d )\n", sum , firstno, lastno);       
}