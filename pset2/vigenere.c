#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

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

    string plaintext = get_string("plaintext: ");
    printf("ciphertext: ");
    for (int i = 0, j = 0; i < strlen(plaintext); i++)
    {
        string key = argv[1];
        //         printf("%i\n", key);
        if (isalpha(plaintext[i]))
        {
            if (islower(plaintext[i]))
            {
                printf("%c", (plaintext[i] - 97 + tolower(key[j]) - 97) % 26 + 97);
            }
            else if (isupper(plaintext[i]))
            {
                printf("%c", (plaintext[i] - 65 + toupper(key[j]) - 65) % 26 + 65);
            }
            j = (j + 1) % strlen(argv[1]);
        }
        else
        {
            printf("%c", plaintext[i]);
        }
    }
    printf("\n");
}
