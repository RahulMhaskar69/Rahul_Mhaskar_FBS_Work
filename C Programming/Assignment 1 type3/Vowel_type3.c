#include <stdio.h>
void checkvowel_type3(char ch);
int main() 
{  char g;
    printf("Enter a character : ");
    scanf("%c",&g);
    checkvowel_type3(g);
    return 0;
}

void checkvowel_type3(char ch)
{

    if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
        printf("%c  is a vowel ", ch);
    else
        printf("%c is not a vowel\n", ch);
}