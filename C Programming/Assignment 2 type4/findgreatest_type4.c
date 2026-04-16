#include <stdio.h>
int findgreatest_type4(int, int, int);
int main()
{    
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
   int result = findgreatest_type4(a,b,c);
    printf("Greatest is %d\n", result);
    return 0;
}

int findgreatest_type4(int a, int b, int c) 
{
    
    if (a >= b && a >= c)
        return a;
    else if (b >= a && b >= c)
        return b;
    else
        return c;
}