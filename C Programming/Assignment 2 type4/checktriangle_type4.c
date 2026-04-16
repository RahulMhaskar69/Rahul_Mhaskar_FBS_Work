#include <stdio.h>
char* checktriangle_type4(int, int , int );
int main() 
{  
    int s1, s2, s3;
    printf("Enter three sides: ");
    scanf("%d %d %d", &s1, &s2, &s3);
      char* result = checktriangle_type4(s1, s2, s3);
    printf("%s", result);   
    return 0;
}
 
char* checktriangle_type4(int s1, int s2, int s3 )
{   
     if (s1 == s2 && s2 == s3)
     {   
         return "Equilateral Triangle\n";
    }
    else if (s1 == s2 || s2 == s3 || s1 == s3)
       { return "Isosceles Triangle\n";
       }else
       {
        return "Scalene Triangle\n";
       }
    }