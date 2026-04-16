#include <stdio.h>
char* checkmarks_type2();
int main()
{   
    char* result = checkmarks_type2();
    printf("%s", result);
     return 0;
}
char* checkmarks_type2() 
{    
    int marks = 85;
    if (marks > 75) 
    {
        return "Distinction\n";
    }
    else if (marks > 65) 
    { 
        return "First Class\n";
    }
    else if (marks > 55) 
    {
        return "Second Class\n";
    }
    else if (marks >= 40) 
    {
        return "Pass Class\n";
    }
    else 
    {
        return "Fail\n";
    }
   
}
