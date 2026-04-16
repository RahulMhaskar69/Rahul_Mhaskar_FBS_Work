#include <stdio.h>
void perfectNumbers();
int main()
{
    printf("Perfect numbers between 1 and 100 are: ");
    perfectNumbers();
    return 0;
}
void perfectNumbers() {
    int n = 100;
     
    for ( int  i = 1 ; i <= n ; i++)
    {
        int sum = 0;
         
        for ( int  j = 1 ; j <= i / 2 ; j++)
        {
            if (i % j == 0)
            {
                sum += j;
            }
        }
        if (sum == i)
        {
            printf("%d ", i);
        }
    }
}