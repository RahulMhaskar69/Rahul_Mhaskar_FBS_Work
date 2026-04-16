#include<stdio.h>
void checkprime_type1();
int main()
{
    checkprime_type1();
    return 0;
}
void checkprime_type1()
{
    int n = 7;
    int i ;

    if (n <= 1)
    {
        printf(" not a prime number ");
    }
     for (int i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
             printf(" not a  prime number ");
           
            }
        }
    printf("  prime number ");
}