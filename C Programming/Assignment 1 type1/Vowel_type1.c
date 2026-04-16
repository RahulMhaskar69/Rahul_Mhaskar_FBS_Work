#include <stdio.h>
void checkvowel_type1();
int main() 
{
    checkvowel_type1();
    return 0;
}

void checkvowel_type1()
{
char ch = 'f';
    if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
        printf("%c it is a vowel ", ch);
    else
        printf("%c is not a vowel\n", ch);
}