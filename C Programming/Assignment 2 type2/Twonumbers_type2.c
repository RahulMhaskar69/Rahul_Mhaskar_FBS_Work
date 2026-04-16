#include <stdio.h>

float Twonumbers_type2();

int main() 
{    
        float result = Twonumbers_type2();
        printf("Returned Result: %.2f\n", result);
    return 0;
}

float Twonumbers_type2()
{  
    float num1 = 25.50; 
    float num2 = 50.55; 
    float result = 0;
    char op;

    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &op);  

    if (op == '+') 
    {
        result = num1 + num2;
    } 
    else if (op == '-') 
    {
        result = num1 - num2;
    } 
    else if (op == '*') 
    {
        result = num1 * num2;
    
    } 
    else if (op == '/') 
    {
        if (num2 != 0) 
        {
            result = num1 / num2;

        } 
        else 
        {
           return 0;
        }
    } 
    else if (op == '%') 
    {
        int n1 = (int)num1;
        int n2 = (int)num2;
        if (n2 != 0) 
        {
            return n1 % n2;
           
        } 
        else 
        {
            printf("Error: Division by zero.\n");
            return 0;
        }
    } 
    else 
    {
        printf("Error: Invalid Operator entered.\n");
        return 0;
    }

    return (float)result; 
}