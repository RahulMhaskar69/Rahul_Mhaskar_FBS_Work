#include <stdio.h>
int main() 
{
    float price, discount = 0;
    char Student;
    printf("Enter price and student status (y/n): ");
    scanf("%f %c", &price, &Student);
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
    return 0;
}