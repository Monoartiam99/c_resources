// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("Enter the n:");
//     scanf("%d", &n);
//     if (n %4 == 0 && n %400== 0)
    
//         printf("Leapyear");
//     else if(n % 100==0)
//     printf("Not a Leap Year");
//     else
//         printf("Not Leapyear");

//     return 0;
// }

#include <stdio.h>
int main()
{
    int n;
    printf("Enter the n: ");
    scanf("%d", &n);
    
    if (n % 400 == 0)
        printf("Leap Year");
    else if (n % 100 == 0)
        printf("Not a Leap Year");
    else if (n % 4 == 0)
        printf("Leap Year");
    else
        printf("Not a Leap Year");

    return 0;
}
