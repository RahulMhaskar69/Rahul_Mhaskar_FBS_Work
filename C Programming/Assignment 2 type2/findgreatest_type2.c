#include <stdio.h>
int findgreatest_type2();
int main()
{   
    int result = findgreatest_type2();
    printf("Greatest is %d\n", result);
    return 0;
}

int findgreatest_type2() 
{
    int a = 10; 
    int b = 20;
    int c = 15;
    
    if (a >= b && a >= c)
        return a;
    else if (b >= a && b >= c)
        return b;
    else
        return c;
}