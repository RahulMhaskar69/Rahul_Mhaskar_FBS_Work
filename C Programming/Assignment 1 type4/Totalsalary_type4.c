#include <stdio.h>
double totalsalary_type4(float basic);
int main() 
{    float s ;
    printf("Enter your basic salary : ");
    scanf("%f",&s);
    double total = totalsalary_type4(s);
    printf("Total salary: %.2f\n", total);
    return 0;
}

double totalsalary_type4(float basic)
{
    float da, ta, hra, total;
    if (basic <= 5000)
    {
        da = basic * 0.10; 
        ta = basic * 0.20;  
        hra = basic * 0.25; 
    } else 
    {
        da = basic * 0.15;  
        ta = basic * 0.25;  
        hra = basic * 0.30; 
    }
    total = basic + da + ta + hra;
   return total;
}