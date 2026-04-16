#include<stdio.h>
int main()
{
    int sum = 0;
    int start = 1;
    int end = 5 ;
    for(int i = start; i <= end; i++)
    {
      sum = sum + i ;
    }
    printf(" %d", sum);
    return 0;
}