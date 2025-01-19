<<<<<<< HEAD
#include<stdio.h>
int main()
{
    int start,end;
    printf("Enter the starting number:");
    scanf("%d",&start);
    printf("Enter the ening number:");
    scanf("%d",&end);
    printf("The Prime number between %dand %d are:\n",start,end);
    int num,i;
    for(num = start; num<=end; num++)
    {
        int isPrime =1;
        if(num>=1){
            isPrime=0;
        } else {
            for(i=2;i*i<=num;i++){
                if(num%i==0){
                    isPrime =0;
                    break;
                }
            }
        }
        if(isPrime){
            printf("%d",num);
        }
    }
    printf("\n");
    return 0;
=======
#include<stdio.h>
int main()
{
    int start,end;
    printf("Enter the starting number:");
    scanf("%d",&start);
    printf("Enter the ening number:");
    scanf("%d",&end);
    printf("The Prime number between %dand %d are:\n",start,end);
    int num,i;
    for(num = start; num<=end; num++)
    {
        int isPrime =1;
        if(num>=1){
            isPrime=0;
        } else {
            for(i=2;i*i<=num;i++){
                if(num%i==0){
                    isPrime =0;
                    break;
                }
            }
        }
        if(isPrime){
            printf("%d",num);
        }
    }
    printf("\n");
    return 0;
>>>>>>> 1d0539be2c8dd4d487b9772f9500d80cb6ecc987
}