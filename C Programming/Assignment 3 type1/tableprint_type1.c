#include<stdio.h>
void tableprint_type1();
int main()
{
    tableprint_type1();
    return 0;
}
void tableprint_type1()
{
    int n = 5;
    while ( n < 51)
    {
        if ( n % 5 == 0)
        printf(" %d " ,n );
     n++;
    }
    
}