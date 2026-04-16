#include <stdio.h>
int main() 
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
    printf("Basic: %.2f\nDA: %.2f\nTA: %.2f\nHRA: %.2f\n", basic, da, ta, hra);
    printf("Total Salary: %.2f\n", total);
    return 0;
}