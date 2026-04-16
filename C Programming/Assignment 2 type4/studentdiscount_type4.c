#include <stdio.h>
int studentdiscount_type4(float, char);
int main() 
{   float price;
    char Student = 'y';
     printf("Enter price and student status (y/n): ");
    scanf("%f %c", &price, &Student);
     int result = studentdiscount_type4(price, Student);
    printf("Result: %d\n", result);
    return 0;
}
int studentdiscount_type4(float price, char Student) 
{
    float discount = 0;
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