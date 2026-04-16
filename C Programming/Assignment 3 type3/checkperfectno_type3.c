#include <stdio.h>
void checkperfectno_type3(int);
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d" , &n);
    checkperfectno_type3(n);
    return 0;
}

void  checkperfectno_type3(int n)
{
    int sum = 0;
    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }

    if (sum == n) {
        printf("Perfect number\n");
    } else {
        printf("Not a perfect number\n");
    }
}