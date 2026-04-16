#include<stdio.h>
void sumofnumbers_type1();
int main()
{
    sumofnumbers_type1();
    return 0;
}
void sumofnumbers_type1()
{
    int sum = 0;
    int start = 1;
    int end = 5 ;
    for(int i = start; i <= end; i++)
    {
      sum = sum + i ;
    }
    printf(" %d", sum);
}