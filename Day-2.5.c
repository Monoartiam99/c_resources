
#include<stdio.h>
int main()
    {
int n;
printf("Enter the number:");
scanf("%d",&n);
if(n>0){
if(n%2 == 0)
{
    printf("EVEN number is  %d\n", n);
}
else{
    printf("ODD number is %d\n", n);
}
}
else{
    printf("Not a valid number");
}

return 0;
    }
