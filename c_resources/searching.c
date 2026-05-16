#include <stdio.h>

int main() {
    int x[10];
    int i, n, p;
    printf("Enter size: ");
    scanf("%d", &n);
    if (n > 0 && n <= 10) {
        for (i = 0; i < n; i++) {
            printf("Enter number in index %d: ", i);
            scanf("%d", &x[i]);
        }
        printf("In The Array is: ");
        for (i = 0; i < n; i++) {
            printf("%5d", x[i]);
        }
        printf("\nEnter a number to search: ");
        scanf("%d", &p);
        i = 0;
        while (i < n && x[i] != p) {
            i++;
        }
        if (i < n) {
            printf("\n\nPresent\n");
        } else {
            printf("\n\nAbsent\n");
        }
    } else {
        printf("wrong input");
    }
    return 0;
}