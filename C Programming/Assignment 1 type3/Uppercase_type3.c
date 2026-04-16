#include <stdio.h>
void checkUppercase_type3(char ch);
int main() 
{  char c;
    printf("Enter a character : ");
    scanf("%c",&c);
    checkUppercase_type3(c);
    return 0;
}

void checkUppercase_type3(char ch)
{
    if (ch >= 'A' && ch <= 'Z')
        printf("%c is Uppercase\n", ch);
    else if (ch >= 'a' && ch <= 'z')
        printf("%c is Lowercase\n", ch);
    else
        printf("Not a letter\n");
}