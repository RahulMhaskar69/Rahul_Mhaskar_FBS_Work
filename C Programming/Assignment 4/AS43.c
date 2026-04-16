#include <stdio.h>

int main() {
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
    return 0;
}