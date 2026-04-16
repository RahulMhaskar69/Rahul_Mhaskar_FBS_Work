#include <stdio.h>
char* checkperfectno_type4(int );
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d" , &n);
    printf("%s", checkperfectno_type4(n)));
    return 0;
}

char* checkperfectno_type4(int n)
{
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