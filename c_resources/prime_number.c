#include<stdio.h>
int main()
{
   int num, isprime = 1,i;
   printf("Enter the number:");
   scanf("%d", &num);
   if(num <=1)
   {
      isprime = 0;
   } else {
      for(i = 2; i*i <= num; i++)
      {
         if(num % i == 0)
         {
            isprime = 0;
            break;
         }
      }
   }
   if (isprime){
      printf("%d is a prime number\n", num);
   } else {
      printf("%d is not a prime number\n", num);
   }
   return 0;
}