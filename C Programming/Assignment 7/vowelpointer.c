#include <stdio.h>
void checkvowel_type3(char *ch);
int main() 
{  char g;
    printf("Enter a character : ");
    scanf("%c",&g);
    checkvowel_type3(&g);
    return 0;
}

void checkvowel_type3(char *ch)
{
    char c1 = *ch;
    if (c1=='a'||c1=='e'||c1=='i'||c1=='o'||c1=='u'||c1=='A'||c1=='E'||c1=='I'||c1=='O'||c1=='U')
        printf("%c  is a vowel ", *ch);
    else
        printf("%c is not a vowel\n", *ch);
}
