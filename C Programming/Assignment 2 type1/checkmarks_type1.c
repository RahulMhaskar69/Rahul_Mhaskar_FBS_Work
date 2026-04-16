#include <stdio.h>
void checkmarks_type1();
int main()
{
    checkmarks_type1();
     return 0;
}
void checkmarks_type1() 
{
    int marks = 65 ;
    if (marks > 75) printf("Distinction\n");
    else if (marks > 65) printf("First Class\n");
    else if (marks > 55) printf("Second Class\n");
    else if (marks >= 40) printf("Pass Class\n");
    else printf("Fail\n");
   
}