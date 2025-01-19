<<<<<<< HEAD
#include<stdio.h>
int main()
{
    int n, i, sum = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n > 0) {
        int x[n];  // Dynamically size the array based on user input
        for (i = 0; i < n; i++) {
            printf("Enter number %d: ", i + 1);
            scanf("%d", &x[i]);
            sum += x[i];  // Add the number to the sum directly
        }

        float avg = (float)sum / n;  // Calculate the average
        printf("Average is: %.2f\n", avg);  // Print the average
    } else {
        printf("Wrong input. Please enter a positive number.\n");
    }

    return 0;
}
=======
#include<stdio.h>
int main()
{
    int n, i, sum = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n > 0) {
        int x[n];  // Dynamically size the array based on user input
        for (i = 0; i < n; i++) {
            printf("Enter number %d: ", i + 1);
            scanf("%d", &x[i]);
            sum += x[i];  // Add the number to the sum directly
        }

        float avg = (float)sum / n;  // Calculate the average
        printf("Average is: %.2f\n", avg);  // Print the average
    } else {
        printf("Wrong input. Please enter a positive number.\n");
    }

    return 0;
}
>>>>>>> 1d0539be2c8dd4d487b9772f9500d80cb6ecc987
