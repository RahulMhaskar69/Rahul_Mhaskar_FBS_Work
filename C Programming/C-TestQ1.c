#include<stdio.h>
int main()
{
    int n1 ; 
    int sum = 0;
    int i;
    printf("Enter the range last  number : ");
    scanf("%d" , &n1);
   
    for( int i = 2 ; i <= n1 ; i++ )
    {  int j ;
      for( j = 2 ; j <= i / 2; j++)
      {
          if(i % j == 0)
          {
              break;
          }
      }
      if( j > i / 2)
      {    
          sum = sum + i;
      }
      }
        printf("prime numbers sum : %d",sum);
}