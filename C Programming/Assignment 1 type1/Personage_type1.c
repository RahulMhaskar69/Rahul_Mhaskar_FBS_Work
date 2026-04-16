#include <stdio.h>
void personage_type1();
int main() 
{
   personage_type1();
    return 0;
}

void personage_type1()
{
     int age = 10;
    if (age >= 18)
        printf("Eligible to vote\n");
    else
        printf("Not eligible to vote\n");
}