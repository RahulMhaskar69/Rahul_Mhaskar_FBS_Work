#include <stdio.h>
char* checknumberdivisible_type4(int);
int main() 
{    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
   char* result = checknumberdivisible_type4(num);
    printf("%s", result);
    return 0;
}
char* checknumberdivisible_type4(int num )   
{
    if (num % 3 == 0 && num % 5 == 0) 
    {
        return "Divisible by both\n";
    }
    else if (num % 3 == 0) 
    {
        return "Divisible by 3 but not by 5\n";
    }
    else if (num % 5 == 0) 
    {
        return "Divisible by 5 but not by 3\n";
    }
    else 
    {
        return "Divisible by None\n";
    }
}
