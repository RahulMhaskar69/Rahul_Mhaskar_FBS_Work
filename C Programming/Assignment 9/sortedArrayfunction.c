#include<stdio.h>
void sortedarray(int arr[] , int n);

int main()
{
    int arr[100] , n ;
    printf("Enter number of elements in array");
    scanf("%d" , &n);
    for(int i = 0 ; i < n ; i++)
    {
        scanf("%d",&arr[i]);
    }
    sortedarray(arr , n);
}
void sortedarray(int arr[] , int n)
{ int temp;
    for(int i = 0 ; i < n - 1; i++)
    {
        for(int j = 0 ; j < n - 1 ; j++ )
        {
            if ( arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("Sorterd array : \n");
    for(int i = 0 ; i < n ; i++)
    {
        printf(" %d " , arr[i]);
    }
}