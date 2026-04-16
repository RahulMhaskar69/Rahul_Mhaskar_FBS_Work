#include <stdio.h>
int main() 
{
    char ch = '0';
    if (ch >= 'A' && ch <= 'Z')
        printf("%c is Uppercase\n", ch);
    else if (ch >= 'a' && ch <= 'z')
        printf("%c is Lowercase\n", ch);
    else
        printf("Not a letter\n");
    return 0;
}