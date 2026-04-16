#include<stdio.h>
int printPrimenumbers_type4(int n);
int main()
{
    int n;
    printf("Enter the limit: ");
    scanf("%d", &n);
    printPrimenumbers_type4(n);
    return 0;
}
int printPrimenumbers_type4(int n)
{
    int i ;
    printf("prime numbers between 1 and %d are:\n", n);
    for (i = 2; i < n; i++) {
        int j ; 
        for ( j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                break;
            }
        }
        if (j > i / 2) {
            printf("%d ", i);
        }
    }
 }
