#include <stdio.h>
char* checkage_type4(int);
int main() 
{   int age;
    printf("Enter age: ");
    scanf("%d", &age);
    char* result = checkage_type4(age);
    printf("%s", result);
    return 0;
}

char* checkage_type4(int age) 
{
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