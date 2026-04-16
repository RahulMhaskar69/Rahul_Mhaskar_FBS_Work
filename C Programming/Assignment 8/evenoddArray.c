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
   
     printf("Odd numnbers from array:");
      for(int i = 0 ; i < n ; i++)
      {
         if(arr[i] % 2 != 0)
         {
            printf(" %d " ,arr[i]);
         }
      }
    printf("\n");

      printf("Even numnbers from array:");
      for(int i = 0 ; i < n ; i++)
      {
         if(arr[i] % 2 == 0)
         {
            printf(" %d " ,arr[i]);
         }
      }
   }