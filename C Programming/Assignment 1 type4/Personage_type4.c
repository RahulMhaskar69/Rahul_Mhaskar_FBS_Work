#include <stdio.h>
#include <stdbool.h>
bool personage_type4(int age);
int main() 
{ int a ;
    printf("Enter your age : ");
    scanf("%d",&a);
   bool result = personage_type4(a);
   printf("%s\n", result ? "Eligible to vote" : "Not eligible to vote");
    return 0;
}

bool personage_type4(int age)
{
     if (age >= 18)
        return true;
    else    
        return false;   
}
    