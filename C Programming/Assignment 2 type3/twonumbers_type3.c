#include <stdio.h>
void Twonumbers_type3(float num1, float num2);
int main() 
{    float num1, num2;
     printf("Enter first number: ");
    scanf("%f", &num1);    
    printf("Enter second number: ");
    scanf("%f", &num2);
     Twonumbers_type3(num1, num2);
    return 0;
}
 void Twonumbers_type3(float num1, float num2)
 {  
    float result;
    char op;
    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &op);  
    if (op == '+') 
    {
        result = num1 + num2;
        printf("Result: %.2f\n", result);
    } 
    else if (op == '-') 
    {
        result = num1 - num2;
        printf("Result: %.2f\n", result);
    } 
    else if (op == '*') 
    {
        result = num1 * num2;
        printf("Result: %.2f\n", result);
    } 
    else if (op == '/') 
    {
        if (num2 != 0) {
            result = num1 / num2;
            printf("Result: %.2f\n", result);
        } else {
            printf("Error: Division by zero is not allowed.\n");
        }
    } 
    else if (op == '%') 
    {
        int n1 = (int)num1;
        int n2 = (int)num2;
        if (n2 != 0) 
        {
            printf("Result (Integer Modulo): %d\n", n1 % n2);
        } else 
        {
            printf("Error: Division by zero.\n");
        }
    } 
    else 
    {
        printf("Error: Invalid Operator entered.\n");
    }
}