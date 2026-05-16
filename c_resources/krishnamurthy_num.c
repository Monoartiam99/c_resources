#include <stdio.h>

// Function to calculate factorial of a digit
int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int n, temp, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;

    // Calculate the sum of factorial of digits
    while (temp > 0) {
        sum =sum+ factorial(temp % 10);
        temp =temp/ 10;
    }

    // Check if the sum of factorial of digits is equal to the number itself
    if (sum == n) {
        printf("%d is a Krishnamurthy number\n", n);
    } else {
        printf("%d is not a Krishnamurthy number\n", n);
    }

    return 0;
}
