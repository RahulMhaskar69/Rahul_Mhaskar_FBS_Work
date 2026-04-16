#include <stdio.h>
void checktriangle_type3( int s1, int s2, int s3);
int main() 
{  
    int s1, s2, s3;
    printf("Enter three sides: ");
    scanf("%d %d %d", &s1, &s2, &s3);
    checktriangle_type3(s1, s2, s3);
    return 0;
}
 
void checktriangle_type3(int s1, int s2, int s3)
{    if (s1 == s2 && s2 == s3)
        printf("Equilateral Triangle\n");
    else if (s1 == s2 || s2 == s3 || s1 == s3)
        printf("Isosceles Triangle\n");
    else
        printf("Scalene Triangle\n");
}