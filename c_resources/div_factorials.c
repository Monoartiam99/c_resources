
// #include<stdio.h>
// int main()
// {
//     int i,j, n, f;
//     float s=1;
//     printf("Enter the number:");
//     scanf("%d",&n);
//     if(n>0)
//     {
//         for(i=2;i<=n;i++)
//         {
//             f=1;
//             for(j=1;j<=(i+1);j++)
//             f=f*j;
//             s=s+(float)i/f;
//         }
//         printf("Result = %f",s);
//     }
//     else
//     printf("Not Valid");;
//     return 0;

// }
// #include<stdio.h>
// #include<math.h>

// int main()
// {
//     int i, n;
//     float s = 1.0, term;
//     printf("Enter the number: ");
//     scanf("%d", &n);
//     if (n > 0)
//     {
//         for (i = 2; i <= n; i++)
//         {
//             term = pow(i, i) / tgamma(i + 1);
//             s += (i % 2 == 0) ? -term : term;
//         }
//         printf("Result = %f", s);
//     }
//     else
//         printf("Not Valid");
//     return 0;
// }
#include<stdio.h>
int main()
{
    float sum =1;
    int i,j,n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    for(i=2;i<=n;i++){
      int fact = 1;
     for(j=1;j<=i+1;j++)
     {
         fact = fact*j;
     }
     float power =1;
     for(j=1;j<=i;j++)
     {
         power = power*i;
     }
     if(i%2==0)
     {
         sum = sum - power/fact;
     }
     else
     {
         sum = sum + power/fact;
     }
    }
    printf("The sum of the series up to %d terms is: %f\n",n,sum);
    return 0;
    
}