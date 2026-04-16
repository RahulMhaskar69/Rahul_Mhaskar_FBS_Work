#include<stdio.h>
void sumofnumbers_type3(int , int);
int main()
{ int start ;
    int end ;
    printf("Enter the starting number : ");
    scanf("%d" , &start);
    printf("Enter the ending number : ");
    scanf("%d" , &end);
    sumofnumbers_type3(start , end);
    return 0;
}
void sumofnumbers_type3(int start , int end )
{
    int sum = 0 ;
    for(int i = start; i <= end; i++)
    {
      sum = sum + i ;
    }
    printf(" %d", sum);
}