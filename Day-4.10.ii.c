
// #include <stdio.h>

// int fact(int n);
// int main()
// {
//     int n;
//     printf("Enter the value of n:");
//     scanf("%d",&n);
//     printf("Factorial is %d", fact(n));
//     return 0;
// }

// int fact(int n)
// {
//     if (n == 0)
//     {
//         return 1;
//     }
//     int factNm1 = fact(n-1);
//     int factN = factNm1*n;
//     return factN;
// }
// int sum_of_odd_factorials(int n)
// {
//     int sum = 0;
//     for (int i = 1; i <= n; i += 2)
//     {
//         sum += fact(i);
//     }
//     return sum;
// }

#include<stdio.h>
int main()
{
    int n, sum = 0, i, j;
    printf("Enter the number of terms:");
    scanf("%d", &n);
    int odd = 1;
    for(i = 1; i <= n; i++)
    {
        int fact = 1;
        for(j = 1; j <= odd; j++)
        {
            fact = fact * j;
        }
        sum = sum + fact;
        odd = odd + 2;
    }
    printf("Sum of factorials of first %d odd numbers is: %d\n", n, sum);
    return 0;
}