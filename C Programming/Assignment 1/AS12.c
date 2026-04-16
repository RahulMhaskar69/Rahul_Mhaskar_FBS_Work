#include <stdio.h>
int main() 
 {
    int num = 100;
    int first = num / 100;    
    int last = num % 10;    
    if (first == last)
       printf("%d is a Palindrome\n", num);
    else
        printf("%d is not a Palindrome\n", num);
    return 0;
}