#include <stdbool.h>
#include <stdio.h>
bool personage_type2();
int main() 
{
   bool result = personage_type2();
   printf("%s\n", result ? "Eligible to vote" : "Not eligible to vote");
    return 0;
}
bool personage_type2()
{
     int age = 10;
    if (age >= 18)
        return true;
    else    
        return false;   
}