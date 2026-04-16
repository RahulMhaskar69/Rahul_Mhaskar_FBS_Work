#include<stdio.h>
int  sumofdigits_type2();
int main()
{ int result = sumofdigits_type2();
    printf("%d", result);
    return 0;
}
int sumofdigits_type2()
{ int n = 15;
     int sum = 0;
    int lastno = n % 10;
    int firstno = n;
    while (firstno >= 10) {
        firstno /= 10;
    }
    sum = firstno + lastno; 
    printf(" %d ( %d + %d )\n", sum , firstno, lastno);       
    return sum;
}