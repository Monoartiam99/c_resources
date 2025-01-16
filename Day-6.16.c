#include <stdio.h>
#include <math.h>

int main() {
    int n, temp, sum = 0, digit, count = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;

    // Calculate the number of digits
    while (temp != 0) {
        count++;
        temp /= 10;
    }

    temp = n;

    // Calculate the sum of the digits raised to the power of the number of digits
    while (temp != 0) {
        digit = temp % 10;
        sum += pow(digit, count);
        temp /= 10;
    }

    // Check if the sum is equal to the original number
    if (sum == n) {
        printf("%d is an Armstrong number\n", n);
    } else {
        printf("%d is not an Armstrong number\n", n);
    }

    return 0;
}