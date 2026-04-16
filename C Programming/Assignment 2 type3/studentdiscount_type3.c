#include <stdio.h>
void studentdiscount_type3(float, char);
int main() 
{   float price;
    char Student = 'y';
     printf("Enter price and student status (y/n): ");
    scanf("%f %c", &price, &Student);
    studentdiscount_type3( price, Student );
    return 0;
}
void studentdiscount_type3( float price, char Student ) 
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
    printf("Final Price: %.2f\n", price - (price * discount));
}