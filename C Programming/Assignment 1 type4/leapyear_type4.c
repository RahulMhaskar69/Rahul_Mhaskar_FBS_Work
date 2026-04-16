#include<stdbool.h>
#include<stdio.h>
 bool leapyear_type4(int year);
 int main()
 { int x ;
    printf("enter the year :");
    scanf("%d",&x);
     leapyear_type4(x);
      bool result = leapyear_type4(x);
    printf("%s\n" , result ? "leap year" : "not a leap year");
    return 0;
 }

 bool leapyear_type4 (int year)
 {
    return (( year % 4 == 0 && year % 100 != 0 ) || ( year % 400 == 0));
 }