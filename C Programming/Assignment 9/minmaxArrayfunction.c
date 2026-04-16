#include <stdio.h>
void minmaxarray(int arr[] , int n );
int main()
{
    int arr[100], n ;
    int i;

     printf("enter the number of elements :");
     scanf("%d", &n);

     for(i  = 0 ; i< n ; i++)
     {
        scanf("%d", &arr[i]);
     }
     

     minmaxarray(arr , n);
    }

void minmaxarray(int arr[] , int n)
{   int min , max ;
    min = arr[0];
    max = arr[0];

    for ( int i = 1; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }

        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    printf("Minimum = %d\n", min);
    printf("Maximum = %d", max);
}