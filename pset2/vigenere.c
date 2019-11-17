#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int shift(char c);

int main(int argc, string argv[])
{
    // check for 2 total argument count, or exit program
    if (argc != 2)
    {
        printf("Usage: ./vigenere keyword\n");
        return 1;
    }
    for (int i = 0; i < strlen(argv[1]); i++)
    {
        if (!isalpha(argv[1][i]))
        {
            printf("Usage: ./vigenere keyword\n");
            return 1;
        }
    }

    int key = shift(argv[1][0]);
    printf("%i\n", key);
    //             return 0;

    string plaintext = get_string("plaintext: ");
    printf("ciphertext: ");
    for (int i = 0; i < strlen(plaintext); i++)
    {
        if (islower(plaintext[i]))
        {
            printf("%c", (plaintext[i] - 97 + key) % 26 + 97);
        }
        else if (isupper(plaintext[i]))
        {
            printf("%c", (plaintext[i] - 65 + key) % 26 + 65);
        }
        else
        {
            printf("%c", plaintext[i]);
        }
    }
    printf("\n");
}

int shift(char c)
{
    if (islower(c))
    {
        return c = c - 97;
    }
    else
    {
        return c = c - 65;
    }
}
