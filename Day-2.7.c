
#include<stdio.h>
int main()
    {
        int a,b,sum,div,mul,sub;
    char operators;
    printf("Enter operators:");
    scanf("%c",&operators);
    printf("Enter two operators:");
    scanf("%d %d",&a,&b);
    switch (operators)
    {
    case '+': sum = a+b;
    printf("sum=%d",sum);
        break;
    case '-': sub = a-b;
    printf("sub=%d",sub);
        break;
    case '*': mul = a*b;
    printf("mul=%d",mul);
        break;
    case '/': div = a/b;
    printf("div=%d",div);
        break;
    
    
    default:
    printf("Enter the valid operators:");

    
    }
return 0;
    }
