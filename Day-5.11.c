<<<<<<< HEAD
// //prime number checking

// #include<stdio.h>
// int main()
// {
//    int n;
//    printf("Enter the value of n:");
//    scanf("%d",&n);
//    for(i=2;i<=n;i++){
//     if(n%2)
//    }

// return 0;
// }

// C Program to check for prime number using
//  Simple Trial Division
#include <stdio.h>

int main()
{
   int n = 29;
   int count = 0;
   if (n <= 1)
      printf("%d is NOT prime\n", n);
   else
   {
      for (int i = 2; i <= n / 2; i++)
      {
         if (n % i == 0)
            count++;
      }
      if (count > 0)
         printf("%d is NOT prime\n", n);
      else
         printf("%d is prime\n", n);
   }
   return 0;
=======
// //prime number checking

// #include<stdio.h>
// int main()
// {
//    int n;
//    printf("Enter the value of n:");
//    scanf("%d",&n);
//    for(i=2;i<=n;i++){
//     if(n%2)
//    }

// return 0;
// }

// C Program to check for prime number using
//  Simple Trial Division
#include <stdio.h>

int main()
{
   int n = 29;
   int count = 0;
   if (n <= 1)
      printf("%d is NOT prime\n", n);
   else
   {
      for (int i = 2; i <= n / 2; i++)
      {
         if (n % i == 0)
            count++;
      }
      if (count > 0)
         printf("%d is NOT prime\n", n);
      else
         printf("%d is prime\n", n);
   }
   return 0;
>>>>>>> 1d0539be2c8dd4d487b9772f9500d80cb6ecc987
}