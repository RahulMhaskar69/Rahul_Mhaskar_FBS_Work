#include <stdio.h>
void personage_type3(int age);
int main() 
{ int a ;
    printf("Enter your age : ");
    scanf("%d",&a);
   personage_type3(a);
    return 0;
}

void personage_type3(int age)
{
    if (age >= 18)
        printf("Eligible to vote\n");
    else
        printf("Not eligible to vote\n");
}