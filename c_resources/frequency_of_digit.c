#include<stdio.h>
int main()
{
char str[100];
char digit;
int count = 0,i;
printf("Enter a string: ");
scanf("%s", str);
printf("Enter a digit to count: ");
scanf(" %c", &digit);
for(i = 0; str[i] != '\0'; i++)
{
if(str[i] == digit)
{
count++;
}
}
printf("The digit %c appears %d times in the string.\n", digit, count);
return 0;
}