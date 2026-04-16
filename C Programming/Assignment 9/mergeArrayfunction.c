#include<stdio.h>
void mergearray(int arr[] , int brr[] , int crr[], int n1, int n2);
int main()
{
    int arr[100] , n1 , n2 ;
    int brr[100] ;
    int crr[100] ;
    
    printf("Enter no. of elements in array 1 :");
    scanf("%d" , &n1);
    for( int i = 0 ; i <  n1; i++)
    {
        scanf("%d" , &arr[i]);
    }

    printf("Enter no. of elemrnts in array 2 :");
    scanf("%d" , &n2);
    for( int i = 0 ; i <  n2; i++)
    {
        scanf("%d" , &brr[i]);
    }
   
    mergearray(arr , brr , crr , n1 , n2);
}
void mergearray(int arr[] ,  int brr[],int crr[] , int n1 , int n2)
{
    for(int i = 0 ; i < n1 ; i++ )
    {
        crr[i] = arr[i];
    }

    for(int i = 0 ; i  < n2 ; i++)
    {
        crr[n1 + i]= brr[i];
    }
    printf("mergeed array : \n");
    for(int i = 0; i< n1 + n2 ; i++)
    {
        printf(" %d " , crr[i]);
    }
}