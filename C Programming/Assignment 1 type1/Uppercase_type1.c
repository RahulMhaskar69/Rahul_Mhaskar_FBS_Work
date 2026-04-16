#include <stdio.h>
void checkUppercase_type1();
int main() 
{
    checkUppercase_type1();
    return 0;
}

void checkUppercase_type1()
{
    char ch = '0';
    if (ch >= 'A' && ch <= 'Z')
        printf("%c is Uppercase\n", ch);
    else if (ch >= 'a' && ch <= 'z')
        printf("%c is Lowercase\n", ch);
    else
        printf("Not a letter\n");
}