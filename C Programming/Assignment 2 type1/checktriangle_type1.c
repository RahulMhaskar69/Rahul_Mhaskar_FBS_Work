#include <stdio.h>
void checktriangle_type1();
int main() 
{  
    checktriangle_type1();
    return 0;
}
 
void checktriangle_type1()
{   int s1 = 3; 
    int s2 = 5;
    int s3 = 3;
    
     if (s1 == s2 && s2 == s3)
        printf("Equilateral Triangle\n");
    else if (s1 == s2 || s2 == s3 || s1 == s3)
        printf("Isosceles Triangle\n");
    else
        printf("Scalene Triangle\n");
}