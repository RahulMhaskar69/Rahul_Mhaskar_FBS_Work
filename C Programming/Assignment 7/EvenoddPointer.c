#include<stdio.h>
void Evenodd_type3(int *num );
int main()
{ int x ;
    printf("Enter a number : ");
    scanf("%d",&x);
    Evenodd_type3(&x);
    return 0;
}

void Evenodd_type3( int *num)
{ 
     if( *num % 2 == 0)
     {
         printf(" Number is Even");
     }
        else
        {
            printf(" Number is Odd");
        }
}
