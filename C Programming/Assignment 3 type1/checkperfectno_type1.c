#include <stdio.h>
void checkperfectno_type1();
int main(){
    checkperfectno_type1();
    return 0;
}

void  checkperfectno_type1()
{
    int n = 28;
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