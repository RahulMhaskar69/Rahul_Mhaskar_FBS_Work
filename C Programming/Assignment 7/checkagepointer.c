#include <stdio.h>
void checkage_type3(int *);
int main() 
{   int age;
    printf("Enter age: ");
    scanf("%d", &age);
    checkage_type3(&age);
    return 0;
}

void checkage_type3(int *age) 
{
    if (*age < 12) printf("Child\n");
    else if (*age <= 19) printf("Teenager\n");
    else if (*age <= 59) printf("Adult\n");
    else 
    printf("Senior\n");
    
}