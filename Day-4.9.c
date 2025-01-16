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

}