#include<stdio.h>
char* checkprime_type2();
int main()
{
    printf("%s", checkprime_type2());
    return 0;
}
char* checkprime_type2()
{
    int n = 7;
    int i ;

    if (n <= 1)
    {
        return " Not a prime number ";
    }
     for (int i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
              return " Not a prime number ";
            }
        }
    return " Prime number ";
}