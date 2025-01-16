#include<stdio.h>

int main() {
    int start, end;
    printf("Enter the starting number: ");
    scanf("%d", &start);
    printf("Enter the ending number: ");
    scanf("%d", &end);
    printf("The prime numbers between %d and %d are:\n", start, end);

    int num, i;
    for (num = start; num <= end; num++) {
        int isPrime = 1; // Assume the number is prime

        // Exclude numbers less than 2
        if (num < 2) {
            isPrime = 0;
        } else {
            // Check divisors from 2 to sqrt(num)
            for (i = 2; i * i <= num; i++) {
                if (num % i == 0) {
                    isPrime = 0; // Not a prime number
                    break;
                }
            }
        }

        // Print the number if it is prime
        if (isPrime) {
            printf("%d ", num);
        }
    }
    printf("\n");
    return 0;
}
