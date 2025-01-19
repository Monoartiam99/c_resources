

//Volumn of the clinder;

#include<stdio.h>
int main()
{
    float V, r, h;
  
    printf("Enter the value of r & h:");
    scanf("%f %f", &r, &h);
    V = 3.14*r*r*h;
    printf("Volume=%f", V);
   return 0;
}

// Area of the Triangle;

#include<stdio.h>
int main()
{
    float A, b, h;
  
    printf("Enter the value of b & h:");
    scanf("%f %f", &b, &h);
    A = 0.5*b*h;
    printf("Area=%f", A);
   return 0;
}
