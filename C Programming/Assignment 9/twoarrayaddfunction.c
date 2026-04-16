#include<stdio.h>
void twoarrayadd(int arr[], int brr[] , int crr[] , int n);

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
    twoarrayadd(arr, brr, crr , n);
}
void twoarrayadd(int arr[], int brr[], int crr[], int n)
{
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