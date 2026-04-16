#include <stdio.h>
void findgreatest_type3(int * , int * , int *);
int main()
{    
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    findgreatest_type3(&a,&b,&c);
    return 0;
}

void findgreatest_type3(  int *a, int *b, int *c) 
{
    if (*a >= *b) 
    {
        if (*a >= *c) printf("Greatest is %d\n", a);
        else printf("Greatest is %d\n", *c);
    } else 
    {
        if (*b >= *c) printf("Greatest is %d\n", b);
        else printf("Greatest is %d\n", *c);
    }

}