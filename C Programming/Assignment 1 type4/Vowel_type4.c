#include <stdio.h>
char* checkvowel_type4(char ch);
int main() 
{  char g;
    printf("Enter a character : ");
    scanf("%c",&g);
    printf("%s\n", checkvowel_type4(g));
    return 0;
}

char* checkvowel_type4(char ch)
{
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    {
        return "Vowel";
    }
    else
    {
        return "Consonant";
    }
}