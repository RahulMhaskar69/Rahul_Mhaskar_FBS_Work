#include<stdio.h>
void primenumbers_type3(int , int );
int main(){
     int n1 ; 
     int n2 ;
     printf("Enter the first number : ");;
     scanf("%d" , &n1);
        printf("Enter the second number : ");   
        scanf("%d" , &n2);
    primenumbers_type3(n1 ,n2);
    return 0;
}
void primenumbers_type3( int n1 , int n2)
{
    while ( n1 <= n2)
    {  
        int isPrime = 1 ;
        if (n1 <= 1)
            isPrime = 0;
        else
        {
            for (int i = 2; i * i <= n1; i++)
            {
                if (n1 % i == 0)
                {
                    isPrime = 0;
                    break;
                }
            }
        }
        if (isPrime)
        {
            printf(" %d ", n1);
        }
        n1++;
}
}