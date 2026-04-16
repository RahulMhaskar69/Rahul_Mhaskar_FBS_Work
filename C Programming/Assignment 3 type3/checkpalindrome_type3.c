#include <stdio.h>
void checkpalindrome_type3(int);
    
int main() {
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    checkpalindrome_type3(n);
    return 0;
}

void checkpalindrome_type3(int n ) 
{      
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