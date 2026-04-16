#include <stdio.h>
int main()
{
    int arr[100], n ;
    int i;
    int min, max;

     printf("enter the number of elements :");
     scanf("%d", &n);

     for(i  = 0 ; i< n ; i++)
     {
        scanf("%d", &arr[i]);
     }
    min = arr[0];
    max = arr[0];

    for (i = 1; i < n; i++)
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
    return 0;
}