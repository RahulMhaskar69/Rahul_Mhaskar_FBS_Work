#include<stdio.h>
void checkprime_type3(int );
int main()
{ int n ;
    printf("Enter the number : ");
    scanf("%d" , &n);
    checkprime_type3(n);
    return 0;
}
void checkprime_type3(int n)
{
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