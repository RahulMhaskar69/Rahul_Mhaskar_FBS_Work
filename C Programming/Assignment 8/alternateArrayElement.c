#include<stdio.h>
int main()
{
     int arr[100] , n ;
     printf("Enter the number of elements of the array:");
     scanf("%d", &n);
     for(int i = 0 ; i < n ; i++)
     {
        scanf("%d", &arr[i]);
     }
     if( arr[n] % 2 == 0)
   
     printf("Alternate numnbers from array:");
      for(int i = 0 ; i < n ; i += 2)
      {
         {
            printf(" %d " ,arr[i]);
         }
      }
}