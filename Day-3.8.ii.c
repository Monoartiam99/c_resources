<<<<<<< HEAD
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
=======
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
>>>>>>> 1d0539be2c8dd4d487b9772f9500d80cb6ecc987
