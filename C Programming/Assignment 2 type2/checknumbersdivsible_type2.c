#include <stdio.h>
char* checknumberdivisible_type2();

int main() 
{
    char* result = checknumberdivisible_type2();
    printf("%s", result);
    return 0;
}
char* checknumberdivisible_type2()   
{
    int num = 15 ;
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
