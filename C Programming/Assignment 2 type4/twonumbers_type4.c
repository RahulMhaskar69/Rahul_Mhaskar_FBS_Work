#include <stdio.h>
float Twonumbers_type4(float , float );
int main() 
{    float num1, num2;
     printf("Enter first number: ");
    scanf("%f", &num1);    
    printf("Enter second number: ");
    scanf("%f", &num2);
       float result = Twonumbers_type4(num1, num2);
        printf("Returned Result: %.2f\n", result);
    return 0;
}
 float Twonumbers_type4(float num1, float num2  )
{  
    
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