

//Fahrenheit to Celsius

#include<stdio.h>
int main()
{
    int f;
    float c;

    printf("Enter the Fahrenheit: ");
    scanf("%d", &f);

    c = (f-32) * (5.0/9.0);

    printf("Celsius=%f\n",c);
    return 0;

}

//Celsius to Fahrenheit

#include<stdio.h>
int main()
{
    int c;
    float f;

    printf("Enter the Celsius: ");
    scanf("%d", &c);

    f = (float) c*(9.0/5.0)+32;

    printf("Fahrenheit=%f\n",f);
    return 0;

}

