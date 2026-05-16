#include <stdio.h>
#include <string.h>
#include <ctype.h>

void shortFullName(char *fullName) {
    int i = 0;
    printf("Shortened Name: ");
    // Print the first letter of the first word as uppercase with a dot
    printf("%c. ", toupper(fullName[i]));

    // Loop through the string to find spaces and print initials
    while (fullName[i] != '\0') {
        if (fullName[i] == ' ' && fullName[i + 1] != '\0' && fullName[i + 1] != ' ') {
            printf("%c. ", toupper(fullName[i + 1]));
        }
        i++;
    }

    // Find the last word (surname) and print it as it is
    for (int j = strlen(fullName) - 1; j >= 0; j--) {
        if (fullName[j] == ' ') {
            printf("%s", &fullName[j + 1]);
            break;
        }
    }
    printf("\n");
}

int main() {
    char fullName[100];

    printf("Enter the full name: ");
    fgets(fullName, sizeof(fullName), stdin);
    fullName[strcspn(fullName, "\n")] = '\0'; // Remove trailing newline

    shortFullName(fullName);

    return 0;
}