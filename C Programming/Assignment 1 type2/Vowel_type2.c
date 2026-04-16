#include <stdio.h>
char* checkvowel_type2();
int main() 
{
    printf("%s\n", checkvowel_type2());
    return 0;
}

char* checkvowel_type2()
{
char ch = 'f';
    if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
        return "vowel";
    else
        return "not a vowel";
}       
    