#include <stdio.h>
int main() 
{
    float m1=85, m2=90, m3=78, m4=92, m5=88;
    float total = m1 + m2 + m3 + m4 + m5;
    float percentage = (total / 500) * 100;
    printf("Total Marks: %.2f\n", total);
    printf("Percentage: %.2f%%\n", percentage);
    return 0;
}