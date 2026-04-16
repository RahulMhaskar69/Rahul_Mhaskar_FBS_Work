#include <stdio.h>
void findgreatest_type1();
int main()
{
    findgreatest_type1();
    return 0;
}

void findgreatest_type1() 
{
    int a = 10; 
    int b = 20;
    int c = 15;
    
    if (a >= b) 
    {
        if (a >= c) printf("Greatest is %d\n", a);
        else printf("Greatest is %d\n", c);
    } else 
    {
        if (b >= c) printf("Greatest is %d\n", b);
        else printf("Greatest is %d\n", c);
    }

}