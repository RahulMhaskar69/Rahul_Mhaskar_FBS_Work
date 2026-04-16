#include<stdio.h>
 void leapyear_type1();
 int main()
 {
      leapyear_type1();
     return 0;
 }

 void leapyear_type1()
 {
    int year = 2024;
    if(( year % 4 == 0 && year % 100 != 0 ) || ( year % 400 == 0))
     printf("It is a leap year");
    else
     printf("It is not a leap year");
    
 }