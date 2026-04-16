#include<stdio.h>
void tableprint_type3(int * , int * );
int main()
{   int n1 ;
    int n2;
    printf("Enter the first number : ");
    scanf("%d" , &n1);
    printf("Enter the second number : ");
    scanf("%d" , &n2);
    tableprint_type3(&n1 , &n2);
    return 0;
}
void tableprint_type3( int *n1 , int *n2)
{
    
    while ( *n1 < *n2)
    {
        if ( *n1 % 5 == 0)
        printf(" %d " , *n1 );
     (*n1)++;
    }
    
}