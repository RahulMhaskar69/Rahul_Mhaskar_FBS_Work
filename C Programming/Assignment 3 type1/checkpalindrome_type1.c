#include <stdio.h>
void checkpalindrome_type1();

int main() {
    checkpalindrome_type1();
    return 0;
}
void checkpalindrome_type1() {      
    int n = 121;
    int t1 = n;
    int rev = 0;        

    while (t1 != 0) {
        int digit = t1 % 10;  
        rev = rev * 10 + digit;  
        t1 /= 10;            
    }
    if (rev == n) {
        printf("Palindrome number\n");
    } else {
        printf("Not a palindrome number\n");
    }
}