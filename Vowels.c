<<<<<<< HEAD
#include<stdio.h>

int main()
{
    char str[100];
    int vowels = 0, consonants = 0, spaces = 0, special = 0;
    int i;

    // Take string input
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // safer alternative to gets()

    for (i = 0; str[i] != '\0'; i++)
    {
        if ((str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') || 
            (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U'))
        {
            vowels++;
        }
        else if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
        {
            consonants++;
        }
        else if (str[i] == ' ')
        {
            spaces++;
        }
        else
        {
            special++;
        }
    }

    // Print final counts
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    printf("Spaces: %d\n", spaces);
    printf("Special characters: %d\n", special);

    return 0;
}

=======
#include<stdio.h>

int main()
{
    char str[100];
    int vowels = 0, consonants = 0, spaces = 0, special = 0;
    int i;

    // Take string input
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // safer alternative to gets()

    for (i = 0; str[i] != '\0'; i++)
    {
        if ((str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') || 
            (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U'))
        {
            vowels++;
        }
        else if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
        {
            consonants++;
        }
        else if (str[i] == ' ')
        {
            spaces++;
        }
        else
        {
            special++;
        }
    }

    // Print final counts
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    printf("Spaces: %d\n", spaces);
    printf("Special characters: %d\n", special);

    return 0;
}

>>>>>>> 1d0539be2c8dd4d487b9772f9500d80cb6ecc987
