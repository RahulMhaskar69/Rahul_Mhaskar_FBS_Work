#include<stdio.h>
int main()
{
     int arr[100] , n ;
     int sum = 0;
     printf("Enter the number of elements of the array:");
     scanf("%d", &n);
     for(int i = 0 ; i < n ; i++)
     {
        scanf("%d", &arr[i]);
     }

     for ( int i = 0 ; i < n ; i++)
     {
        sum = sum + arr[i];
     }   
   printf("Sum of array elements  = %d " , sum);
   return 0 ;
}