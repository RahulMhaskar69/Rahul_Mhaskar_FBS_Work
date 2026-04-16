#include <stdio.h>
void checkage_type1();
int main() 
{
    checkage_type1();
    return 0;
}

void checkage_type1() 
{
    int age = 60;
    if (age < 12) printf("Child\n");
    else if (age <= 19) printf("Teenager\n");
    else if (age <= 59) printf("Adult\n");
    else 
    printf("Senior\n");
    
}