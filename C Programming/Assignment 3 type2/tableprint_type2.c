#include<stdio.h>
int tableprint_type2();
int main()
{   tableprint_type2();
    return 0;
}
int tableprint_type2()
{
    int n = 5;
    while ( n < 51)
    {
        if ( n % 5 == 0)
        printf(" %d " ,n );
     n++;
    }
    return 0;
}