#include <stdio.h>
char* checkUppercase_type2();
int main() 
{
    printf("%s\n",checkUppercase_type2());
    return 0;
}

char* checkUppercase_type2()
{
    char ch = '0';
    if (ch >= 'A' && ch <= 'Z')
            return "Uppercase letter";
    else if (ch >= 'a' && ch <= 'z')
        return "Lowercase letter";
    else
        return "Not a letter";
}