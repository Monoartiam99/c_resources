<<<<<<< HEAD
#include <stdio.h>

int fact(int n);
int main()
{
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    printf("Factorial is %d", fact(n));
    return 0;
}

int fact(int n)
{
    if (n == 0)
    {
        return 1;
    }
    int factNm1 = fact(n-1);
    int factN = factNm1*n;
    return factN;
}
=======
#include <stdio.h>

int fact(int n);
int main()
{
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    printf("Factorial is %d", fact(n));
    return 0;
}

int fact(int n)
{
    if (n == 0)
    {
        return 1;
    }
    int factNm1 = fact(n-1);
    int factN = factNm1*n;
    return factN;
}
>>>>>>> 1d0539be2c8dd4d487b9772f9500d80cb6ecc987
