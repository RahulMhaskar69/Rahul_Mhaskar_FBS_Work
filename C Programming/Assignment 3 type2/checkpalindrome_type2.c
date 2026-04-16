#include <stdio.h>
char* checkpalindrome_type2();

int main() {
    printf("%s", checkpalindrome_type2());
    return 0;
}
char* checkpalindrome_type2() {      
    int n = 121;
    int t1 = n;
    int rev = 0;        

    while (t1 != 0) {
        int digit = t1 % 10;  
        rev = rev * 10 + digit;  
        t1 /= 10;            
    }
    if (rev == n) {
      return "Palindrome number";
    } else {
        return "Not a palindrome number";
    }
}