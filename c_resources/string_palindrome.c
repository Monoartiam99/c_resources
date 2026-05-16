#include<stdio.h>
#include<string.h>
int main()
{
    char str[100], reversed_str[100];
    int i, j, len = 0;
    printf("Enter a string: ");
    scanf("%s", str);
    len = strlen(str);
    for(i=0, j=len-1; i<len; i++, j--)
    {
        reversed_str[i] = str[j];
    }
    reversed_str[i] = '\0';
    if(strcmp(str, reversed_str) == 0)
    {
        printf("The string is a palindrome.\n");
    }
    else
    {
        printf("The string is not a palindrome.\n");
    }
    return 0;
}