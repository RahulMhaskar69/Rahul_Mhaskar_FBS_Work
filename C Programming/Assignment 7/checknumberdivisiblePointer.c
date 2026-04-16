#include <stdio.h>
void checknumberdivisible_type3(int*);
int main() 
{    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    checknumberdivisible_type3(&num);
    return 0;
}
void checknumberdivisible_type3(int *num)   
{
    if (*num % 3 == 0 && *num % 5 == 0) printf("Divisible by both\n");
    else if (*num % 3 == 0) printf("Divisible by 3 but not by 5\n");
    else if (*num % 5 == 0) printf("Divisible by 5 but not by 3\n");
    else 
    printf("Divisible by None\n");
}
