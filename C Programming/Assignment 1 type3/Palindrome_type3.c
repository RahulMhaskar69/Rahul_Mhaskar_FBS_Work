#include <stdio.h>
void palindrome_type3( int num );
int main() 
 { int p ; 
   printf("Enter a number : ");
   scanf("%d",&p);   
    palindrome_type3(p);
    return 0 ;
 }

void palindrome_type3(int num)
{
    int first = num / 100;    
    int last = num % 10;    
    if (first == last)
       printf("%d is a Palindrome\n", num);
    else
        printf("%d is not a Palindrome\n", num);
}