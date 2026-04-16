#include<stdio.h>
char* Evenodd_type4(int num);
int main()
{
    int x ; 
    printf("Entera number : ");
    scanf("%d", &x);
    printf("%s", Evenodd_type4(x));
    return 0;
}

char* Evenodd_type4(int num)
{
    if(num % 2 == 0)
    {
        return "Even";
    }
    else
    {
        return "Odd";
    }
}