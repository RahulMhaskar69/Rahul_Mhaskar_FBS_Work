#include<stdio.h>
int main ()
{
     int arr[100] , n ;
     int m ;
    int found = 0;

     printf("Enter the no. of elements of Array:");
     scanf("%d",&n);
     for (int i = 0; i < n; i++)
     {
          scanf("%d",&arr[i]);
     }
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
    return 0;
}