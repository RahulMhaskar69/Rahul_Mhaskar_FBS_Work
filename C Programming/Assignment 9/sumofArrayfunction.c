#include<stdio.h>
void sumofarray(int arr[], int n);
int main()
{
     int arr[100] , n ;
     printf("Enter the number of elements of the array:");
     scanf("%d", &n);
     for(int i = 0 ; i < n ; i++)
     {
        scanf("%d", &arr[i]);
     }
    sumofarray(arr , n);
   }
void sumofarray(int arr[] ,int n)
{    int sum = 0;
     for ( int i = 0 ; i < n ; i++)
     {
        sum = sum + arr[i];
     }   
   printf("Sum of array elements  = %d " , sum);
}