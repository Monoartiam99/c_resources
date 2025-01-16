#include<stdio.h>
int main()
{
    int n, q, r, rev=0;
    printf("Enter the number: ");
    scanf("%d", &n);
    int temp = n;
    while(n!=0)
    
      {
          q = n/10;
        r=n%10;
        rev = rev*10 + r;
        n = q;
        }
    printf("The reverse of is %d\n", rev);
    if (temp==rev){
        printf("The number is a palindrome\n");
    }
    else{
        printf("The number is not a palindrome\n");
    }
    return 0;
}