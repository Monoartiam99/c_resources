#include <stdio.h>
int main()
{
    int num, sum = 0, temp, r, n = 0, power, i;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
    while (temp != 0)
    {
        temp /= 10;
        n++;
    }
    temp = num;
    while (temp != 0)
    {
        r = temp % 10;
        power = 1;
        for (i = 0; i < n; i++)
        {
            power *= r;
        }
        sum += power;
        temp /= 10;
    }
    if (sum == num)
    {
        printf("%d is an Armstrong number.\n", num);
    }
    else
    {
        printf("%d is not an Armstrong number.\n", num);
    }
    return 0;
}
