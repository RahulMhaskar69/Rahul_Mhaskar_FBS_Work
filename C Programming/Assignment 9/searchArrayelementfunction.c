#include<stdio.h>
void searcarrayelement(int arr[], int n);

int main ()
{
     int arr[100] , n ;
     printf("Enter the no. of elements of Array:");
     scanf("%d",&n);
     for (int i = 0; i < n; i++)
     {
          scanf("%d",&arr[i]);
     }
      searcharrayelement(arr , n);
}
void searcharrayelement(int arr[] , int n)
{    int m ;
    int found = 0;
     printf("Enter the element to be searched:");
     scanf("%d",&m);

     for(int i = 0 ; i < n ; i++)
     {
        if (m == arr[i])
        {
            printf("element found at Index : %d" ,i);
            found = 1;
            break;
        }
     }
    if( found == 0 ){
        printf("element not found");
    } 
}