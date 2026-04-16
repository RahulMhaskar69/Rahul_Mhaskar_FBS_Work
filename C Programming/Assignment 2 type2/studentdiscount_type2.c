#include <stdio.h>
int studentdiscount_type2();
int main() 
{   
    int result = studentdiscount_type2();
    printf("Result: %d\n", result);
    return 0;
}
int studentdiscount_type2() 
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
   float finalPrice = price - (price * discount);
    return (int)finalPrice;  
}