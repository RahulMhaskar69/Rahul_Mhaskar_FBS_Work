#include<stdio.h>
void printprimenumbers_type1();
int main()
{
    printprimenumbers_type1();
    return 0;
}
void printprimenumbers_type1()
{
    int n = 100;
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
