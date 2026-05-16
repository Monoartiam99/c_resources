#include <stdio.h>
int main()
{
    int a[2][3], i, j;
    printf("Elements of the array:\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
         scanf("%d", &a[i][j]);
        }
    }
    printf("Matrix is:\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("Transpose Matrix:\n");
    for (i=0; i<3; i++)
    {
        for (j=0; j<2; j++)
        {
            printf("%d ", a[j][i]);
        }
        printf("\n");
    }
    return 0;
    
}
