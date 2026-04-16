#include<stdio.h>
void sumofdigits_type1();
int main()
{
    sumofdigits_type1();
    return 0;
}
void sumofdigits_type1()
{
     int sum , firstno , lastno;
     int n = 12345 ;
    lastno =  n % 10;
    firstno = n / 10000;
    sum = firstno + lastno; 
    printf(" %d ( %d + %d )\n", sum , firstno, lastno);       
}