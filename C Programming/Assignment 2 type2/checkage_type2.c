#include <stdio.h>
char* checkage_type2();
int main() 
{
    char* result = checkage_type2();
    printf("%s", result);
    return 0;
}

char* checkage_type2() 
{
    int age = 60;
    if (age < 12) 
     {
        return "Child\n";
     }
    else if (age <= 19) 
    { 
        return "Teenager\n";
    }
    else if (age <= 59) 
    {
        return "Adult\n";
    }
    else 
    {
        return "Senior\n";
    }
    
}