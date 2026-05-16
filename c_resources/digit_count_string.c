#include <stdio.h>

int main() {
    int i;
    char str[100]; // Increased the size for better input handling
    int count = 0;
    printf("Enter a string: ");
    scanf("%s", str); // Corrected the scanf function

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            count++;
        }
    }
    printf("Number of digits: %d\n", count);
    return 0;
}