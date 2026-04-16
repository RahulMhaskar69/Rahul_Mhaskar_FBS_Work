#include <stdio.h>

int main() 
{
    int choice, num;

    do {
        
        printf("\nMenu:\n");
        printf("1. Check even or odd\n");
        printf("2. Check prime or not\n");
        printf("3. Check palindrome or not\n");
        printf("4. Check positive, negative or zero\n");
        printf("5. Reverse a number\n");
        printf("6. Find sum of digits\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 7) break;

        printf("Enter a number: ");
        scanf("%d", &num);

        switch(choice) 
        {
            case 1: 
                if (num % 2 == 0)
                    printf("%d is Even\n", num);
                else
                    printf("%d is Odd\n", num);
                break;

            case 2: 
            {  
                if (num <= 1) {
                    printf("%d is not a prime number\n", num);
                    break;
                }
                int isPrime = 1;
                for (int i = 2; i*i <= num; i++) {
                    if (num % i == 0) {
                        isPrime = 0;
                        break;
                    }
                }
                if (isPrime)
                    printf("%d is a prime number\n", num);
                else
                    printf("%d is not a prime number\n", num);
                break;
            }

            case 3: 
            {  
                int temp = num, rev = 0;
                while (temp != 0) {
                    rev = rev*10 + temp%10;
                    temp /= 10;
                }
                if (rev == num)
                    printf("%d is a palindrome\n", num);
                else
                    printf("%d is not a palindrome\n", num);
                break;
            }

            case 4: 
                if (num > 0)
                    printf("%d is positive\n", num);
                else if (num < 0)
                    printf("%d is negative\n", num);
                else
                    printf("%d is zero\n", num);
                break;

            case 5:
             {  
                int temp = num, rev = 0;
                while (temp != 0) {
                    rev = rev*10 + temp%10;
                    temp /= 10;
                }
                printf("Reverse of %d is %d\n", num, rev);
                break;
            }

            case 6:
             { 
                int temp = num, sum = 0;
                while (temp != 0) {
                    sum += temp % 10;
                    temp /= 10;
                }
                printf("Sum of digits of %d is %d\n", num, sum);
                break;
            }

            default:
                printf("Invalid choice\n");
        }

    } while (choice != 7);

    printf("Program exited.\n");
    return 0;
}