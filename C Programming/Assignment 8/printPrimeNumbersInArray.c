#include <stdio.h>

int main()
{
    int arr[100], n;

    printf("Enter the number of elements of the array: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Prime numbers from array: ");
    for (int i = 0; i < n; i++)
    {
        int num = arr[i];
        int isPrime = 0;
        if (num <= 1)
        {
            isPrime = 1;
        }
        else
        {
            for (int j = 2; j * j <= num; j++)
            {
                if (num % j == 0)
                {
                    isPrime = 1;
                    break;
                }
            }
        }
        if (isPrime == 0)
        {
            printf("%d ", num);
        }
    }
    return 0;
}