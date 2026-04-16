#include <stdio.h>
char* checkmarks_type4(int);
int main()
{   
    int marks;
    printf("Enter marks: ");
    scanf("%d", &marks);
   char* result = checkmarks_type4(marks);
    printf("%s", result);
     return 0;
}
char* checkmarks_type4(int marks) 
{   
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