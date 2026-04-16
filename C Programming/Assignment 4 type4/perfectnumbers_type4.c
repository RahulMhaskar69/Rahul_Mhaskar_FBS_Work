#include <stdio.h>
int perfectnumbers_type4(int);
int main()
    {
        int n ; 
        printf("Enter the limit: ");
        scanf("%d", &n);
        perfectnumbers_type4(n);
        return 0;
    }
int perfectnumbers_type4(int n) 
{
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