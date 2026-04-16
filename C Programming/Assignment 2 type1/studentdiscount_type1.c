#include <stdio.h>
void studentdiscount_type1();
int main() 
{
    studentdiscount_type1();
    return 0;
}
void studentdiscount_type1() 
{
    float price = 530;
    float discount = 0;
    char Student = 'y';
    if (Student == 'y' || Student == 'Y') 
    {
        if (price > 500) discount = 0.20; 
        else discount = 0.10;           
    } else 
    {   
        if (price > 600) discount = 0.15; 
        else discount = 0.0;           
    }
    printf("Final Price: %.2f\n", price - (price * discount));
}