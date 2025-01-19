<<<<<<< HEAD
#include<stdio.h>
int main()
{
    int n,i,sum,a=0,b=1;
    printf("Enter the value of n:");
    scanf("%d",&n);
    printf("Fiboacchi Series:");
    for(i=1;i<=n; i++)
    {
       
        sum = a+b;
        a=b;
        b=sum;
         printf(" %d", a);
    }
    
    return 0;

=======
#include<stdio.h>
int main()
{
    int n,i,sum,a=0,b=1;
    printf("Enter the value of n:");
    scanf("%d",&n);
    printf("Fiboacchi Series:");
    for(i=1;i<=n; i++)
    {
       
        sum = a+b;
        a=b;
        b=sum;
         printf(" %d", a);
    }
    
    return 0;

>>>>>>> 1d0539be2c8dd4d487b9772f9500d80cb6ecc987
}