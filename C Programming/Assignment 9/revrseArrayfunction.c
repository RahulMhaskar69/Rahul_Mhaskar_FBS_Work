#include<stdio.h>
void reversearray(int arr[],int n );
int main()
{
    int arr[100] , n ;
    printf("Enter the number of Array :");
    scanf("%d", &n);
    for(int i = 0 ; i < n ; i++)
    {
        scanf("%d" , &arr[i]);
    }
    reversearray(arr , n );
}
void reversearray(int arr[], int n)
{ int temp;
    for(int i = 0 ; i < n / 2 ; i++)
    {
        temp  = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp ;
    }

    printf("Reversed Array : ");
    for( int i = 0 ; i < n  ; i++ )
    {
        printf(" %d ", arr[i]);
    }
}