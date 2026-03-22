#include <stdio.h>
int main() 
{
    int total_minutes = 135;
    int hours = total_minutes / 60;
    int mins = total_minutes % 60;
    printf("%d minutes = %d hours and %d minutes\n", total_minutes, hours, mins);
    return 0;
}