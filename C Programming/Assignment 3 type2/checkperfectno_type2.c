#include <stdio.h>
char* checkperfectno_type2();
int main(){
    printf("%s", checkperfectno_type2());
    return 0;
}

char* checkperfectno_type2()
{
    int n = 28;
    int sum = 0;    
    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }
    if (sum == n) {
        return "Perfect number\n";
    } else {
        return "Not a perfect number\n";
    }
}