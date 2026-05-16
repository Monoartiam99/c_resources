
#include<stdio.h>
int main()
{
    int n,i,sum,a=1,b=0;
    printf("Enter the value of n:");
    scanf("%d",&n);
    printf("Fiboacchi Series:");
    for(i=0;i<=n; i++)
    {
       
        sum = a+b;
        a=b;
        b=sum;
         printf(" %d", a);
    }
    
    return 0;

}