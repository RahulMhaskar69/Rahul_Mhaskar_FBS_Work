#include <stdio.h>
char* checkpalindrome_type4(int);

int main() {
     int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    printf("%s" ,checkpalindrome_type4(n));
    return 0;
}
char* checkpalindrome_type4(int n) {      
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