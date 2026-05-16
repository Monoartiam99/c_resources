#include<stdio.h>
int main()
{
    int i, n, sum=0;
    int x[20];
    printf("Enter the size:");
    scanf("%d", &n);
    if(n>0 && n<20)
    {
        for(i=0; i<n; i++)
        {
            printf("Enter the number in index: %d: ", i);
            scanf("%d", &x[i]);
        }
        printf("The Array :\n");
        for(i=0; i<n; i++)
        {
            printf("%5d ", x[i]);
        }
        for(i=0; i<n; i++)
        {
            sum += x[i];
        }
        printf("\nThe sum of the numbers is %d\n", sum);
     float avg = (float)sum/n;
        printf("The average of the numbers is %.2f\n", avg);
    }
    else
    {
        printf("Wrong Input.\n");
    }
    return 0;
}