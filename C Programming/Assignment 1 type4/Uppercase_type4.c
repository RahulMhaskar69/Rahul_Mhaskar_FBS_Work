#include <stdio.h>
char* checkUppercase_type4(char ch);
int main() 
{  char c;
    printf("Enter a character : ");
    scanf("%c",&c);
    printf("%s\n", checkUppercase_type4(c));
    return 0;
}
char* checkUppercase_type4(char ch)
{  
    if (ch >= 'A' && ch <= 'Z')
            return "Uppercase letter";
    else if (ch >= 'a' && ch <= 'z')
        return "Lowercase letter";
    else
        return "Not a letter";
}