#include <stdio.h>
double totalsalary_type2();
int main() 
{
    double result  = totalsalary_type2();
    printf("Total Salary: %.2lf\n", result);    
    return 0;
}

double totalsalary_type2()
{
     float basic = 6000;
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