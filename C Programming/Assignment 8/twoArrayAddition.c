#include<stdio.h>
int main()
{
    int arr[100] , n ;
    int brr[100] ;
    int crr[100] ;
    
    printf("Enter no. of elements in array 1 :");
    scanf("%d" , &n);
    for( int i = 0 ; i <  n; i++)
    {
        scanf("%d" , &arr[i]);
    }

    printf("Enter no. of elements in array 2 :");
    scanf("%d" , &n);
    for( int i = 0 ; i <  n; i++)
    {
        scanf("%d" , &brr[i]);
    }

    for(int i = 0 ; i < n ; i++ )
    { 
        crr[i] = arr[i] + brr[i];
    }
    printf("Sum of Array #crr : \n");
    for( int i  = 0 ; i  < n ; i++)
    {
        printf(" %d" , crr[i]);
    }
}