#include <stdio.h>
void totalsalary_type3(float *basic);
int main() 
{    float s ;
    printf("Enter your basic salary : ");
    scanf("%f",&s);
    totalsalary_type3(&s);
    return 0;
}

void totalsalary_type3(float *basic)
{     
    float da, ta, hra, total;
    float b = *basic;
    if (b <= 5000)
    {
        da = b * 0.10; 
        ta = b * 0.20;  
        hra = b * 0.25; 
    } else 
    {
        da = b * 0.15;  
        ta = b * 0.25;  
        hra = b * 0.30; 
    }
    total =  b + da + ta + hra;
    printf("Basic: %.2f\nDA: %.2f\nTA: %.2f\nHRA: %.2f\n", *basic, da, ta, hra);
    printf("Total Salary: %.2f\n", total);
}