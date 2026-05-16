
#include<stdio.h>
int main()
{
char str[100];
int vowels=0,consonants=0,spaces=0, special=0;
printf("Enter the string: ");
scanf("%s",str);
int i;
for( i =0;str[i]!='\0';i++ )
{
    if((str[i]=='a'|| str[i]=='e'|| str[i]=='i'||str[i]=='o'||str[i]=='u')||(str[i]=='A'||str[i]=='E'||str[i]=='I'|| str[i]=='O'||str[i]=='U'))
    {
        vowels++;
    } else if((str[i]>= 'a'&& str[i]<='z') || (str[i]>='A' && str[i] <= 'Z'))
    {
        consonants++;
    } else if (str[i] == ' '){
    spaces++;
    } else {
        special ++;
    }

}
printf("Vowels:%d\n",vowels);
printf("Consonants:%d\n",consonants);
printf("Spaces:%d\n",spaces);
printf("Special character:%d\n",special);
return 0;
}