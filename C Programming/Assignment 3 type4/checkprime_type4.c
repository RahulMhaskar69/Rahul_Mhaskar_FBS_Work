#include<stdio.h>
char* checkprime_type4(int );
int main()
{   int n;
    printf("Enter the number : ");
    scanf("%d" , &n);
    printf("%s", checkprime_type4(n));
    return 0;
}
char* checkprime_type4(int n)
{
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