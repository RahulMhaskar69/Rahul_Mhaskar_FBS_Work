#include<stdbool.h>
#include <stdio.h>
bool palindrome_type2();
int main() 
 {
   bool result = palindrome_type2();
   printf("%s\n", result  ? "Palindrome" : "Not a palindrome");
   return 0;
 }

bool palindrome_type2()
{
    int num = 100;
    int first = num / 100;    
    int last = num % 10;  
    if (first == last)
        return true;
    else
        return false ;
}