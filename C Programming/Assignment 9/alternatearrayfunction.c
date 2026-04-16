#include<stdio.h>
void alternatearray(int arr[], int n) ;
int main()
{
     int arr[100] , n ;
     printf("Enter the number of elements of the array:");
     scanf("%d", &n);
     for(int i = 0 ; i < n ; i++)
     {
        scanf("%d", &arr[i]);
     }
     alternatearray(arr , n);
     return 0;
}
void alternatearray(int arr[], int n)
  {   
     printf("Alternate numnbers from array:");
      for(int i = 0 ; i < n ; i += 2)
      {
         {
            printf(" %d " ,arr[i]);
         }
      }
}