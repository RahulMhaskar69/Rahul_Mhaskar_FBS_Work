#include<stdio.h>
#include<stdbool.h>
bool palindrome_type4(int num);
int main()
{
    int p ;
    printf("Enter the number : ");
    scanf("%d",&p);
   bool result = palindrome_type4(p);
   printf("%s\n ", result ? " Palindrome" : "Not Palindrome");
    return 0;   
}

bool palindrome_type4(int num )
{
    int first = num  ;
     int reverse = 0;
     while ( num != 0)
     {
        int last = num % 10 ;
        reverse = reverse * 10 + last ;
        num = num / 10 ;
     }
    if( first == reverse)
    {
        return true ;
    }
    else
    {
        return false ;
    }
}