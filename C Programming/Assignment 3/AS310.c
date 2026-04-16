#include<stdio.h>
int main()
{
     int sum , firstno , lastno;
     int n = 12345 ;
    lastno =  n % 10;
    firstno = n / 10000;
    sum = firstno + lastno; 
    printf(" %d ( %d + %d )\n", sum , firstno, lastno);
    return 0;       
}