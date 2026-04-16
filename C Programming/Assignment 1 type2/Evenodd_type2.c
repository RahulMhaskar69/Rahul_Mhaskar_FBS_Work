#include<stdio.h>
 char* Evenodd_type2();
int main()
{
    printf("%s\n", Evenodd_type2());
    return 0;
}

 char* Evenodd_type2()
{
     int num =  10 ;
     if( num % 2 == 0)
     {
        return "Even";
     }
        else
        {
           return "Odd";
        }
}
