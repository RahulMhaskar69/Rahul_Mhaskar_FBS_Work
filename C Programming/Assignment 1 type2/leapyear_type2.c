#include<stdio.h>
#include<stdbool.h>
 bool  leapyear_type2();
 int  main()
 {   
    bool result = leapyear_type2();
    printf("%s\n" , result ? "true " : "false");
    return 0;

 }

bool  leapyear_type2()
 {
    int year = 2024;
    return (( year % 4 == 0 && year % 100 != 0 ) || ( year % 400 == 0));

 }