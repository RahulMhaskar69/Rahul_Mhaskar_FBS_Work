#include<stdio.h>
#include<string.h>
int main()
{
    char str1[20];
    char ch;
        printf("Enter the string : ");
        scanf("%s" , str1);
        printf("Enter which character  you want to replace in string:");
        scanf(" %c" , &ch);

      for( int i = 0 ; str1[i] != '\0' ; i++)
        {
            if ( str1[i] == ch)
            {
                str1[i] = '*';
            }
        }
        printf("The updated string is : %s " , str1);

}