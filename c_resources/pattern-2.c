
#include <stdio.h>
int main()
{
    int i, j, n;
    printf("Enter the n:");
    scanf("%d", &n);
    for (i = n; i >= 1; i--)
    {
        for (j = 1; j <= n; j++)
        {
           if((i+j)<=n)
           printf(" ");
           else
           printf("*");
        }

        printf("\n");
    }
    return 0;
}
