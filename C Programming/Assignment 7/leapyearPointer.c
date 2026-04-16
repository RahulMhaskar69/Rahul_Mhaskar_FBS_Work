#include<stdio.h>
 void leapyear_type3(int *year);
 int main()
 { int x ;
    printf("enter the year :-");
    scanf("%d",&x);
     leapyear_type3(&x);
     return 0;
 }

 void leapyear_type3(int *year)
 { printf ( " %d ", *year);
    if(( *year % 4 == 0 && *year % 100 != 0 ) || ( *year % 400 == 0))
     printf("It is a leap year");
    else
     printf("It is not a leap year");
    
 }