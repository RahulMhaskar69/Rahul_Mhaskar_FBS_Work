#include <stdio.h>
char* checktriangle_type2();
int main() 
{  
    char* result = checktriangle_type2();
    printf("%s", result);   
    return 0;
}
 
char* checktriangle_type2()
{   int s1 = 3; 
    int s2 = 5;
    int s3 = 3;
    
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